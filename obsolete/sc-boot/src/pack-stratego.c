#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_Wld_0;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Op_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_Test_1;
Symbol sym_Not_1;
Symbol sym_Seq_2;
Symbol sym_Choice_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_GChoice_2;
Symbol sym_LGChoice_2;
Symbol sym_Bagof_1;
Symbol sym_SVar_1;
Symbol sym_Rec_2;
Symbol sym_Let_2;
Symbol sym_SDef_3;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDef_4;
Symbol sym_DontInline_0;
Symbol sym_Call_2;
Symbol sym_Path_2;
Symbol sym_Cong_2;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_All_1;
Symbol sym_Thread_1;
Symbol sym_Assign_2;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_MatchVar_1;
Symbol sym_MatchFun_1;
Symbol sym_Scope_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_ScopeDefault_1;
Symbol sym_DynRuleScope_2;
Symbol sym_MA_2;
Symbol sym_AM_2;
Symbol sym_BA_2;
Symbol sym_BAM_3;
Symbol sym_Con_3;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_InfixApp_3;
Symbol sym_Explode_2;
Symbol sym_ExplodeCong_2;
Symbol sym_As_2;
Symbol sym_BuildDefault_1;
Symbol sym_Rule_3;
Symbol sym_StratRule_3;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_RDef_3;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_Mod_2;
Symbol sym_Overlay_3;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Imports_1;
Symbol sym_Specification_1;
Symbol sym_Include_1;
Symbol sym_Prefix_1;
Symbol sym_NoDependency_0;
Symbol sym_Dependency_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_NoKind_0 = ATmakeSymbol("NoKind", 0, ATfalse);
  ATprotectSymbol(sym_NoKind_0);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_GChoice_2 = ATmakeSymbol("GChoice", 2, ATfalse);
  ATprotectSymbol(sym_GChoice_2);
  sym_LGChoice_2 = ATmakeSymbol("LGChoice", 2, ATfalse);
  ATprotectSymbol(sym_LGChoice_2);
  sym_Bagof_1 = ATmakeSymbol("Bagof", 1, ATfalse);
  ATprotectSymbol(sym_Bagof_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDef_4 = ATmakeSymbol("SDef", 4, ATfalse);
  ATprotectSymbol(sym_SDef_4);
  sym_DontInline_0 = ATmakeSymbol("DontInline", 0, ATfalse);
  ATprotectSymbol(sym_DontInline_0);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_Thread_1 = ATmakeSymbol("Thread", 1, ATfalse);
  ATprotectSymbol(sym_Thread_1);
  sym_Assign_2 = ATmakeSymbol("Assign", 2, ATfalse);
  ATprotectSymbol(sym_Assign_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_MatchVar_1 = ATmakeSymbol("MatchVar", 1, ATfalse);
  ATprotectSymbol(sym_MatchVar_1);
  sym_MatchFun_1 = ATmakeSymbol("MatchFun", 1, ATfalse);
  ATprotectSymbol(sym_MatchFun_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_Mod_2 = ATmakeSymbol("Mod", 2, ATfalse);
  ATprotectSymbol(sym_Mod_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
  ATprotectSymbol(sym_Prefix_1);
  sym_NoDependency_0 = ATmakeSymbol("NoDependency", 0, ATfalse);
  ATprotectSymbol(sym_NoDependency_0);
  sym_Dependency_1 = ATmakeSymbol("Dependency", 1, ATfalse);
  ATprotectSymbol(sym_Dependency_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_b_20;
ATerm term_r_19;
ATerm term_k_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_q_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_e_18;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_h_17;
ATerm term_u_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_f_16;
ATerm term_z_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_e_15;
ATerm term_c_15;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_r_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_r_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_m_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_o_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_m_8;
ATerm term_k_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_d_8;
ATerm term_a_8;
ATerm term_y_7;
void init_constant_terms (void)
{
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATinsert(ATempty, term_b_10);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATinsert(ATempty, term_z_12);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATinsert(CheckATermList(term_a_13), term_y_12);
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATinsert(CheckATermList(term_b_13), term_x_12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATinsert(ATempty, term_u_15);
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_a_8, term_v_15);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__3, term_f_16, term_l_16, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATinsert(ATempty, term_x_18);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm h_55 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm o_46 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm h_36 (ATerm), ATerm i_36 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_55 (ATerm), ATerm a_56 (ATerm));
ATerm Tl_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm j_55 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_47 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm d_70 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm e_61 (ATerm));
ATerm zip_1 (ATerm, ATerm g_61 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm p_58 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm r_47 (ATerm), ATerm s_47 (ATerm), ATerm t_47 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm));
ATerm for_3 (ATerm, ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm m_69 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm x_47 (ATerm), ATerm y_47 (ATerm), ATerm z_47 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm m_48 (ATerm), ATerm n_48 (ATerm), ATerm o_48 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm c_70 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm b_64 (ATerm));
ATerm separate_by_1 (ATerm, ATerm c_64 (ATerm));
ATerm debug_1 (ATerm, ATerm d_54 (ATerm));
ATerm obsolete_1 (ATerm, ATerm k_54 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm q_47 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_52 (ATerm));
ATerm try_1 (ATerm, ATerm n_69 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm r_56 (ATerm));
ATerm list_1 (ATerm, ATerm q_62 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_53 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm q_52 (ATerm), ATerm r_52 (ATerm));
ATerm Option_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_63 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_51 (ATerm));
ATerm map_1 (ATerm, ATerm o_62 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_51 (ATerm));
ATerm Program_1 (ATerm, ATerm t_46 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_46 (ATerm));
ATerm Help_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_52 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_51 (ATerm));
ATerm parse_options_1 (ATerm, ATerm y_51 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm o_47 (ATerm, ATerm (ATerm)), ATerm p_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_47 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm a_47 (ATerm), ATerm b_47 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm h_55 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm b_1 = t;
      int g_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, b_0);
          LocalPopChoice(g_7);
        }
      else
        {
          t = b_1;
          {
            ATerm h_7 = t;
            int k_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm z_0 = NULL;
                  z_0 = t;
                  x_0 :
                  if(!(match_int(z_0, 47)))
                    _fail(t);
                  return(t);
                }
                t = Cons_2(t, d_0, _id);
                LocalPopChoice(k_7);
              }
            else
              {
                t = h_7;
                {
                  ATerm l_0 (ATerm t)
                  {
                    ATerm a_1 = NULL;
                    a_1 = t;
                    y_0 :
                    if(!(match_int(a_1, 46)))
                      _fail(t);
                    return(t);
                  }
                  t = Cons_2(t, l_0, h_55);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, b_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm o_46 (ATerm))
{
  ATerm f_1 = NULL,g_1 = NULL;
  f_1 = t;
  e_1 :
  if(match_cons(f_1, sym_Imports_1))
    {
      g_1 = ATgetArgument(f_1, 0);
      {
        ATerm i_1 = NULL;
        t = not_null(g_1);
        {
          t = o_46(t);
          {
            i_1 = t;
            t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(i_1));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm s_1 = NULL;
  ATerm m_0 (ATerm t)
  {
    ATerm p_1 = NULL,q_1 = NULL;
    p_1 = t;
    n_1 :
    if(match_cons(p_1, sym_Specification_1))
      {
        q_1 = ATgetArgument(p_1, 0);
        {
          t = not_null(q_1);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm x_7 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                t = x_7;
              return(t);
            }
            t = filter_1(t, n_0);
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, m_0);
  {
    t = concat_0(t);
    {
      s_1 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(s_1));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_36 (ATerm), ATerm i_36 (ATerm))
{
  ATerm a_2 = NULL,b_2 = NULL,c_2 = NULL;
  a_2 = t;
  z_1 :
  if(match_cons(a_2, sym__2))
    {
      b_2 = ATgetArgument(a_2, 0);
      c_2 = ATgetArgument(a_2, 1);
      {
        ATerm f_2 = NULL;
        t = not_null(b_2);
        {
          ATerm h_2 = NULL;
          t = h_36(t);
          {
            f_2 = t;
            {
              t = not_null(c_2);
              {
                t = i_36(t);
                {
                  h_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_2), not_null(h_2));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
  q_2 = t;
  n_2 :
  if(match_cons(q_2, sym__2))
    {
      r_2 = ATgetArgument(q_2, 0);
      u_2 = ATgetArgument(q_2, 1);
      o_2 :
      if(match_cons(r_2, sym__2))
        {
          s_2 = ATgetArgument(r_2, 0);
          t_2 = ATgetArgument(r_2, 1);
          p_2 :
          if(match_cons(u_2, sym__2))
            {
              v_2 = ATgetArgument(u_2, 0);
              w_2 = ATgetArgument(u_2, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_2)), not_null(s_2)), (ATerm) ATinsert(CheckATermList(not_null(w_2)), not_null(t_2)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip3_0 (ATerm t)
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  d_3 :
  if(((ATgetType(e_3) == AT_LIST) && ((ATermList) e_3 != ATempty)))
    {
      f_3 = ATgetFirst((ATermList) e_3);
      g_3 = (ATerm) ATgetNext((ATermList) e_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_3), not_null(g_3));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm m_3 = NULL;
  m_3 = t;
  l_3 :
  if(((ATermList) m_3 == ATempty))
    {
      t = term_y_7;
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL;
  t_3 = t;
  r_3 :
  if(match_cons(t_3, sym__2))
    {
      u_3 = ATgetArgument(t_3, 0);
      v_3 = ATgetArgument(t_3, 1);
      s_3 :
      if(match_cons(v_3, sym_Specification_1))
        {
          w_3 = ATgetArgument(v_3, 0);
          {
            t = not_null(w_3);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm y_3 = NULL,z_3 = NULL;
                y_3 = t;
                q_3 :
                if(match_cons(y_3, sym_Imports_1))
                  {
                    z_3 = ATgetArgument(y_3, 0);
                    t = not_null(z_3);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = filter_1(t, o_0);
              t = concat_0(t);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_7;
  z_7 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_8, not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = z_7;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_8;
  b_8 = t;
  {
    t = error_0(t);
    {
      t = term_d_8;
      t = exit_0(t);
    }
  }
  t = b_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm i_4 = NULL;
  i_4 = t;
  t = SSL_ReadFromFile(not_null(i_4));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_55 (ATerm), ATerm a_56 (ATerm))
{
  ATerm n_4 = NULL,p_4 = NULL;
  ATerm e_8;
  e_8 = t;
  {
    ATerm o_4 = NULL;
    t = z_55(t);
    {
      o_4 = t;
      if(((n_4 != NULL) && (n_4 != o_4)))
        _fail(o_4);
      else
        n_4 = o_4;
    }
  }
  t = e_8;
  {
    ATerm q_4 = NULL;
    t = a_56(t);
    {
      q_4 = t;
      if(((p_4 != NULL) && (p_4 != q_4)))
        _fail(q_4);
      else
        p_4 = q_4;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_4), not_null(p_4));
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(((ATgetType(v_4) == AT_LIST) && ((ATermList) v_4 != ATempty)))
    {
      w_4 = ATgetFirst((ATermList) v_4);
      x_4 = (ATerm) ATgetNext((ATermList) v_4);
      t = not_null(x_4);
    }
  else
    _fail(t);
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm c_5 = NULL;
  c_5 = t;
  {
    t = SSL_open_file(not_null(c_5), (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue)));
    t = SSL_close_file(not_null(c_5));
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        t = not_null(l_5);
        {
          ATerm t_5 (ATerm t)
          {
            ATerm f_8 = t;
            int g_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
                o_5 = t;
                h_5 :
                if(((ATgetType(o_5) == AT_LIST) && ((ATermList) o_5 != ATempty)))
                  {
                    p_5 = ATgetFirst((ATermList) o_5);
                    q_5 = (ATerm) ATgetNext((ATermList) o_5);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_5)), term_h_8), not_null(p_5));
                      {
                        t = concat_strings_0(t);
                        t = file_exists_0(t);
                      }
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(g_8);
              }
            else
              {
                t = f_8;
                {
                  t = Tl_0(t);
                  t = t_5(t);
                }
              }
            return(t);
          }
          t = t_5(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm j_55 (ATerm))
{
  t = basename_0(t);
  {
    ATerm p_0 (ATerm t)
    {
      t = term_i_8;
      t = j_55(t);
      return(t);
    }
    t = split_2(t, _id, p_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm w_5 = NULL;
  w_5 = t;
  {
    ATerm j_8;
    j_8 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, (ATerm) ATinsert(CheckATermList(not_null(w_5)), term_m_8));
      t = call_0(t);
    }
    t = j_8;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm b_6 = NULL,c_6 = NULL,d_6 = NULL;
  b_6 = t;
  a_6 :
  if(match_cons(b_6, sym__2))
    {
      c_6 = ATgetArgument(b_6, 0);
      d_6 = ATgetArgument(b_6, 1);
      t = SSL_call(not_null(c_6), not_null(d_6));
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  i_6 :
  if(((ATgetType(j_6) == AT_LIST) && ((ATermList) j_6 != ATempty)))
    {
      k_6 = ATgetFirst((ATermList) j_6);
      l_6 = (ATerm) ATgetNext((ATermList) j_6);
      t = not_null(k_6);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
  r_6 = t;
  q_6 :
  if(match_cons(r_6, sym__2))
    {
      s_6 = ATgetArgument(r_6, 0);
      t_6 = ATgetArgument(r_6, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(t_6));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm z_6 = NULL;
  ATerm b_7 = NULL;
  z_6 = t;
  {
    ATerm c_7 = NULL;
    t = term_i_8;
    {
      t = m_47(t);
      {
        c_7 = t;
        if(((b_7 != NULL) && (b_7 != c_7)))
          _fail(c_7);
        else
          b_7 = c_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), not_null(z_6));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  n_7 :
  if(match_cons(o_7, sym__0))
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_7 = NULL;
          ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
          t = term_z_8;
          {
            ATerm q_0 (ATerm t)
            {
              t = term_a_9;
              return(t);
            }
            t = rewrite_1(t, q_0);
            {
              q_7 = t;
              i_7 :
              if(match_cons(q_7, sym_Defined_2))
                {
                  r_7 = ATgetArgument(q_7, 0);
                  s_7 = ATgetArgument(q_7, 1);
                  j_7 :
                  if(match_string(r_7, "e_0"))
                    {
                      if(((p_7 != NULL) && (p_7 != s_7)))
                        _fail(s_7);
                      else
                        p_7 = s_7;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          }
          t = not_null(p_7);
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            ATerm t_7 = NULL;
            ATerm u_7 = NULL,v_7 = NULL,w_7 = NULL;
            t = term_z_8;
            {
              ATerm r_0 (ATerm t)
              {
                t = term_a_9;
                return(t);
              }
              t = rewrite_1(t, r_0);
              {
                u_7 = t;
                l_7 :
                if(match_cons(u_7, sym_Defined_2))
                  {
                    v_7 = ATgetArgument(u_7, 0);
                    w_7 = ATgetArgument(u_7, 1);
                    m_7 :
                    if(match_string(v_7, "c_0"))
                      {
                        if(((t_7 != NULL) && (t_7 != w_7)))
                          _fail(w_7);
                        else
                          t_7 = w_7;
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
              }
            }
            t = not_null(t_7);
          }
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  t = SSL_int_to_string(not_null(c_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm l_8 = NULL;
  ATerm n_8 = NULL,o_8 = NULL;
  l_8 = t;
  {
    ATerm p_8 = NULL,r_8 = NULL;
    ATerm q_8 = NULL;
    t = term_i_8;
    {
      t = get_pid_0(t);
      {
        t = int_to_string_0(t);
        {
          q_8 = t;
          if(((p_8 != NULL) && (p_8 != q_8)))
            _fail(q_8);
          else
            p_8 = q_8;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_9, not_null(p_8));
      {
        ATerm s_8 = NULL,w_8 = NULL;
        t = conc_strings_0(t);
        {
          r_8 = t;
          {
            if(((o_8 != NULL) && (o_8 != r_8)))
              _fail(r_8);
            else
              o_8 = r_8;
            {
              ATerm t_8 = NULL,v_8 = NULL;
              ATerm u_8 = NULL;
              t = term_i_8;
              {
                t = Prefix_0(t);
                {
                  u_8 = t;
                  if(((t_8 != NULL) && (t_8 != u_8)))
                    _fail(u_8);
                  else
                    t_8 = u_8;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), term_c_9);
                {
                  t = conc_strings_0(t);
                  {
                    v_8 = t;
                    if(((s_8 != NULL) && (s_8 != v_8)))
                      _fail(v_8);
                    else
                      s_8 = v_8;
                  }
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(o_8)), term_h_9), not_null(l_8)), term_g_9), term_d_9));
                {
                  t = call_0(t);
                  {
                    t = not_null(o_8);
                    {
                      t = ReadFromFile_0(t);
                      {
                        w_8 = t;
                        {
                          if(((n_8 != NULL) && (n_8 != w_8)))
                            _fail(w_8);
                          else
                            n_8 = w_8;
                          {
                            t = (ATerm) ATinsert(ATempty, not_null(o_8));
                            t = rm_files_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    t = not_null(n_8);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_0 (ATerm t)
      {
        t = term_o_9;
        return(t);
      }
      t = guarantee_extension_1(t, s_0);
      {
        t = split_2(t, _id, d_70);
        {
          t = find_in_path_0(t);
          t = split_2(t, _id, parse_mod_0);
        }
      }
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm s_9 = t;
        int y_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = term_z_9;
              return(t);
            }
            t = guarantee_extension_1(t, t_0);
            {
              t = split_2(t, _id, d_70);
              {
                t = find_in_path_0(t);
                t = split_2(t, _id, ReadFromFile_0);
              }
            }
            LocalPopChoice(y_9);
          }
        else
          {
            t = s_9;
            {
              ATerm e_9 = NULL;
              ATerm f_9 = NULL;
              f_9 = t;
              if(((e_9 != NULL) && (e_9 != f_9)))
                _fail(f_9);
              else
                e_9 = f_9;
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(term_m_10), not_null(e_9)), term_a_10);
                t = fatal_error_0(t);
              }
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm n_9 = NULL;
  ATerm p_9 = NULL,q_9 = NULL;
  n_9 = t;
  {
    ATerm r_9 = NULL;
    ATerm t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL;
    t = not_null(n_9);
    {
      r_9 = t;
      {
        t = SSL_explode_term(not_null(r_9));
        {
          t_9 = t;
          k_9 :
          if(match_cons(t_9, sym__2))
            {
              u_9 = ATgetArgument(t_9, 0);
              v_9 = ATgetArgument(t_9, 1);
              l_9 :
              if(match_string(u_9, ""))
                {
                  m_9 :
                  if(((ATgetType(v_9) == AT_LIST) && ((ATermList) v_9 != ATempty)))
                    {
                      w_9 = ATgetFirst((ATermList) v_9);
                      x_9 = (ATerm) ATgetNext((ATermList) v_9);
                      {
                        if(((q_9 != NULL) && (q_9 != w_9)))
                          _fail(w_9);
                        else
                          q_9 = w_9;
                        if(((p_9 != NULL) && (p_9 != x_9)))
                          _fail(x_9);
                        else
                          p_9 = x_9;
                      }
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(q_9);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  e_10 = t;
  c_10 :
  if(match_cons(e_10, sym__5))
    {
      f_10 = ATgetArgument(e_10, 0);
      i_10 = ATgetArgument(e_10, 1);
      j_10 = ATgetArgument(e_10, 2);
      k_10 = ATgetArgument(e_10, 3);
      l_10 = ATgetArgument(e_10, 4);
      d_10 :
      if(((ATgetType(f_10) == AT_LIST) && ((ATermList) f_10 != ATempty)))
        {
          g_10 = ATgetFirst((ATermList) f_10);
          h_10 = (ATerm) ATgetNext((ATermList) f_10);
          t = (ATerm) ATmakeAppl(sym__5, not_null(h_10), not_null(i_10), not_null(j_10), not_null(k_10), (ATerm) ATinsert(CheckATermList(not_null(l_10)), not_null(g_10)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm v_10 = NULL,w_10 = NULL,x_10 = NULL;
  v_10 = t;
  u_10 :
  if(match_cons(v_10, sym__2))
    {
      w_10 = ATgetArgument(v_10, 0);
      x_10 = ATgetArgument(v_10, 1);
      {
        t = not_null(w_10);
        {
          ATerm u_0 (ATerm t)
          {
            t = not_null(x_10);
            return(t);
          }
          t = at_end_1(t, u_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,m_11 = NULL,n_11 = NULL;
  e_11 = t;
  c_11 :
  if(match_cons(e_11, sym__2))
    {
      f_11 = ATgetArgument(e_11, 0);
      g_11 = ATgetArgument(e_11, 1);
      d_11 :
      if(((ATgetType(g_11) == AT_LIST) && ((ATermList) g_11 != ATempty)))
        {
          m_11 = ATgetFirst((ATermList) g_11);
          n_11 = (ATerm) ATgetNext((ATermList) g_11);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_11)), not_null(m_11)), not_null(n_11));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym__2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_13)), not_null(e_13));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL;
  z_13 = t;
  k_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      n_14 = ATgetArgument(z_13, 1);
      v_13 :
      if(((ATgetType(a_14) == AT_LIST) && ((ATermList) a_14 != ATempty)))
        {
          b_14 = ATgetFirst((ATermList) a_14);
          c_14 = (ATerm) ATgetNext((ATermList) a_14);
          w_13 :
          if(((ATgetType(n_14) == AT_LIST) && ((ATermList) n_14 != ATempty)))
            {
              o_14 = ATgetFirst((ATermList) n_14);
              p_14 = (ATerm) ATgetNext((ATermList) n_14);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_14), not_null(o_14)), (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(p_14)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  w_14 :
  if(match_cons(z_14, sym__2))
    {
      a_15 = ATgetArgument(z_14, 0);
      b_15 = ATgetArgument(z_14, 1);
      x_14 :
      if(((ATermList) a_15 == ATempty))
        {
          y_14 :
          if(((ATermList) b_15 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm d_61 (ATerm), ATerm e_61 (ATerm))
{
  ATerm d_15 (ATerm t)
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_61(t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          t = c_61(t);
          {
            t = _2(t, e_61, d_15);
            t = d_61(t);
          }
        }
      }
    return(t);
  }
  t = d_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm g_61 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, g_61);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL;
  o_15 = t;
  m_15 :
  if(((ATgetType(o_15) == AT_LIST) && ((ATermList) o_15 != ATempty)))
    {
      p_15 = ATgetFirst((ATermList) o_15);
      s_15 = (ATerm) ATgetNext((ATermList) o_15);
      n_15 :
      if(match_cons(p_15, sym__2))
        {
          q_15 = ATgetArgument(p_15, 0);
          r_15 = ATgetArgument(p_15, 1);
          {
            ATerm w_15 = NULL,x_15 = NULL,d_16 = NULL,j_16 = NULL;
            ATerm p_10;
            p_10 = t;
            {
              ATerm y_15 = NULL;
              ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
              t = not_null(r_15);
              {
                y_15 = t;
                {
                  t = SSL_explode_term(not_null(y_15));
                  {
                    a_16 = t;
                    h_15 :
                    if(match_cons(a_16, sym__2))
                      {
                        b_16 = ATgetArgument(a_16, 0);
                        c_16 = ATgetArgument(a_16, 1);
                        {
                          if(((w_15 != NULL) && (w_15 != b_16)))
                            _fail(b_16);
                          else
                            w_15 = b_16;
                          if(((x_15 != NULL) && (x_15 != c_16)))
                            _fail(c_16);
                          else
                            x_15 = c_16;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = p_10;
            {
              ATerm q_10;
              q_10 = t;
              {
                ATerm e_16 = NULL;
                ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
                t = not_null(q_15);
                {
                  e_16 = t;
                  {
                    t = SSL_explode_term(not_null(e_16));
                    {
                      g_16 = t;
                      k_15 :
                      if(match_cons(g_16, sym__2))
                        {
                          h_16 = ATgetArgument(g_16, 0);
                          i_16 = ATgetArgument(g_16, 1);
                          {
                            if(((w_15 != NULL) && (w_15 != h_16)))
                              _fail(h_16);
                            else
                              w_15 = h_16;
                            if(((d_16 != NULL) && (d_16 != i_16)))
                              _fail(i_16);
                            else
                              d_16 = i_16;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = q_10;
              {
                ATerm k_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_16), not_null(x_15));
                {
                  t = zip_1(t, _id);
                  {
                    k_16 = t;
                    if(((j_16 != NULL) && (j_16 != k_16)))
                      _fail(k_16);
                    else
                      j_16 = k_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(s_15));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL;
  a_17 = t;
  s_16 :
  if(((ATgetType(a_17) == AT_LIST) && ((ATermList) a_17 != ATempty)))
    {
      b_17 = ATgetFirst((ATermList) a_17);
      e_17 = (ATerm) ATgetNext((ATermList) a_17);
      z_16 :
      if(match_cons(b_17, sym__2))
        {
          c_17 = ATgetArgument(b_17, 0);
          d_17 = ATgetArgument(b_17, 1);
          {
            ATerm g_17 = NULL;
            if(((c_17 != NULL) && (c_17 != d_17)))
              _fail(d_17);
            else
              c_17 = d_17;
            {
              if(((g_17 != NULL) && (g_17 != e_17)))
                _fail(e_17);
              else
                g_17 = e_17;
              t = not_null(g_17);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm p_58 (ATerm))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(((ATgetType(o_17) == AT_LIST) && ((ATermList) o_17 != ATempty)))
    {
      p_17 = ATgetFirst((ATermList) o_17);
      q_17 = (ATerm) ATgetNext((ATermList) o_17);
      {
        t = p_58(t);
        {
          ATerm v_0 (ATerm t)
          {
            ATerm v_17 = NULL;
            v_17 = t;
            if(((p_17 != NULL) && (p_17 != v_17)))
              _fail(v_17);
            else
              p_17 = v_17;
            return(t);
          }
          t = fetch_1(t, v_0);
        }
        t = not_null(q_17);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_18 = NULL,c_18 = NULL,g_18 = NULL;
      b_18 = t;
      z_17 :
      if(match_cons(b_18, sym__2))
        {
          c_18 = ATgetArgument(b_18, 0);
          g_18 = ATgetArgument(b_18, 1);
          {
            t = not_null(c_18);
            {
              ATerm n_18 (ATerm t)
              {
                ATerm t_10 = t;
                int y_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(y_10);
                  }
                else
                  {
                    t = t_10;
                    {
                      ATerm z_10 = t;
                      int a_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_0 (ATerm t)
                          {
                            t = not_null(g_18);
                            return(t);
                          }
                          t = HdMember_1(t, w_0);
                          t = n_18(t);
                          LocalPopChoice(a_11);
                        }
                      else
                        {
                          t = z_10;
                          t = Cons_2(t, _id, n_18);
                        }
                    }
                  }
                return(t);
              }
              t = n_18(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
        ATerm c_1 (ATerm t)
        {
          ATerm k_18 = NULL;
          k_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(k_18));
          return(t);
        }
        ATerm d_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm h_1 (ATerm t)
        {
          ATerm b_11 = t;
          int h_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_1 (ATerm t)
              {
                ATerm i_11 = t;
                int j_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_11);
                  }
                else
                  {
                    t = i_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_1);
              LocalPopChoice(h_11);
            }
          else
            {
              t = b_11;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, c_1, d_1, h_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm r_47 (ATerm), ATerm s_47 (ATerm), ATerm t_47 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
  h_19 = t;
  f_19 :
  if(match_cons(h_19, sym__5))
    {
      i_19 = ATgetArgument(h_19, 0);
      n_19 = ATgetArgument(h_19, 1);
      o_19 = ATgetArgument(h_19, 2);
      p_19 = ATgetArgument(h_19, 3);
      q_19 = ATgetArgument(h_19, 4);
      g_19 :
      if(((ATgetType(i_19) == AT_LIST) && ((ATermList) i_19 != ATempty)))
        {
          l_19 = ATgetFirst((ATermList) i_19);
          m_19 = (ATerm) ATgetNext((ATermList) i_19);
          {
            ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,k_20 = NULL,o_20 = NULL,q_20 = NULL;
            ATerm k_11;
            k_11 = t;
            {
              ATerm d_20 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), not_null(o_19));
              {
                ATerm i_20 = NULL;
                t = r_47(t);
                {
                  d_20 = t;
                  {
                    if(((x_19 != NULL) && (x_19 != d_20)))
                      _fail(d_20);
                    else
                      x_19 = d_20;
                    {
                      t = not_null(x_19);
                      {
                        ATerm j_20 = NULL;
                        t = s_47(t);
                        {
                          i_20 = t;
                          {
                            if(((y_19 != NULL) && (y_19 != i_20)))
                              _fail(i_20);
                            else
                              y_19 = i_20;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(n_19));
                              {
                                t = diff_0(t);
                                {
                                  j_20 = t;
                                  if(((z_19 != NULL) && (z_19 != j_20)))
                                    _fail(j_20);
                                  else
                                    z_19 = j_20;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = k_11;
            {
              ATerm l_11;
              l_11 = t;
              {
                ATerm n_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(m_19));
                {
                  t = conc_0(t);
                  {
                    n_20 = t;
                    if(((k_20 != NULL) && (k_20 != n_20)))
                      _fail(n_20);
                    else
                      k_20 = n_20;
                  }
                }
              }
              t = l_11;
              {
                ATerm o_11;
                o_11 = t;
                {
                  ATerm p_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), not_null(n_19));
                  {
                    t = conc_0(t);
                    {
                      p_20 = t;
                      if(((o_20 != NULL) && (o_20 != p_20)))
                        _fail(p_20);
                      else
                        o_20 = p_20;
                    }
                  }
                }
                t = o_11;
                {
                  ATerm w_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(l_19), not_null(x_19), not_null(p_19));
                  {
                    t = t_47(t);
                    {
                      w_20 = t;
                      if(((q_20 != NULL) && (q_20 != w_20)))
                        _fail(w_20);
                      else
                        q_20 = w_20;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(k_20), not_null(o_20), not_null(o_19), not_null(q_20), not_null(q_19));
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnExit_0 (ATerm t)
{
  ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
  h_21 = t;
  f_21 :
  if(match_cons(h_21, sym__5))
    {
      i_21 = ATgetArgument(h_21, 0);
      j_21 = ATgetArgument(h_21, 1);
      k_21 = ATgetArgument(h_21, 2);
      l_21 = ATgetArgument(h_21, 3);
      m_21 = ATgetArgument(h_21, 4);
      g_21 :
      if(((ATermList) i_21 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_21), not_null(m_21));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  u_21 = t;
  t_21 :
  if(match_cons(u_21, sym__3))
    {
      v_21 = ATgetArgument(u_21, 0);
      w_21 = ATgetArgument(u_21, 1);
      x_21 = ATgetArgument(u_21, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(v_21), not_null(v_21), not_null(w_21), not_null(x_21), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm))
{
  ATerm c_22 (ATerm t)
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_69(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          t = i_69(t);
          t = c_22(t);
        }
      }
    return(t);
  }
  t = c_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_69 (ATerm), ATerm l_69 (ATerm), ATerm m_69 (ATerm))
{
  t = k_69(t);
  t = while_not_2(t, l_69, m_69);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm x_47 (ATerm), ATerm y_47 (ATerm), ATerm z_47 (ATerm))
{
  ATerm k_1 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, x_47, y_47, z_47);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm m_48 (ATerm), ATerm n_48 (ATerm), ATerm o_48 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  t = graph_nodes_undef_roots_3(t, m_48, n_48, o_48);
  {
    f_22 = t;
    e_22 :
    if(match_cons(f_22, sym__2))
      {
        g_22 = ATgetArgument(f_22, 0);
        h_22 = ATgetArgument(f_22, 1);
        t = not_null(g_22);
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm q_22 = NULL;
  q_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(q_22)), term_u_11), term_t_11), term_i_8, (ATerm) ATempty);
    {
      ATerm l_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm s_22 = NULL;
            ATerm t_22 = NULL;
            t = term_i_8;
            {
              t = c_70(t);
              {
                t_22 = t;
                if(((s_22 != NULL) && (s_22 != t_22)))
                  _fail(t_22);
                else
                  s_22 = t_22;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(s_22)), term_v_11);
            return(t);
          }
          t = get_module_1(t, o_1);
        }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
        u_22 = t;
        o_22 :
        if(match_cons(u_22, sym__3))
          {
            v_22 = ATgetArgument(u_22, 0);
            w_22 = ATgetArgument(u_22, 1);
            x_22 = ATgetArgument(u_22, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(x_22)), not_null(w_22));
          }
        else
          _fail(t);
        return(t);
      }
      t = graph_nodes_roots_3(t, l_1, get_stratego_imports_0, m_1);
      {
        t = unzip_0(t);
        t = _2(t, _id, flatten_stratego_0);
      }
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_23 = NULL;
  f_23 = t;
  t = SSL_exit(not_null(f_23));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym__2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      {
        ATerm w_11;
        w_11 = t;
        t = SSL_printnl(not_null(l_23), not_null(m_23));
        t = w_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t_23 = t;
  t = SSL_close_file(not_null(t_23));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm b_64 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(((ATgetType(z_23) == AT_LIST) && ((ATermList) z_23 != ATempty)))
    {
      a_24 = ATgetFirst((ATermList) z_23);
      b_24 = (ATerm) ATgetNext((ATermList) z_23);
      {
        ATerm e_24 = NULL;
        ATerm f_24 = NULL;
        t = term_i_8;
        {
          t = b_64(t);
          {
            f_24 = t;
            if(((e_24 != NULL) && (e_24 != f_24)))
              _fail(f_24);
            else
              e_24 = f_24;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_24)), not_null(a_24)), not_null(e_24));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm z_11 = t;
          int a_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_12);
            }
          else
            {
              t = z_11;
              {
                t = Cons_2(t, _id, r_1);
                t = Sep_1(t, c_64);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, r_1);
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm d_54 (ATerm))
{
  ATerm b_12;
  b_12 = t;
  {
    ATerm l_24 = NULL,n_24 = NULL;
    ATerm c_12;
    c_12 = t;
    {
      ATerm m_24 = NULL;
      t = d_54(t);
      {
        m_24 = t;
        if(((l_24 != NULL) && (l_24 != m_24)))
          _fail(m_24);
        else
          l_24 = m_24;
      }
    }
    t = c_12;
    {
      ATerm o_24 = NULL;
      o_24 = t;
      if(((n_24 != NULL) && (n_24 != o_24)))
        _fail(o_24);
      else
        n_24 = o_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_24)), not_null(l_24)));
        t = printnl_0(t);
      }
    }
  }
  t = b_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm d_12;
  d_12 = t;
  {
    t = k_54(t);
    {
      ATerm t_1 (ATerm t)
      {
        t = term_e_12;
        return(t);
      }
      t = debug_1(t, t_1);
    }
  }
  t = d_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_24 = NULL,x_24 = NULL,a_25 = NULL;
      w_24 = t;
      s_24 :
      if(match_cons(w_24, sym__2))
        {
          x_24 = ATgetArgument(w_24, 0);
          a_25 = ATgetArgument(w_24, 1);
          {
            if(((v_24 != NULL) && (v_24 != x_24)))
              _fail(x_24);
            else
              v_24 = x_24;
            {
              if(((u_24 != NULL) && (u_24 != a_25)))
                _fail(a_25);
              else
                u_24 = a_25;
              t = SSL_open_file(not_null(v_24), not_null(u_24));
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm b_25 = NULL;
        ATerm u_1 (ATerm t)
        {
          t = term_h_12;
          return(t);
        }
        t = obsolete_1(t, u_1);
        {
          b_25 = t;
          {
            if(((v_24 != NULL) && (v_24 != b_25)))
              _fail(b_25);
            else
              v_24 = b_25;
            t = SSL_open_file(not_null(v_24), (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue)));
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
  g_25 = t;
  f_25 :
  if(match_cons(g_25, sym__2))
    {
      h_25 = ATgetArgument(g_25, 0);
      i_25 = ATgetArgument(g_25, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(i_25)), term_v_11), not_null(h_25));
        t = concat_strings_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm q_47 (ATerm))
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL;
  s_25 = t;
  r_25 :
  if(match_cons(s_25, sym__2))
    {
      t_25 = ATgetArgument(s_25, 0);
      u_25 = ATgetArgument(s_25, 1);
      {
        ATerm x_25 = NULL,y_25 = NULL;
        ATerm z_25 = NULL;
        t = not_null(t_25);
        {
          ATerm a_26 = NULL,c_26 = NULL;
          t = q_47(t);
          {
            z_25 = t;
            {
              if(((x_25 != NULL) && (x_25 != z_25)))
                _fail(z_25);
              else
                x_25 = z_25;
              {
                ATerm b_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), term_i_12);
                {
                  t = add_extension_0(t);
                  {
                    b_26 = t;
                    if(((a_26 != NULL) && (a_26 != b_26)))
                      _fail(b_26);
                    else
                      a_26 = b_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_26), term_j_12);
                  {
                    ATerm d_26 = NULL;
                    t = open_file_0(t);
                    {
                      c_26 = t;
                      {
                        if(((y_25 != NULL) && (y_25 != c_26)))
                          _fail(c_26);
                        else
                          y_25 = c_26;
                        {
                          ATerm e_26 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(u_25)), term_k_12);
                          {
                            ATerm v_1 (ATerm t)
                            {
                              t = term_l_12;
                              return(t);
                            }
                            t = separate_by_1(t, v_1);
                            {
                              e_26 = t;
                              if(((d_26 != NULL) && (d_26 != e_26)))
                                _fail(e_26);
                              else
                                d_26 = e_26;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), (ATerm) ATinsert(CheckATermList(not_null(d_26)), not_null(x_25)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(y_25);
                                t = close_file_0(t);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_25), not_null(u_25));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm k_26 (ATerm t)
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_62, _id);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        t = Cons_2(t, _id, k_26);
      }
    return(t);
  }
  t = k_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_52 (ATerm))
{
  t = fetch_1(t, v_52);
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_69(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  n_26 = t;
  m_26 :
  if(match_cons(n_26, sym__2))
    {
      o_26 = ATgetArgument(n_26, 0);
      p_26 = ATgetArgument(n_26, 1);
      t = SSL_WriteToTextFile(not_null(o_26), not_null(p_26));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_26 = NULL,w_26 = NULL,x_26 = NULL;
  v_26 = t;
  u_26 :
  if(match_cons(v_26, sym__2))
    {
      w_26 = ATgetArgument(v_26, 0);
      x_26 = ATgetArgument(v_26, 1);
      t = SSL_WriteToBinaryFile(not_null(w_26), not_null(x_26));
    }
  else
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm r_56 (ATerm))
{
  ATerm q_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_12);
    }
  else
    {
      t = q_12;
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              t = filter_1(t, r_56);
              return(t);
            }
            t = Cons_2(t, r_56, w_1);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
              d_27 = t;
              c_27 :
              if(((ATgetType(d_27) == AT_LIST) && ((ATermList) d_27 != ATempty)))
                {
                  e_27 = ATgetFirst((ATermList) d_27);
                  f_27 = (ATerm) ATgetNext((ATermList) d_27);
                  {
                    t = not_null(f_27);
                    t = filter_1(t, r_56);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm k_27 (ATerm t)
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
        t = Cons_2(t, q_62, k_27);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm n_27 = NULL;
  ATerm x_1 (ATerm t)
  {
    ATerm o_27 = NULL,p_27 = NULL;
    o_27 = t;
    m_27 :
    if(match_cons(o_27, sym_Program_1))
      {
        p_27 = ATgetArgument(o_27, 0);
        if(((n_27 != NULL) && (n_27 != p_27)))
          _fail(p_27);
        else
          n_27 = p_27;
      }
    else
      _fail(t);
    return(t);
  }
  t = option_defined_1(t, x_1);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(CheckATermList(term_g_13), not_null(n_27)), term_w_12));
    {
      t = printnl_0(t);
      {
        t = term_d_8;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_27 = NULL;
  s_27 = t;
  r_27 :
  if(!(match_cons(s_27, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_53 (ATerm))
{
  ATerm y_1 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm j_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_13);
            }
          else
            {
              t = j_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_1);
  t = q_53(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm q_52 (ATerm), ATerm r_52 (ATerm))
{
  ATerm d_2 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = ArgOption_3(t, q_52, r_52, d_2);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_m_13;
    return(t);
  }
  t = Option_3(t, f_52, g_52, e_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL;
  y_27 = t;
  w_27 :
  if(match_string(y_27, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(y_27) == AT_LIST) && ((ATermList) y_27 != ATempty)))
        {
          z_27 = ATgetFirst((ATermList) y_27);
          a_28 = (ATerm) ATgetNext((ATermList) y_27);
          x_27 :
          if(((ATgetType(a_28) == AT_LIST) && ((ATermList) a_28 != ATempty)))
            {
              b_28 = ATgetFirst((ATermList) a_28);
              c_28 = (ATerm) ATgetNext((ATermList) a_28);
              {
                ATerm g_28 = NULL;
                ATerm n_13;
                n_13 = t;
                {
                  t = not_null(z_27);
                  t = i_0(t);
                }
                t = n_13;
                {
                  ATerm h_28 = NULL;
                  t = not_null(b_28);
                  {
                    t = j_0(t);
                    {
                      h_28 = t;
                      if(((g_28 != NULL) && (g_28 != h_28)))
                        _fail(h_28);
                      else
                        g_28 = h_28;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_28)), not_null(g_28));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_13 = t;
  int p_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_2 (ATerm t)
      {
        ATerm w_28 = NULL;
        w_28 = t;
        l_28 :
        if(!(match_string(w_28, "-S")))
          {
            if(!(match_string(w_28, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm i_2 (ATerm t)
      {
        t = term_q_13;
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_r_13;
        return(t);
      }
      t = Option_3(t, g_2, i_2, j_2);
      LocalPopChoice(p_13);
    }
  else
    {
      t = o_13;
      {
        ATerm s_13 = t;
        int t_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm x_28 = NULL;
              x_28 = t;
              m_28 :
              if(!(match_string(x_28, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm l_2 (ATerm t)
            {
              t = term_u_13;
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_x_13;
              return(t);
            }
            t = Option_3(t, k_2, l_2, m_2);
            LocalPopChoice(t_13);
          }
        else
          {
            t = s_13;
            {
              ATerm y_13 = t;
              int d_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_2 (ATerm t)
                  {
                    ATerm y_28 = NULL;
                    y_28 = t;
                    n_28 :
                    if(!(match_string(y_28, "-v")))
                      {
                        if(!(match_string(y_28, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_2 (ATerm t)
                  {
                    t = term_e_14;
                    return(t);
                  }
                  ATerm z_2 (ATerm t)
                  {
                    t = term_f_14;
                    return(t);
                  }
                  t = Option_3(t, x_2, y_2, z_2);
                  LocalPopChoice(d_14);
                }
              else
                {
                  t = y_13;
                  {
                    ATerm g_14 = t;
                    int h_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_3 (ATerm t)
                        {
                          ATerm z_28 = NULL;
                          z_28 = t;
                          o_28 :
                          if(!(match_string(z_28, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_3 (ATerm t)
                        {
                          ATerm a_29 = NULL;
                          ATerm b_29 = NULL;
                          b_29 = t;
                          if(((a_29 != NULL) && (a_29 != b_29)))
                            _fail(b_29);
                          else
                            a_29 = b_29;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_29));
                          return(t);
                        }
                        ATerm c_3 (ATerm t)
                        {
                          t = term_i_14;
                          return(t);
                        }
                        t = ArgOption_3(t, a_3, b_3, c_3);
                        LocalPopChoice(h_14);
                      }
                    else
                      {
                        t = g_14;
                        {
                          ATerm j_14 = t;
                          int k_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm c_29 = NULL;
                                c_29 = t;
                                q_28 :
                                if(!(match_string(c_29, "-i")))
                                  {
                                    if(!(match_string(c_29, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm i_3 (ATerm t)
                              {
                                ATerm d_29 = NULL;
                                ATerm e_29 = NULL;
                                e_29 = t;
                                if(((d_29 != NULL) && (d_29 != e_29)))
                                  _fail(e_29);
                                else
                                  d_29 = e_29;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_29));
                                return(t);
                              }
                              ATerm j_3 (ATerm t)
                              {
                                t = term_l_14;
                                return(t);
                              }
                              t = ArgOption_3(t, h_3, i_3, j_3);
                              LocalPopChoice(k_14);
                            }
                          else
                            {
                              t = j_14;
                              {
                                ATerm m_14 = t;
                                int q_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_3 (ATerm t)
                                    {
                                      ATerm f_29 = NULL;
                                      f_29 = t;
                                      s_28 :
                                      if(!(match_string(f_29, "-o")))
                                        {
                                          if(!(match_string(f_29, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_3 (ATerm t)
                                    {
                                      ATerm g_29 = NULL;
                                      ATerm h_29 = NULL;
                                      h_29 = t;
                                      if(((g_29 != NULL) && (g_29 != h_29)))
                                        _fail(h_29);
                                      else
                                        g_29 = h_29;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_29));
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      t = term_r_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, k_3, n_3, o_3);
                                    LocalPopChoice(q_14);
                                  }
                                else
                                  {
                                    t = m_14;
                                    {
                                      ATerm s_14 = t;
                                      int t_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm p_3 (ATerm t)
                                          {
                                            ATerm i_29 = NULL;
                                            i_29 = t;
                                            u_28 :
                                            if(!(match_string(i_29, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm x_3 (ATerm t)
                                          {
                                            t = term_u_14;
                                            return(t);
                                          }
                                          ATerm a_4 (ATerm t)
                                          {
                                            t = term_v_14;
                                            return(t);
                                          }
                                          t = Option_3(t, p_3, x_3, a_4);
                                          LocalPopChoice(t_14);
                                        }
                                      else
                                        {
                                          t = s_14;
                                          {
                                            ATerm b_4 (ATerm t)
                                            {
                                              ATerm j_29 = NULL;
                                              j_29 = t;
                                              v_28 :
                                              if(!(match_string(j_29, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm c_4 (ATerm t)
                                            {
                                              t = term_c_15;
                                              return(t);
                                            }
                                            ATerm d_4 (ATerm t)
                                            {
                                              t = term_e_15;
                                              return(t);
                                            }
                                            t = Option_3(t, b_4, c_4, d_4);
                                          }
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm o_29 = NULL;
  o_29 = t;
  t = SSL_table_destroy(not_null(o_29));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm t_29 (ATerm t)
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_29);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          t = Nil_0(t);
          t = c_63(t);
        }
      }
    return(t);
  }
  t = t_29(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        y_29 = t;
        v_29 :
        if(((ATgetType(y_29) == AT_LIST) && ((ATermList) y_29 != ATempty)))
          {
            z_29 = ATgetFirst((ATermList) y_29);
            a_30 = (ATerm) ATgetNext((ATermList) y_29);
            {
              t = not_null(z_29);
              {
                ATerm g_4 (ATerm t)
                {
                  t = not_null(a_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_4);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm f_30 (ATerm t)
  {
    ATerm l_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = l_15;
        t = Cons_2(t, o_62, f_30);
      }
    return(t);
  }
  t = f_30(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  m_30 = t;
  j_30 :
  if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
    {
      k_30 = ATgetFirst((ATermList) m_30);
      l_30 = (ATerm) ATgetNext((ATermList) m_30);
      {
        t = not_null(l_30);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm p_30 = NULL;
            ATerm q_30 = NULL;
            t = h_0(t);
            {
              q_30 = t;
              if(((p_30 != NULL) && (p_30 != q_30)))
                _fail(q_30);
              else
                p_30 = q_30;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(p_30)), not_null(k_30));
            return(t);
          }
          t = reverse_1(t, h_4);
        }
      }
    }
  else
    {
      if(((ATermList) m_30 == ATempty))
        {
          {
            t = term_i_8;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, j_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_46 (ATerm))
{
  ATerm x_30 = NULL,y_30 = NULL;
  x_30 = t;
  w_30 :
  if(match_cons(x_30, sym_Program_1))
    {
      y_30 = ATgetArgument(x_30, 0);
      {
        ATerm a_31 = NULL;
        t = not_null(y_30);
        {
          t = t_46(t);
          {
            a_31 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_31));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm m_31 = NULL;
  ATerm k_4 (ATerm t)
  {
    ATerm l_4 (ATerm t)
    {
      ATerm n_31 = NULL;
      n_31 = t;
      if(((m_31 != NULL) && (m_31 != n_31)))
        _fail(n_31);
      else
        m_31 = n_31;
      return(t);
    }
    t = Program_1(t, l_4);
    return(t);
  }
  t = option_defined_1(t, k_4);
  {
    ATerm m_4 (ATerm t)
    {
      ATerm o_31 = NULL;
      ATerm p_31 = NULL;
      t = term_i_8;
      {
        ATerm r_4 (ATerm t)
        {
          t = not_null(m_31);
          return(t);
        }
        t = short_description_1(t, r_4);
        {
          t = concat_strings_0(t);
          {
            p_31 = t;
            if(((o_31 != NULL) && (o_31 != p_31)))
              _fail(p_31);
            else
              o_31 = p_31;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATempty, not_null(o_31)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = term_z_15;
      {
        t = printnl_0(t);
        {
          t = term_m_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm q_31 = NULL;
                  q_31 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_31)), term_n_16));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_4);
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm a_32 = NULL;
                    ATerm b_32 = NULL;
                    t = term_i_8;
                    {
                      ATerm y_4 (ATerm t)
                      {
                        t = not_null(m_31);
                        return(t);
                      }
                      t = long_description_1(t, y_4);
                      {
                        t = concat_strings_0(t);
                        {
                          b_32 = t;
                          if(((a_32 != NULL) && (a_32 != b_32)))
                            _fail(b_32);
                          else
                            a_32 = b_32;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_32)), term_o_16));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_4);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_46 (ATerm))
{
  ATerm j_32 = NULL,k_32 = NULL;
  j_32 = t;
  i_32 :
  if(match_cons(j_32, sym_Undefined_1))
    {
      k_32 = ATgetArgument(j_32, 0);
      {
        ATerm m_32 = NULL;
        t = not_null(k_32);
        {
          t = u_46(t);
          {
            m_32 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_32 = NULL;
  r_32 = t;
  q_32 :
  if(!(match_cons(r_32, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_52 (ATerm))
{
  ATerm t_32 = NULL;
  ATerm u_32 = NULL;
  t = term_i_8;
  {
    t = b_52(t);
    {
      u_32 = t;
      if(((t_32 != NULL) && (t_32 != u_32)))
        _fail(u_32);
      else
        t_32 = u_32;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_16, term_l_16, not_null(t_32));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_string(a_33, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(a_33) == AT_LIST) && ((ATermList) a_33 != ATempty)))
        {
          b_33 = ATgetFirst((ATermList) a_33);
          c_33 = (ATerm) ATgetNext((ATermList) a_33);
          {
            ATerm f_33 = NULL;
            ATerm p_16;
            p_16 = t;
            {
              t = not_null(b_33);
              t = a_0(t);
            }
            t = p_16;
            {
              ATerm g_33 = NULL;
              t = term_i_8;
              {
                t = f_0(t);
                {
                  g_33 = t;
                  if(((f_33 != NULL) && (f_33 != g_33)))
                    _fail(g_33);
                  else
                    f_33 = g_33;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_33)), not_null(f_33));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm l_33 = NULL;
    l_33 = t;
    k_33 :
    if(!(match_string(l_33, "--help")))
      {
        if(!(match_string(l_33, "-h")))
          {
            if(!(match_string(l_33, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_q_16;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = Option_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  n_33 :
  if(((ATgetType(o_33) == AT_LIST) && ((ATermList) o_33 != ATempty)))
    {
      p_33 = ATgetFirst((ATermList) o_33);
      q_33 = (ATerm) ATgetNext((ATermList) o_33);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_33)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_33)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  u_33 :
  if(((ATermList) v_33 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_51 (ATerm))
{
  ATerm t_16;
  t_16 = t;
  {
    ATerm d_5 (ATerm t)
    {
      t = term_u_16;
      t = z_51(t);
      return(t);
    }
    t = try_1(t, d_5);
  }
  t = t_16;
  {
    ATerm e_5 (ATerm t)
    {
      ATerm x_33 = NULL;
      x_33 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(x_33));
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm v_16 = t;
      int w_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = t;
          int y_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(y_16);
            }
          else
            {
              t = x_16;
              {
                t = z_51(t);
                t = Cons_2(t, _id, f_5);
              }
            }
          LocalPopChoice(w_16);
        }
      else
        {
          t = v_16;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_5, f_5);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_51 (ATerm))
{
  ATerm g_34 = NULL;
  ATerm f_17;
  f_17 = t;
  {
    t = term_h_17;
    t = table_put_0(t);
  }
  t = f_17;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm i_17 = t;
      int j_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_51(t);
          LocalPopChoice(j_17);
        }
      else
        {
          t = i_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_5);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_m_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            {
              ATerm n_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm h_34 = NULL;
                  h_34 = t;
                  if(((g_34 != NULL) && (g_34 != h_34)))
                    _fail(h_34);
                  else
                    g_34 = h_34;
                  return(t);
                }
                t = Undefined_1(t, r_5);
                return(t);
              }
              t = option_defined_1(t, n_5);
              {
                ATerm r_17;
                r_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_34)), term_s_17));
                  t = printnl_0(t);
                }
                t = r_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_5);
      {
        ATerm t_17;
        t_17 = t;
        {
          t = term_f_16;
          t = table_destroy_0(t);
        }
        t = t_17;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_5 (ATerm t)
              {
                ATerm s_34 = NULL;
                s_34 = t;
                j_34 :
                if(!(match_string(s_34, "-I")))
                  _fail(t);
                return(t);
              }
              ATerm v_5 (ATerm t)
              {
                ATerm t_34 = NULL;
                t_34 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(t_34));
                return(t);
              }
              t = ArgOption_2(t, u_5, v_5);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              {
                ATerm a_18 = t;
                int d_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_5 (ATerm t)
                    {
                      ATerm v_34 = NULL;
                      v_34 = t;
                      l_34 :
                      if(!(match_string(v_34, "-nodep")))
                        _fail(t);
                      return(t);
                    }
                    ATerm y_5 (ATerm t)
                    {
                      t = term_e_18;
                      return(t);
                    }
                    t = Option_2(t, x_5, y_5);
                    LocalPopChoice(d_18);
                  }
                else
                  {
                    t = a_18;
                    {
                      ATerm f_18 = t;
                      int h_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5 (ATerm t)
                          {
                            ATerm w_34 = NULL;
                            w_34 = t;
                            m_34 :
                            if(!(match_string(w_34, "-dep")))
                              _fail(t);
                            return(t);
                          }
                          ATerm e_6 (ATerm t)
                          {
                            ATerm d_35 = NULL;
                            d_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(d_35));
                            return(t);
                          }
                          t = ArgOption_2(t, z_5, e_6);
                          LocalPopChoice(h_18);
                        }
                      else
                        {
                          t = f_18;
                          {
                            ATerm f_6 (ATerm t)
                            {
                              ATerm f_35 = NULL;
                              f_35 = t;
                              o_34 :
                              if(!(match_string(f_35, "--prefix")))
                                _fail(t);
                              return(t);
                            }
                            ATerm g_6 (ATerm t)
                            {
                              ATerm g_35 = NULL;
                              g_35 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATmakeAppl(sym_Defined_2, term_i_18, not_null(g_35)));
                                {
                                  ATerm h_6 (ATerm t)
                                  {
                                    t = term_a_9;
                                    return(t);
                                  }
                                  t = assert_1(t, h_6);
                                }
                                t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(g_35));
                              }
                              return(t);
                            }
                            t = ArgOption_2(t, f_6, g_6);
                          }
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = parse_options_1(t, s_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm o_47 (ATerm, ATerm (ATerm)), ATerm p_47 (ATerm))
{
  ATerm r_36 = NULL;
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,c_37 = NULL;
  t = pack_module_options_0(t);
  {
    r_36 = t;
    {
      ATerm m_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, m_6);
      {
        ATerm n_6 (ATerm t)
        {
          ATerm o_6 (ATerm t)
          {
            ATerm x_36 = NULL,y_36 = NULL;
            x_36 = t;
            q_35 :
            if(match_cons(x_36, sym_Program_1))
              {
                y_36 = ATgetArgument(x_36, 0);
                if(((t_36 != NULL) && (t_36 != y_36)))
                  _fail(y_36);
                else
                  t_36 = y_36;
              }
            else
              {
                if(match_cons(x_36, sym_Input_1))
                  {
                    y_36 = ATgetArgument(x_36, 0);
                    if(((u_36 != NULL) && (u_36 != y_36)))
                      _fail(y_36);
                    else
                      u_36 = y_36;
                  }
                else
                  {
                    if(match_cons(x_36, sym_Output_1))
                      {
                        y_36 = ATgetArgument(x_36, 0);
                        if(((v_36 != NULL) && (v_36 != y_36)))
                          _fail(y_36);
                        else
                          v_36 = y_36;
                      }
                    else
                      {
                        if(match_cons(x_36, sym_Dependency_1))
                          {
                            y_36 = ATgetArgument(x_36, 0);
                            if(((w_36 != NULL) && (w_36 != y_36)))
                              _fail(y_36);
                            else
                              w_36 = y_36;
                          }
                        else
                          _fail(t);
                      }
                  }
              }
            return(t);
          }
          t = try_1(t, o_6);
          return(t);
        }
        t = list_1(t, n_6);
        {
          ATerm e_37 = NULL;
          ATerm p_6 (ATerm t)
          {
            ATerm z_36 = NULL,a_37 = NULL;
            z_36 = t;
            s_35 :
            if(match_cons(z_36, sym_Include_1))
              {
                a_37 = ATgetArgument(z_36, 0);
                t = not_null(a_37);
              }
            else
              _fail(t);
            return(t);
          }
          t = filter_1(t, p_6);
          {
            c_37 = t;
            {
              ATerm g_37 = NULL;
              ATerm j_18 = t;
              int l_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(u_36);
                  LocalPopChoice(l_18);
                }
              else
                {
                  t = j_18;
                  t = term_m_18;
                }
              {
                e_37 = t;
                {
                  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
                  ATerm o_18 = t;
                  int p_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(v_36);
                      LocalPopChoice(p_18);
                    }
                  else
                    {
                      t = o_18;
                      t = term_q_18;
                    }
                  {
                    g_37 = t;
                    {
                      t = not_null(e_37);
                      {
                        ATerm u_6 (ATerm t)
                        {
                          t = not_null(c_37);
                          return(t);
                        }
                        t = o_47(t, u_6);
                        {
                          i_37 = t;
                          q_36 :
                          if(match_cons(i_37, sym__2))
                            {
                              j_37 = ATgetArgument(i_37, 0);
                              k_37 = ATgetArgument(i_37, 1);
                              {
                                ATerm o_37 = NULL,r_37 = NULL;
                                t = not_null(r_36);
                                {
                                  ATerm r_18 = t;
                                  int s_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm v_6 (ATerm t)
                                      {
                                        ATerm n_37 = NULL;
                                        n_37 = t;
                                        m_36 :
                                        if(!(match_cons(n_37, sym_Binary_0)))
                                          _fail(t);
                                        return(t);
                                      }
                                      t = option_defined_1(t, v_6);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), not_null(k_37));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(s_18);
                                    }
                                  else
                                    {
                                      t = r_18;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), not_null(k_37));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm w_6 (ATerm t)
                                    {
                                      ATerm q_37 = NULL;
                                      ATerm t_18 = t;
                                      int u_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(w_36);
                                          LocalPopChoice(u_18);
                                        }
                                      else
                                        {
                                          t = t_18;
                                          {
                                            ATerm v_18 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(r_36);
                                                {
                                                  ATerm x_6 (ATerm t)
                                                  {
                                                    ATerm p_37 = NULL;
                                                    p_37 = t;
                                                    n_36 :
                                                    if(!(match_cons(p_37, sym_NoDependency_0)))
                                                      _fail(t);
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, x_6);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              t = v_18;
                                            t = p_47(t);
                                          }
                                        }
                                      {
                                        q_37 = t;
                                        {
                                          if(((o_37 != NULL) && (o_37 != q_37)))
                                            _fail(q_37);
                                          else
                                            o_37 = q_37;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_37), not_null(j_37));
                                            {
                                              ATerm y_6 (ATerm t)
                                              {
                                                t = not_null(o_37);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, y_6);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, w_6);
                                    {
                                      t = dtime_0(t);
                                      {
                                        r_37 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_a_8, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_y_18), not_null(r_37)), term_w_18), not_null(t_36)));
                                          {
                                            t = printnl_0(t);
                                            {
                                              t = term_m_17;
                                              t = exit_0(t);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  ATerm z_18;
  z_18 = t;
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL;
    k_38 = t;
    g_38 :
    if(match_cons(k_38, sym__3))
      {
        l_38 = ATgetArgument(k_38, 0);
        m_38 = ATgetArgument(k_38, 1);
        n_38 = ATgetArgument(k_38, 2);
        {
          if(((h_38 != NULL) && (h_38 != l_38)))
            _fail(l_38);
          else
            h_38 = l_38;
          {
            if(((i_38 != NULL) && (i_38 != m_38)))
              _fail(m_38);
            else
              i_38 = m_38;
            {
              if(((j_38 != NULL) && (j_38 != n_38)))
                _fail(n_38);
              else
                j_38 = n_38;
              t = SSL_table_put(not_null(h_38), not_null(i_38), not_null(j_38));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = z_18;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  q_38 :
  if(match_cons(r_38, sym__2))
    {
      s_38 = ATgetArgument(r_38, 0);
      t_38 = ATgetArgument(r_38, 1);
      t = SSL_table_get(not_null(s_38), not_null(t_38));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL;
  a_39 = t;
  z_38 :
  if(match_cons(a_39, sym__3))
    {
      b_39 = ATgetArgument(a_39, 0);
      c_39 = ATgetArgument(a_39, 1);
      d_39 = ATgetArgument(a_39, 2);
      {
        ATerm a_19;
        a_19 = t;
        {
          ATerm h_39 = NULL;
          ATerm i_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_39), not_null(c_39));
          {
            ATerm b_19 = t;
            int c_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_19);
              }
            else
              {
                t = b_19;
                t = (ATerm) ATempty;
              }
            {
              i_39 = t;
              if(((h_39 != NULL) && (h_39 != i_39)))
                _fail(i_39);
              else
                h_39 = i_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_39), not_null(c_39), (ATerm) ATinsert(CheckATermList(not_null(h_39)), not_null(d_39)));
            t = table_put_0(t);
          }
        }
        t = a_19;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm k_47 (ATerm))
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL;
  q_39 = t;
  p_39 :
  if(match_cons(q_39, sym__2))
    {
      r_39 = ATgetArgument(q_39, 0);
      s_39 = ATgetArgument(q_39, 1);
      {
        ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL;
        ATerm d_19;
        d_19 = t;
        {
          ATerm y_39 = NULL;
          ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
          t = k_47(t);
          {
            y_39 = t;
            {
              if(((v_39 != NULL) && (v_39 != y_39)))
                _fail(y_39);
              else
                v_39 = y_39;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(v_39), not_null(r_39), not_null(s_39));
                {
                  t = table_push_0(t);
                  {
                    ATerm e_19 = t;
                    int j_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(v_39), term_k_19);
                        t = table_get_0(t);
                        LocalPopChoice(j_19);
                      }
                    else
                      {
                        t = e_19;
                        t = term_r_19;
                      }
                    {
                      z_39 = t;
                      o_39 :
                      if(((ATgetType(z_39) == AT_LIST) && ((ATermList) z_39 != ATempty)))
                        {
                          a_40 = ATgetFirst((ATermList) z_39);
                          b_40 = (ATerm) ATgetNext((ATermList) z_39);
                          {
                            if(((w_39 != NULL) && (w_39 != a_40)))
                              _fail(a_40);
                            else
                              w_39 = a_40;
                            {
                              if(((x_39 != NULL) && (x_39 != b_40)))
                                _fail(b_40);
                              else
                                x_39 = b_40;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(v_39), term_k_19, (ATerm) ATinsert(CheckATermList(not_null(x_39)), (ATerm) ATinsert(CheckATermList(not_null(w_39)), not_null(r_39))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = d_19;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  t = SSL_implode_string(not_null(g_40));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_40 = NULL;
  k_40 = t;
  t = SSL_explode_string(not_null(k_40));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 (ATerm t)
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, p_40);
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              {
                ATerm a_7 (ATerm t)
                {
                  ATerm o_40 = NULL;
                  o_40 = t;
                  n_40 :
                  if(!(match_int(o_40, 47)))
                    _fail(t);
                  return(t);
                }
                ATerm d_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, a_7, d_7);
              }
            }
          return(t);
        }
        t = p_40(t);
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm a_47 (ATerm), ATerm b_47 (ATerm))
{
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL;
  u_40 = t;
  t_40 :
  if(((ATgetType(u_40) == AT_LIST) && ((ATermList) u_40 != ATempty)))
    {
      v_40 = ATgetFirst((ATermList) u_40);
      w_40 = (ATerm) ATgetNext((ATermList) u_40);
      {
        ATerm z_40 = NULL;
        t = not_null(v_40);
        {
          ATerm b_41 = NULL;
          t = a_47(t);
          {
            z_40 = t;
            {
              t = not_null(w_40);
              {
                t = b_47(t);
                {
                  b_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_41)), not_null(z_40));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm main_0 (ATerm t)
{
  ATerm h_41 = NULL;
  ATerm w_19;
  w_19 = t;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm i_41 = NULL;
      t = get_path_0(t);
      {
        i_41 = t;
        if(((h_41 != NULL) && (h_41 != i_41)))
          _fail(i_41);
        else
          h_41 = i_41;
      }
      return(t);
    }
    t = Cons_2(t, e_7, _id);
    {
      ATerm a_20;
      a_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_8, (ATerm) ATmakeAppl(sym_Defined_2, term_b_20, not_null(h_41)));
        {
          ATerm f_7 (ATerm t)
          {
            t = term_a_9;
            return(t);
          }
          t = assert_1(t, f_7);
        }
      }
      t = a_20;
    }
  }
  t = w_19;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
