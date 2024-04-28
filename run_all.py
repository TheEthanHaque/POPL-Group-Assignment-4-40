import os
import subprocess
import sys

def main():
    if len(sys.argv) != 2:
        print("Usage: python run_all.py <inputdir>")
        sys.exit(1)

    inputdir = sys.argv[1]

    if not os.path.isdir(inputdir):
        print("Directory given does not exist")
        sys.exit(1)

    subprocess.run(["make"])

    for tc in os.listdir(inputdir):
        if tc.endswith(".smp"):
            tc_path = os.path.join(inputdir, tc)
            result = subprocess.run(["./simple.exe"], stdin=open(tc_path, 'r'), capture_output=True, text=True)

            # Open the corresponding .smp.out file
            out_file_path = os.path.join(inputdir, tc.replace('.smp', '.smp.out'))
            with open(out_file_path, 'r') as out_file:
                expected_output = out_file.read()

            # Compare the output of the command with the contents of the .smp.out file
            if result.stdout != expected_output:
                print("#############################################################################")
                print("Test failed for test case: ", tc_path)
                with open(tc_path, 'r') as file:
                    print("Input:")
                    print(file.read())
                print("Expected output:")
                print(expected_output)
                print("Actual output:")
                print(result.stdout)

if __name__ == "__main__":
    main()