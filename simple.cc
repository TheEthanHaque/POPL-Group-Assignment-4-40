// A Bison parser, made by GNU Bison 3.8.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2021 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.





#include "simple.hh"


// Unqualified %code blocks.
#line 25 "grammar.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "icode.hh"
#include "symtab.hh"

using namespace std;
extern yy::simple_parser::symbol_type yylex(); 
extern char * yytext;
static int stptr = 0;

extern yy::location loc;

#define INSTRUCTION_NEXT  (itab->tab.size ())
#define INSTRUCTION_LAST  (itab->tab.size () - 1)


#line 66 "simple.cc"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif


// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (false)
# endif


// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yy_stack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YY_USE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 158 "simple.cc"

  /// Build a parser object.
  simple_parser::simple_parser (symtab_t * symtab_yyarg, itab_t * itab_yyarg, char * static_mem_yyarg)
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr),
#else
    :
#endif
      symtab (symtab_yyarg),
      itab (itab_yyarg),
      static_mem (static_mem_yyarg)
  {}

  simple_parser::~simple_parser ()
  {}

  simple_parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------.
  | symbol.  |
  `---------*/



  // by_state.
  simple_parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  simple_parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  simple_parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  simple_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  simple_parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  simple_parser::symbol_kind_type
  simple_parser::by_state::kind () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return symbol_kind::S_YYEMPTY;
    else
      return YY_CAST (symbol_kind_type, yystos_[+state]);
  }

  simple_parser::stack_symbol_type::stack_symbol_type ()
  {}

  simple_parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state), YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_T_FLOAT: // T_FLOAT
        value.YY_MOVE_OR_COPY< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_T_INTEGER: // T_INTEGER
      case symbol_kind::S_op_rel: // op_rel
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_array_size: // array_size
      case symbol_kind::S_datatype: // datatype
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_T_ID: // T_ID
        value.YY_MOVE_OR_COPY< string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_l_expr: // l_expr
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_a_expr: // a_expr
      case symbol_kind::S_a_term: // a_term
      case symbol_kind::S_a_fact: // a_fact
      case symbol_kind::S_varref: // varref
      case symbol_kind::S_arr_index: // arr_index
        value.YY_MOVE_OR_COPY< symbol_t* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_varlist: // varlist
      case symbol_kind::S_expr_list: // expr_list
        value.YY_MOVE_OR_COPY< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  simple_parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s, YY_MOVE (that.location))
  {
    switch (that.kind ())
    {
      case symbol_kind::S_T_FLOAT: // T_FLOAT
        value.move< float > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_T_INTEGER: // T_INTEGER
      case symbol_kind::S_op_rel: // op_rel
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_array_size: // array_size
      case symbol_kind::S_datatype: // datatype
        value.move< int > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_T_ID: // T_ID
        value.move< string > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_l_expr: // l_expr
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_a_expr: // a_expr
      case symbol_kind::S_a_term: // a_term
      case symbol_kind::S_a_fact: // a_fact
      case symbol_kind::S_varref: // varref
      case symbol_kind::S_arr_index: // arr_index
        value.move< symbol_t* > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_varlist: // varlist
      case symbol_kind::S_expr_list: // expr_list
        value.move< vector<symbol_t*>  > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.kind_ = symbol_kind::S_YYEMPTY;
  }

#if YY_CPLUSPLUS < 201103L
  simple_parser::stack_symbol_type&
  simple_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_T_FLOAT: // T_FLOAT
        value.copy< float > (that.value);
        break;

      case symbol_kind::S_T_INTEGER: // T_INTEGER
      case symbol_kind::S_op_rel: // op_rel
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_array_size: // array_size
      case symbol_kind::S_datatype: // datatype
        value.copy< int > (that.value);
        break;

      case symbol_kind::S_T_ID: // T_ID
        value.copy< string > (that.value);
        break;

      case symbol_kind::S_l_expr: // l_expr
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_a_expr: // a_expr
      case symbol_kind::S_a_term: // a_term
      case symbol_kind::S_a_fact: // a_fact
      case symbol_kind::S_varref: // varref
      case symbol_kind::S_arr_index: // arr_index
        value.copy< symbol_t* > (that.value);
        break;

      case symbol_kind::S_varlist: // varlist
      case symbol_kind::S_expr_list: // expr_list
        value.copy< vector<symbol_t*>  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }

  simple_parser::stack_symbol_type&
  simple_parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.kind ())
    {
      case symbol_kind::S_T_FLOAT: // T_FLOAT
        value.move< float > (that.value);
        break;

      case symbol_kind::S_T_INTEGER: // T_INTEGER
      case symbol_kind::S_op_rel: // op_rel
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_array_size: // array_size
      case symbol_kind::S_datatype: // datatype
        value.move< int > (that.value);
        break;

      case symbol_kind::S_T_ID: // T_ID
        value.move< string > (that.value);
        break;

      case symbol_kind::S_l_expr: // l_expr
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_a_expr: // a_expr
      case symbol_kind::S_a_term: // a_term
      case symbol_kind::S_a_fact: // a_fact
      case symbol_kind::S_varref: // varref
      case symbol_kind::S_arr_index: // arr_index
        value.move< symbol_t* > (that.value);
        break;

      case symbol_kind::S_varlist: // varlist
      case symbol_kind::S_expr_list: // expr_list
        value.move< vector<symbol_t*>  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  simple_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  simple_parser::yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YY_USE (yyoutput);
    if (yysym.empty ())
      yyo << "empty symbol";
    else
      {
        symbol_kind_type yykind = yysym.kind ();
        yyo << (yykind < YYNTOKENS ? "token" : "nterm")
            << ' ' << yysym.name () << " ("
            << yysym.location << ": ";
        YY_USE (yykind);
        yyo << ')';
      }
  }
#endif

  void
  simple_parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  simple_parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  simple_parser::yypop_ (int n) YY_NOEXCEPT
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  simple_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  simple_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  simple_parser::debug_level_type
  simple_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  simple_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  simple_parser::state_type
  simple_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - YYNTOKENS] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - YYNTOKENS];
  }

  bool
  simple_parser::yy_pact_value_is_default_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  simple_parser::yy_table_value_is_error_ (int yyvalue) YY_NOEXCEPT
  {
    return yyvalue == yytable_ninf_;
  }

  int
  simple_parser::operator() ()
  {
    return parse ();
  }

  int
  simple_parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';
    YY_STACK_PRINT ();

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token\n";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    if (yyla.kind () == symbol_kind::S_YYerror)
    {
      // The scanner already issued an error message, process directly
      // to error recovery.  But do not keep the error token as
      // lookahead, it is too special and may lead us to an endless
      // loop in error recovery. */
      yyla.kind_ = symbol_kind::S_YYUNDEF;
      goto yyerrlab1;
    }

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.kind ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.kind ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case symbol_kind::S_T_FLOAT: // T_FLOAT
        yylhs.value.emplace< float > ();
        break;

      case symbol_kind::S_T_INTEGER: // T_INTEGER
      case symbol_kind::S_op_rel: // op_rel
      case symbol_kind::S_declaration: // declaration
      case symbol_kind::S_array_size: // array_size
      case symbol_kind::S_datatype: // datatype
        yylhs.value.emplace< int > ();
        break;

      case symbol_kind::S_T_ID: // T_ID
        yylhs.value.emplace< string > ();
        break;

      case symbol_kind::S_l_expr: // l_expr
      case symbol_kind::S_assignment: // assignment
      case symbol_kind::S_a_expr: // a_expr
      case symbol_kind::S_a_term: // a_term
      case symbol_kind::S_a_fact: // a_fact
      case symbol_kind::S_varref: // varref
      case symbol_kind::S_arr_index: // arr_index
        yylhs.value.emplace< symbol_t* > ();
        break;

      case symbol_kind::S_varlist: // varlist
      case symbol_kind::S_expr_list: // expr_list
        yylhs.value.emplace< vector<symbol_t*>  > ();
        break;

      default:
        break;
    }


      // Default location.
      {
        stack_type::slice range (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, range, yylen);
        yyerror_range[1].location = yylhs.location;
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 14: // $@1: %empty
#line 120 "grammar.y"
    {
      // First semantic action.
      // TODO: Store the next instruction entry in the parser's stack
      yylhs.location.begin.line = INSTRUCTION_NEXT;
    }
#line 713 "simple.cc"
    break;

  case 15: // $@2: %empty
#line 128 "grammar.y"
    {
      // Second semantic action
      // TODO: Jump to the end of the while body if the condition 
      // evaluates to zero.
      itab_instruction_add (itab, OP_JZ, yystack_[1].value.as < symbol_t* > ()->addr, UNUSED_ARG, TBD_ARG);
      yylhs.location.begin.line = INSTRUCTION_LAST;
    }
#line 725 "simple.cc"
    break;

  case 16: // construct_while: T_WHILE $@1 T_LPAR l_expr T_RPAR $@2 T_DO stmt
#line 137 "grammar.y"
    {
      // Third semantic action
      // TODO: generate an unconditional jump to the first instruction of l_expr
      int jump_dst = yystack_[6].location.begin.line;
      itab_instruction_add (itab, OP_JMP, NOARG, NOARG, jump_dst);
      // TODO: set the destination jump that terminates the loop
      int jmp_entry = yystack_[2].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT;
    }
#line 739 "simple.cc"
    break;

  case 17: // $@3: %empty
#line 150 "grammar.y"
    {
      // First semantic action
      // TODO: store in the stack the entry number of the next instruction to be generated (use @$.begin.line instead of $$)
      yylhs.location.begin.line = INSTRUCTION_NEXT;
    }
#line 749 "simple.cc"
    break;

  case 18: // construct_repeat: T_REPEAT $@3 stmt_list T_UNTIL T_LPAR l_expr T_RPAR
#line 160 "grammar.y"
    {
      // Second semantic action.
      // TODO: Retrieve the value stored in the stack in the first semantic action
      // above (the second symbol)
      int jump_dst = yystack_[5].location.begin.line;
      // TODO: Generate a jump-if-zero (OP_JZ) to the address stored in the first semantic
      // action of this rule
      itab_instruction_add (itab, OP_JZ, yystack_[1].value.as < symbol_t* > ()->addr, UNUSED_ARG, jump_dst);
    }
#line 763 "simple.cc"
    break;

  case 19: // $@4: %empty
#line 176 "grammar.y"
    {
      // First semantic action
      // DEFINE_ME = change to proper values.
      // TBDARG = Should modify the corresponding address (.addr#) in a later semantic action.
      // NOARG = No need to change.
      itab_instruction_add (itab, OP_JZ, yystack_[1].value.as < symbol_t* > ()->addr, NOARG, INSTRUCTION_NEXT);
      yylhs.location.begin.line = INSTRUCTION_LAST; // INSTRUCTION_NEXT or INSTRUCTION_LAST
    }
#line 776 "simple.cc"
    break;

  case 20: // $@5: %empty
#line 185 "grammar.y"
    {
      // Second semantic action
      itab_instruction_add (itab, OP_JMP, NOARG, NOARG, INSTRUCTION_NEXT);
      yylhs.location.begin.line =  INSTRUCTION_LAST; // INSTRUCTION_NEXT or INSTRUCTION_LAST

      int jmp_entry = yystack_[1].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT; // INSTRUCTION_NEXT or INSTRUCTION_LAST
    }
#line 789 "simple.cc"
    break;

  case 21: // construct_if: T_IF T_LPAR l_expr T_RPAR $@4 stmt $@5 construct_else
#line 194 "grammar.y"
    {
      // Third semantic action
      int jmp_entry = yystack_[1].location.begin.line;
      itab->tab[jmp_entry]->addr3 = INSTRUCTION_NEXT; // INSTRUCTION_NEXT or INSTRUCTION_LAST
    }
#line 799 "simple.cc"
    break;

  case 22: // $@6: %empty
#line 203 "grammar.y"
      { 
        yylhs.location.begin.line = INSTRUCTION_NEXT;
      }
#line 807 "simple.cc"
    break;

  case 25: // l_expr: a_expr op_rel a_expr
#line 213 "grammar.y"
        {
          symbol_t * res;
          res = make_temp (symtab, DTYPE_INT);
          itab_instruction_add (itab, yystack_[1].value.as < int > (), res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
          yylhs.value.as < symbol_t* > () = res;
        }
#line 818 "simple.cc"
    break;

  case 26: // op_rel: T_LT
#line 222 "grammar.y"
               { yylhs.value.as < int > () = OP_LT; }
#line 824 "simple.cc"
    break;

  case 27: // op_rel: T_GT
#line 223 "grammar.y"
               { yylhs.value.as < int > () = OP_GT; }
#line 830 "simple.cc"
    break;

  case 28: // op_rel: T_LEQ
#line 224 "grammar.y"
                { yylhs.value.as < int > () = OP_LEQ; }
#line 836 "simple.cc"
    break;

  case 29: // op_rel: T_GEQ
#line 225 "grammar.y"
                { yylhs.value.as < int > () = OP_GEQ; }
#line 842 "simple.cc"
    break;

  case 30: // assignment: T_ID arr_index T_ASSIGN a_expr
#line 229 "grammar.y"
    {
      symbol_t * sym = symbol_find (symtab, yystack_[3].value.as < string > ());
      assert (sym && "Ooops: Did not find variable!");

      symbol_t * src_temp = yystack_[0].value.as < symbol_t* > ();
      symbol_t * temp = NULL;

      if (sym->datatype != src_temp->datatype)
      {
        // Want the type of the intermediate casting variable to be the same as the left-hand-side.
        temp = make_temp (symtab, sym->datatype);
        // TASK: Complete the four TBD_ARG in both calls to itab_instruction_add.
        if (sym->datatype == DTYPE_INT)
          itab_instruction_add (itab, OP_CAST_FLOAT2INT, temp->addr, UNUSED_ARG, src_temp->addr);
        else
          itab_instruction_add (itab, OP_CAST_INT2FLOAT, temp->addr, UNUSED_ARG, src_temp->addr);

        // Final store to the array will use the intermediate variable resulting from the cast.
        src_temp = temp;
      }


      if ( yystack_[2].value.as < symbol_t* > () != NULL) 
      {
        int opcode;
        // Decide the operation code for loading the array entry into the temporary variable.
        if (src_temp->datatype == DTYPE_INT)
          opcode = OP_STORE_ARRAY_VAL_INT;
        else if (src_temp->datatype == DTYPE_FLOAT)
          opcode = OP_STORE_ARRAY_VAL_FLOAT;
        else
          assert (0 && "Unknown array type given.");
        // Decide: the target address (first argument after opcode, 
        // the base address of the array to load from (second argument after opcode,
        // and the offset address (the index) to the array (third argument after opcode).

        // TASK: Complete the two TBD_ARG in the following call to itab_instruction_add.
        // HINT: See the code corresponding to OP_LOAD_ARRAY_VAL_*
        itab_instruction_add (itab, opcode, sym->addr, yystack_[2].value.as < symbol_t* > ()->addr, src_temp->addr);
      }
      else
      {
        // This is what we were doing previously in assignment 3.
        itab_instruction_add (itab, OP_STORE, sym->addr, sym->datatype, src_temp->addr);
      }
      yylhs.value.as < symbol_t* > () = src_temp;
    }
#line 894 "simple.cc"
    break;

  case 31: // declaration: datatype T_ID array_size
#line 278 "grammar.y"
                                      { 
      assert (symtab);
      assert (itab);
      symbol_t * sym;
      if (yystack_[0].value.as < int > () == 1)
        sym = symbol_create (symtab, yystack_[1].value.as < string > (), yystack_[2].value.as < int > ()); 
      else
        sym = symbol_create_array (symtab, yystack_[1].value.as < string > (), yystack_[2].value.as < int > (), yystack_[0].value.as < int > ());
      assert (sym);
      symbol_add (symtab, sym);
    }
#line 910 "simple.cc"
    break;

  case 32: // array_size: T_LS_BRACKET T_INTEGER T_RS_BRACKET
#line 292 "grammar.y"
          { 
            assert (yystack_[1].value.as < int > () > 0 && "Array size cannot be <= 0."); 
            yylhs.value.as < int > () = yystack_[1].value.as < int > (); 
          }
#line 919 "simple.cc"
    break;

  case 33: // array_size: %empty
#line 296 "grammar.y"
        { yylhs.value.as < int > () = 1; }
#line 925 "simple.cc"
    break;

  case 34: // datatype: T_DT_INT
#line 299 "grammar.y"
                    { yylhs.value.as < int > () = DTYPE_INT; }
#line 931 "simple.cc"
    break;

  case 35: // datatype: T_DT_FLOAT
#line 300 "grammar.y"
                 { yylhs.value.as < int > () = DTYPE_FLOAT; }
#line 937 "simple.cc"
    break;

  case 36: // a_expr: a_expr T_ADD a_term
#line 304 "grammar.y"
      {
        if (yystack_[2].value.as < symbol_t* > ()->datatype != yystack_[0].value.as < symbol_t* > ()->datatype)
        {
          cout << "Incompatible datatypes\n";
          exit (1);
        }
        // TASK: Abort if the datatype of a_expr and a_term differ.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_ADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FADD instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FADD, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (1)\n";
        #endif
      }
#line 967 "simple.cc"
    break;

  case 37: // a_expr: a_expr T_SUB a_term
#line 330 "grammar.y"
      {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_SUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FSUB instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FSUB, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (2)\n";
        #endif
      }
#line 993 "simple.cc"
    break;

  case 38: // a_expr: a_term
#line 352 "grammar.y"
      {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_expr (3)\n";
        #endif
      }
#line 1004 "simple.cc"
    break;

  case 39: // a_term: a_term T_MUL a_fact
#line 361 "grammar.y"
      {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_MUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FMUL instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FMUL, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1027 "simple.cc"
    break;

  case 40: // a_term: a_term T_DIV a_fact
#line 380 "grammar.y"
      {
        // TASK: Abort if the datatype of a_expr and a_term differ.
        // TASK: Complete support for OP_SUB and OP_FSUB. See OP_ADD and OP_FADD code above.
        symbol_t * res;
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_INT)
        {
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_DIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        if (yystack_[2].value.as < symbol_t* > ()->datatype == DTYPE_FLOAT)
        {
          // TASK: Modify this semantic action to support both DTYPE_INT and DTYPE_FLOAT.
          // For DTYPE_FLOAT you should generate an OP_FDIV instruction.
          res = make_temp (symtab, yystack_[2].value.as < symbol_t* > ()->datatype);
          itab_instruction_add (itab, OP_FDIV, res->addr, yystack_[2].value.as < symbol_t* > ()->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        }
        yylhs.value.as < symbol_t* > () = res;
        
      }
#line 1051 "simple.cc"
    break;

  case 41: // a_term: a_fact
#line 400 "grammar.y"
      {
        yylhs.value.as < symbol_t* > () = yystack_[0].value.as < symbol_t* > ();
        #ifdef _SMP_DEBUG_
        cout << "On a_term (3)\n";
        #endif
      }
#line 1062 "simple.cc"
    break;

  case 42: // a_fact: varref
#line 409 "grammar.y"
      {
        symbol_t * res;
        assert (yystack_[0].value.as < symbol_t* > () && "Did not find variable");
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_LOAD, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1074 "simple.cc"
    break;

  case 43: // a_fact: T_INTEGER
#line 417 "grammar.y"
      {
        symbol_t * res;
        res = make_temp (symtab, DTYPE_INT);
        *(int*)(static_mem+stptr) = yystack_[0].value.as < int > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1087 "simple.cc"
    break;

  case 44: // a_fact: T_FLOAT
#line 426 "grammar.y"
      { 
        // TASK: Complete implementation in a fashion similar to the rule a_fact -> T_INTEGER. 
        symbol_t * res;
        res = make_temp (symtab, DTYPE_FLOAT);
        printf ("Printing debug : float = %f\n", yystack_[0].value.as < float > ());
        *(float*)(static_mem+stptr) = yystack_[0].value.as < float > ();
        itab_instruction_add (itab, OP_LOADCST, res->addr, res->datatype, stptr);
        stptr+=4;
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1102 "simple.cc"
    break;

  case 45: // a_fact: '(' a_expr ')'
#line 436 "grammar.y"
                      { yylhs.value.as < symbol_t* > () = yystack_[1].value.as < symbol_t* > (); }
#line 1108 "simple.cc"
    break;

  case 46: // a_fact: T_SUB a_fact
#line 438 "grammar.y"
      {
        symbol_t * res;
        res = make_temp (symtab, yystack_[0].value.as < symbol_t* > ()->datatype);
        itab_instruction_add (itab, OP_UMIN, res->addr, yystack_[0].value.as < symbol_t* > ()->datatype, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = res;
      }
#line 1119 "simple.cc"
    break;

  case 47: // a_fact: T_LITERAL_STR
#line 445 "grammar.y"
      {
        yylhs.value.as < symbol_t* > () = NULL;
      }
#line 1127 "simple.cc"
    break;

  case 48: // varref: T_ID arr_index
#line 451 "grammar.y"
    {
      symbol_t * sym = symbol_find (symtab, yystack_[1].value.as < string > ());
      assert (sym && "Ooops: Did not find variable!");

      yylhs.value.as < symbol_t* > () = sym;
      if (yystack_[0].value.as < symbol_t* > () != NULL) 
      {
        assert (yystack_[0].value.as < symbol_t* > ()->datatype == DTYPE_INT && "Array index must be of int type.");
        symbol_t * temp;
        // Decide the data type for the temporary variable. 
        temp = make_temp (symtab, sym->datatype);
        int opcode;
        // Decide the operation code for loading the array entry into the temporary variable.
        if (sym->datatype == DTYPE_INT)
          opcode = OP_LOAD_ARRAY_VAL_INT;
        else if (sym->datatype == DTYPE_FLOAT)
          opcode = OP_LOAD_ARRAY_VAL_FLOAT;
        else
          assert (0 && "Unknown array type given.");
        // Decide: the target address (first argument after opcode, 
        // the base address of the array to load from (second argument after opcode,
        // and the offset address (the index) to the array (third argument after opcode).
        itab_instruction_add (itab, opcode, temp->addr, sym->addr, yystack_[0].value.as < symbol_t* > ()->addr);
        yylhs.value.as < symbol_t* > () = temp;
      }
    }
#line 1158 "simple.cc"
    break;

  case 49: // arr_index: T_LS_BRACKET a_expr T_RS_BRACKET
#line 479 "grammar.y"
                                             { yylhs.value.as < symbol_t* > () = yystack_[1].value.as < symbol_t* > (); }
#line 1164 "simple.cc"
    break;

  case 50: // arr_index: %empty
#line 480 "grammar.y"
      { yylhs.value.as < symbol_t* > () = NULL; }
#line 1170 "simple.cc"
    break;

  case 51: // read: T_READ varlist
#line 484 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to read (" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_READ, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 1187 "simple.cc"
    break;

  case 52: // write: T_WRITE expr_list
#line 499 "grammar.y"
    {
      vector_itersym_t iter;
      int ii = 0;
      for (iter = yystack_[0].value.as < vector<symbol_t*>  > ().begin (); iter != yystack_[0].value.as < vector<symbol_t*>  > ().end (); iter++, ii++)
      {
        #ifdef _SMP_DEBUG_
        cout << "Symbol to write(" << ii << "):";
        symbol_show (*iter);
        #endif
        itab_instruction_add (itab, OP_WRITE, (*iter)->addr, (*iter)->datatype, NOARG);
      }
    }
#line 1204 "simple.cc"
    break;

  case 53: // varlist: varlist T_COMMA varref
#line 513 "grammar.y"
                                  { yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); }
#line 1210 "simple.cc"
    break;

  case 54: // varlist: varref
#line 514 "grammar.y"
               { yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); }
#line 1216 "simple.cc"
    break;

  case 55: // expr_list: expr_list T_COMMA a_expr
#line 518 "grammar.y"
    { 
      yystack_[2].value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); yylhs.value.as < vector<symbol_t*>  > () = yystack_[2].value.as < vector<symbol_t*>  > (); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (1)\n";
      #endif
    }
#line 1227 "simple.cc"
    break;

  case 56: // expr_list: a_expr
#line 525 "grammar.y"
    { 
      yylhs.value.as < vector<symbol_t*>  > ().push_back (yystack_[0].value.as < symbol_t* > ()); 
      #ifdef _SMP_DEBUG_
      cout << "In expr_list (2)\n";
      #endif
    }
#line 1238 "simple.cc"
    break;


#line 1242 "simple.cc"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        context yyctx (*this, yyla);
        std::string msg = yysyntax_error_ (yyctx);
        error (yyla.location, YY_MOVE (msg));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.kind () == symbol_kind::S_YYEOF)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    // Pop stack until we find a state that shifts the error token.
    for (;;)
      {
        yyn = yypact_[+yystack_[0].state];
        if (!yy_pact_value_is_default_ (yyn))
          {
            yyn += symbol_kind::S_YYerror;
            if (0 <= yyn && yyn <= yylast_
                && yycheck_[yyn] == symbol_kind::S_YYerror)
              {
                yyn = yytable_[yyn];
                if (0 < yyn)
                  break;
              }
          }

        // Pop the current state because it cannot handle the error token.
        if (yystack_.size () == 1)
          YYABORT;

        yyerror_range[1].location = yystack_[0].location;
        yy_destroy_ ("Error: popping", yystack_[0]);
        yypop_ ();
        YY_STACK_PRINT ();
      }
    {
      stack_symbol_type error_token;

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    YY_STACK_PRINT ();
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  simple_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what ());
  }

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  simple_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr;
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              else
                goto append;

            append:
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }

  std::string
  simple_parser::symbol_name (symbol_kind_type yysymbol)
  {
    return yytnamerr_ (yytname_[yysymbol]);
  }



  // simple_parser::context.
  simple_parser::context::context (const simple_parser& yyparser, const symbol_type& yyla)
    : yyparser_ (yyparser)
    , yyla_ (yyla)
  {}

  int
  simple_parser::context::expected_tokens (symbol_kind_type yyarg[], int yyargn) const
  {
    // Actual number of expected tokens
    int yycount = 0;

    const int yyn = yypact_[+yyparser_.yystack_[0].state];
    if (!yy_pact_value_is_default_ (yyn))
      {
        /* Start YYX at -YYN if negative to avoid negative indexes in
           YYCHECK.  In other words, skip the first -YYN actions for
           this state because they are default actions.  */
        const int yyxbegin = yyn < 0 ? -yyn : 0;
        // Stay within bounds of both yycheck and yytname.
        const int yychecklim = yylast_ - yyn + 1;
        const int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
        for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
          if (yycheck_[yyx + yyn] == yyx && yyx != symbol_kind::S_YYerror
              && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
            {
              if (!yyarg)
                ++yycount;
              else if (yycount == yyargn)
                return 0;
              else
                yyarg[yycount++] = YY_CAST (symbol_kind_type, yyx);
            }
      }

    if (yyarg && yycount == 0 && 0 < yyargn)
      yyarg[0] = symbol_kind::S_YYEMPTY;
    return yycount;
  }






  int
  simple_parser::yy_syntax_error_arguments_ (const context& yyctx,
                                                 symbol_kind_type yyarg[], int yyargn) const
  {
    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state merging
         (from LALR or IELR) and default reductions corrupt the expected
         token list.  However, the list is correct for canonical LR with
         one exception: it will still contain any token that will not be
         accepted due to an error action in a later state.
    */

    if (!yyctx.lookahead ().empty ())
      {
        if (yyarg)
          yyarg[0] = yyctx.token ();
        int yyn = yyctx.expected_tokens (yyarg ? yyarg + 1 : yyarg, yyargn - 1);
        return yyn + 1;
      }
    return 0;
  }

  // Generate an error message.
  std::string
  simple_parser::yysyntax_error_ (const context& yyctx) const
  {
    // Its maximum.
    enum { YYARGS_MAX = 5 };
    // Arguments of yyformat.
    symbol_kind_type yyarg[YYARGS_MAX];
    int yycount = yy_syntax_error_arguments_ (yyctx, yyarg, YYARGS_MAX);

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
      default: // Avoid compiler warnings.
        YYCASE_ (0, YY_("syntax error"));
        YYCASE_ (1, YY_("syntax error, unexpected %s"));
        YYCASE_ (2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_ (3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_ (4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_ (5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    std::ptrdiff_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += symbol_name (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char simple_parser::yypact_ninf_ = -53;

  const signed char simple_parser::yytable_ninf_ = -1;

  const signed char
  simple_parser::yypact_[] =
  {
      45,   -53,   -53,    16,     1,     0,    45,   -53,   -53,   -16,
      40,    28,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    23,
     -53,   -53,     0,   -53,    30,     1,   -53,   -53,   -53,     1,
      18,    19,   -53,   -53,    31,     1,    43,    -5,    45,    22,
       1,   -53,    45,    33,   -53,    16,   -53,    -1,     1,     1,
       1,     1,     1,     5,     1,    45,   -53,    -6,     1,    34,
      27,   -53,    48,   -53,   -53,   -53,    19,    19,   -53,   -53,
      18,   -53,    18,    39,    42,   -53,   -53,   -53,   -53,   -53,
       1,    36,     1,   -53,    45,    18,   -53,    44,    49,   -53,
     -53,    45,    35,   -53,   -53,   -53,    45,   -53
  };

  const signed char
  simple_parser::yydefact_[] =
  {
       0,    34,    35,     0,     0,    50,     0,    17,    14,     0,
       0,     0,     4,    12,     9,    10,    11,     5,     8,     0,
       6,     7,    50,    54,    51,     0,    47,    43,    44,     0,
      56,    38,    41,    42,    52,     0,     0,     0,     0,     0,
       0,     1,     2,    33,    48,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     3,     0,    31,    53,    45,    36,    37,    39,    40,
      55,    49,    30,     0,     0,    19,    26,    27,    28,    29,
       0,     0,     0,    15,     0,    25,    32,     0,     0,    20,
      18,     0,    24,    16,    22,    21,     0,    23
  };

  const signed char
  simple_parser::yypgoto_[] =
  {
     -53,   -53,    -3,   -40,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -52,   -53,   -53,   -53,   -53,
     -53,    -4,   -20,   -12,    -2,    55,   -53,   -53,   -53,   -53
  };

  const signed char
  simple_parser::yydefgoto_[] =
  {
       0,    10,    11,    12,    13,    14,    39,    88,    15,    38,
      16,    84,    92,    95,    96,    59,    80,    17,    18,    63,
      19,    60,    31,    32,    33,    36,    20,    21,    24,    34
  };

  const signed char
  simple_parser::yytable_[] =
  {
      30,    23,    61,    37,    48,    49,    74,    25,    55,    55,
      48,    49,    26,    46,    40,    61,    35,    56,    73,    22,
      27,    28,    71,    48,    49,    47,    50,    51,    66,    67,
      87,    53,    48,    49,    22,    57,    65,    29,    68,    69,
      41,    43,    42,    64,    89,    45,    52,    54,    70,    62,
      72,    93,    58,    86,     1,     2,    97,     3,     4,    76,
      77,    78,    79,     5,    94,    75,     6,    81,     7,    82,
       0,     8,     9,    83,    91,    90,    85,    44
  };

  const signed char
  simple_parser::yycheck_[] =
  {
       4,     3,    42,     6,     5,     6,    58,     6,    14,    14,
       5,     6,    11,    25,    30,    55,    16,    22,    24,    18,
      19,    20,    17,     5,     6,    29,     7,     8,    48,    49,
      82,    35,     5,     6,    18,    38,    37,    36,    50,    51,
       0,    18,    14,    45,    84,    15,    15,     4,    52,    16,
      54,    91,    30,    17,     9,    10,    96,    12,    13,    32,
      33,    34,    35,    18,    29,    31,    21,    19,    23,    30,
      -1,    26,    27,    31,    25,    31,    80,    22
  };

  const signed char
  simple_parser::yystos_[] =
  {
       0,     9,    10,    12,    13,    18,    21,    23,    26,    27,
      39,    40,    41,    42,    43,    46,    48,    55,    56,    58,
      64,    65,    18,    62,    66,     6,    11,    19,    20,    36,
      59,    60,    61,    62,    67,    16,    63,    40,    47,    44,
      30,     0,    14,    18,    63,    15,    61,    59,     5,     6,
       7,     8,    15,    59,     4,    14,    22,    40,    30,    53,
      59,    41,    16,    57,    62,    37,    60,    60,    61,    61,
      59,    17,    59,    24,    53,    31,    32,    33,    34,    35,
      54,    19,    30,    31,    49,    59,    17,    53,    45,    41,
      31,    25,    50,    41,    29,    51,    52,    41
  };

  const signed char
  simple_parser::yyr1_[] =
  {
       0,    38,    39,    40,    40,    41,    41,    41,    41,    41,
      41,    41,    41,    42,    44,    45,    43,    47,    46,    49,
      50,    48,    52,    51,    51,    53,    54,    54,    54,    54,
      55,    56,    57,    57,    58,    58,    59,    59,    59,    60,
      60,    60,    61,    61,    61,    61,    61,    61,    62,    63,
      63,    64,    65,    66,    66,    67,    67
  };

  const signed char
  simple_parser::yyr2_[] =
  {
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     0,     8,     0,     7,     0,
       0,     8,     0,     3,     0,     3,     1,     1,     1,     1,
       4,     3,     3,     0,     1,     1,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     3,     2,     1,     2,     3,
       0,     2,     2,     3,     1,     3,     1
  };


#if YYDEBUG || 1
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a YYNTOKENS, nonterminals.
  const char*
  const simple_parser::yytname_[] =
  {
  "T_EOF", "error", "\"invalid token\"", "T_NUM", "T_ASSIGN", "T_ADD",
  "T_SUB", "T_MUL", "T_DIV", "T_DT_INT", "T_DT_FLOAT", "T_LITERAL_STR",
  "T_READ", "T_WRITE", "T_SEMICOLON", "T_COMMA", "T_LS_BRACKET",
  "T_RS_BRACKET", "T_ID", "T_INTEGER", "T_FLOAT", "T_BEGIN", "T_END",
  "T_REPEAT", "T_UNTIL", "T_DO", "T_WHILE", "T_IF", "T_THEN", "T_ELSE",
  "T_LPAR", "T_RPAR", "T_LT", "T_GT", "T_LEQ", "T_GEQ", "'('", "')'",
  "$accept", "program", "stmt_list", "stmt", "block", "construct_while",
  "$@1", "$@2", "construct_repeat", "$@3", "construct_if", "$@4", "$@5",
  "construct_else", "$@6", "l_expr", "op_rel", "assignment", "declaration",
  "array_size", "datatype", "a_expr", "a_term", "a_fact", "varref",
  "arr_index", "read", "write", "varlist", "expr_list", YY_NULLPTR
  };
#endif


#if YYDEBUG
  const short
  simple_parser::yyrline_[] =
  {
       0,    98,    98,   101,   102,   105,   106,   107,   108,   109,
     110,   111,   112,   115,   120,   128,   119,   150,   149,   176,
     185,   172,   203,   202,   207,   212,   222,   223,   224,   225,
     228,   278,   291,   296,   299,   300,   303,   329,   351,   360,
     379,   399,   408,   416,   425,   436,   437,   444,   450,   479,
     480,   483,   498,   513,   514,   517,   524
  };

  void
  simple_parser::yy_stack_print_ () const
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  void
  simple_parser::yy_reduce_print_ (int yyrule) const
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1770 "simple.cc"

#line 533 "grammar.y"


void yy::simple_parser::error (const yy::location & l, const std::string & s) {
	std::cerr << "Simple Parser error at " << l << " : " << s << std::endl;
}

