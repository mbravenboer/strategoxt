#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  init_constant_terms();
}
ATerm term_n_25;
ATerm term_u_24;
ATerm term_e_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_e_23;
ATerm term_v_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_j_20;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_g_19;
ATerm term_u_18;
ATerm term_r_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_r_16;
ATerm term_p_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_c_16;
ATerm term_x_15;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_w_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_g_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_p_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_n_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_s_6;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--width", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("abox2text", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_l_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_x_7, term_b_10);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_g_12);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2abox", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_d_7);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym__2, term_s_6, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym__2, term_a_18, term_d_7);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-w int | --width int       Specifies max width of output.", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_o_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_d_7);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__3, term_n_21, term_o_21, (ATerm) ATempty);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm pass_width_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm pass_verbose_0 (ATerm);
ATerm xtc_abox2text_1 (ATerm, ATerm g_78 (ATerm));
ATerm read_from_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_and_wait_1 (ATerm, ATerm c_59 (ATerm));
ATerm call_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm d_87 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm u_71 (ATerm));
ATerm repeat_1 (ATerm, ATerm e_77 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm if_verbose4_1 (ATerm, ATerm c_87 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm e_87 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm e_70 (ATerm), ATerm f_70 (ATerm));
ATerm union_1 (ATerm, ATerm a_70 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm g_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm d_74 (ATerm));
ATerm assert_1 (ATerm, ATerm z_74 (ATerm));
ATerm obsolete_1 (ATerm, ATerm n_75 (ATerm));
ATerm open_file_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm u_52 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm f_74 (ATerm), ATerm g_74 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm w_74 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm a_63 (ATerm), ATerm b_63 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm v_74 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_73 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_73 (ATerm));
ATerm ast2text_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pp_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm abox2text_options_0 (ATerm);
ATerm ast2text_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm r_70 (ATerm), ATerm s_70 (ATerm));
ATerm crush_2 (ATerm, ATerm p_69 (ATerm), ATerm q_69 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_78 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm s_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm r_80 (ATerm));
ATerm Program_1 (ATerm, ATerm t_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_75 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm m_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm s_64 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm x_50 (ATerm), ATerm y_50 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_75 (ATerm));
ATerm map_1 (ATerm, ATerm d_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm w_80 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm g_52 (ATerm), ATerm h_52 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm u_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm t_80 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm io_ast2text_0 (ATerm);
ATerm main_0 (ATerm);
ATerm pass_width_0 (ATerm t)
{
  ATerm m_6 = t;
  int n_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_6;
      t = get_config_0(t);
      LocalPopChoice(n_6);
      {
        ATerm c_0 = NULL;
        ATerm e_0 = NULL;
        e_0 = t;
        if(((c_0 != NULL) && (c_0 != e_0)))
          _fail(e_0);
        else
          c_0 = e_0;
        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_0)), term_o_6);
      }
    }
  else
    {
      t = m_6;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm y_0 = NULL;
  y_0 = t;
  t = SSL_int_to_string(not_null(y_0));
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm j_1 = NULL,k_1 = NULL,y_1 = NULL;
  j_1 = t;
  i_1 :
  if(match_cons(j_1, sym__2))
    {
      k_1 = ATgetArgument(j_1, 0);
      y_1 = ATgetArgument(j_1, 1);
      {
        ATerm p_6 = t;
        int q_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_1), not_null(y_1));
            ;
            LocalPopChoice(q_6);
          }
        else
          {
            t = p_6;
            t = SSL_subtr(not_null(k_1), not_null(y_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pass_verbose_0 (ATerm t)
{
  ATerm y_2 = NULL;
  ATerm z_2 = NULL,b_3 = NULL;
  ATerm a_3 = NULL;
  t = term_s_6;
  {
    ATerm u_6 = t;
    int x_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = get_config_0(t);
        ;
        LocalPopChoice(x_6);
      }
    else
      {
        t = u_6;
        t = term_y_6;
      }
    {
      a_3 = t;
      if(((z_2 != NULL) && (z_2 != a_3)))
        _fail(a_3);
      else
        z_2 = a_3;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_2), term_y_6);
    {
      t = subt_0(t);
      {
        t = int_to_string_0(t);
        {
          b_3 = t;
          if(((y_2 != NULL) && (y_2 != b_3)))
            _fail(b_3);
          else
            y_2 = b_3;
        }
      }
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_2)), term_s_6);
  return(t);
}
ATerm xtc_abox2text_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_z_6;
    return(t);
  }
  ATerm f_0 (ATerm t)
  {
    ATerm g_3 = NULL,i_3 = NULL;
    ATerm a_7;
    a_7 = t;
    {
      ATerm h_3 = NULL;
      t = term_d_7;
      {
        t = g_78(t);
        {
          h_3 = t;
          if(((g_3 != NULL) && (g_3 != h_3)))
            _fail(h_3);
          else
            g_3 = h_3;
        }
      }
    }
    t = a_7;
    {
      ATerm j_3 = NULL;
      t = term_d_7;
      {
        t = pass_verbose_0(t);
        {
          j_3 = t;
          if(((i_3 != NULL) && (i_3 != j_3)))
            _fail(j_3);
          else
            i_3 = j_3;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(i_3));
        t = conc_0(t);
      }
    }
    return(t);
  }
  t = xtc_transform_2(t, b_0, f_0);
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL;
  r_3 = t;
  q_3 :
  if(match_cons(r_3, sym_stdin_0))
    {
      ATerm t_3 = NULL;
      ATerm u_3 = NULL;
      t = term_e_7;
      {
        t = ReadFromFile_0(t);
        {
          u_3 = t;
          if(((t_3 != NULL) && (t_3 != u_3)))
            _fail(u_3);
          else
            t_3 = u_3;
        }
      }
      t = not_null(t_3);
    }
  else
    {
      if(match_cons(r_3, sym_FILE_1))
        {
          s_3 = ATgetArgument(r_3, 0);
          {
            ATerm w_3 = NULL;
            ATerm x_3 = NULL;
            t = not_null(s_3);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  x_3 = t;
                  if(((w_3 != NULL) && (w_3 != x_3)))
                    _fail(x_3);
                  else
                    w_3 = x_3;
                }
              }
            }
            t = not_null(w_3);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL;
  e_4 = t;
  d_4 :
  if(match_cons(e_4, sym__2))
    {
      f_4 = ATgetArgument(e_4, 0);
      g_4 = ATgetArgument(e_4, 1);
      t = SSL_WriteToBinaryFile(not_null(f_4), not_null(g_4));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm m_4 = NULL;
  ATerm o_4 = NULL;
  m_4 = t;
  {
    ATerm p_4 = NULL;
    t = xtc_new_file_0(t);
    {
      p_4 = t;
      {
        if(((o_4 != NULL) && (o_4 != p_4)))
          _fail(p_4);
        else
          o_4 = p_4;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), not_null(m_4));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(o_4);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_4));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, m_74, n_74);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm t_4 = NULL;
  t_4 = t;
  t = SSL_close_file(not_null(t_4));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      t = SSL_execvp(not_null(z_4), not_null(a_5));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm f_5 = NULL;
  f_5 = t;
  t = SSL_waitpid(not_null(f_5));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm p_5 = NULL;
  ATerm r_5 = NULL;
  p_5 = t;
  {
    t = fork_0(t);
    {
      r_5 = t;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_5 = NULL;
            t_5 = t;
            l_5 :
            if(match_int(t_5, 0))
              {
                t = not_null(p_5);
                t = c_59(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            {
              ATerm u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL;
              t = not_null(r_5);
              {
                t = waitpid_0(t);
                {
                  u_5 = t;
                  n_5 :
                  if(match_cons(u_5, sym_WaitStatus_3))
                    {
                      v_5 = ATgetArgument(u_5, 0);
                      w_5 = ATgetArgument(u_5, 1);
                      x_5 = ATgetArgument(u_5, 2);
                      o_5 :
                      if(match_int(v_5, 0))
                        {
                          t = not_null(p_5);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
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
ATerm call_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym__2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm p_0 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_6), not_null(g_6));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, p_0);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm l_6 = NULL;
  l_6 = t;
  t = SSL_table_keys(not_null(l_6));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm r_6 = NULL;
  r_6 = t;
  {
    t = table_keys_0(t);
    {
      ATerm q_0 (ATerm t)
      {
        ATerm t_6 = NULL;
        ATerm v_6 = NULL;
        t_6 = t;
        {
          ATerm w_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_6), not_null(t_6));
          {
            t = table_get_0(t);
            {
              w_6 = t;
              if(((v_6 != NULL) && (v_6 != w_6)))
                _fail(w_6);
              else
                v_6 = w_6;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_6), not_null(v_6));
        }
        return(t);
      }
      t = map_1(t, q_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm d_87 (ATerm))
{
  ATerm r_0 (ATerm t)
  {
    ATerm j_7;
    j_7 = t;
    {
      ATerm b_7 = NULL;
      ATerm c_7 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          c_7 = t;
          if(((b_7 != NULL) && (b_7 != c_7)))
            _fail(c_7);
          else
            b_7 = c_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_7), term_n_7);
        t = geq_0(t);
      }
    }
    t = j_7;
    t = d_87(t);
    return(t);
  }
  t = try_1(t, r_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm v_7;
  v_7 = t;
  {
    ATerm f_7 = NULL;
    ATerm g_7 = NULL;
    g_7 = t;
    if(((f_7 != NULL) && (f_7 != g_7)))
      _fail(g_7);
    else
      f_7 = g_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(f_7));
      t = printnl_0(t);
    }
  }
  t = v_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm m_7 = NULL;
  ATerm o_7 = NULL,p_7 = NULL;
  m_7 = t;
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(m_7)));
    {
      t = table_get_0(t);
      {
        q_7 = t;
        k_7 :
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            r_7 = ATgetFirst((ATermList) q_7);
            u_7 = (ATerm) ATgetNext((ATermList) q_7);
            l_7 :
            if(match_cons(r_7, sym__2))
              {
                s_7 = ATgetArgument(r_7, 0);
                t_7 = ATgetArgument(r_7, 1);
                {
                  if(((o_7 != NULL) && (o_7 != s_7)))
                    _fail(s_7);
                  else
                    o_7 = s_7;
                  if(((p_7 != NULL) && (p_7 != t_7)))
                    _fail(t_7);
                  else
                    p_7 = t_7;
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(p_7);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
  b_8 = t;
  a_8 :
  if(match_cons(b_8, sym__2))
    {
      c_8 = ATgetArgument(b_8, 0);
      d_8 = ATgetArgument(b_8, 1);
      {
        ATerm g_8 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(c_8)));
        {
          t = table_get_0(t);
          {
            ATerm s_0 (ATerm t)
            {
              ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
              h_8 = t;
              z_7 :
              if(match_cons(h_8, sym__2))
                {
                  i_8 = ATgetArgument(h_8, 0);
                  j_8 = ATgetArgument(h_8, 1);
                  {
                    if(((d_8 != NULL) && (d_8 != i_8)))
                      _fail(i_8);
                    else
                      d_8 = i_8;
                    if(((g_8 != NULL) && (g_8 != j_8)))
                      _fail(j_8);
                    else
                      g_8 = j_8;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, s_0);
          }
        }
        t = not_null(g_8);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm y_7 = t;
  int e_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(e_8);
    }
  else
    {
      t = y_7;
      {
        ATerm f_8 = t;
        int k_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 (ATerm t)
            {
              t = filter_1(t, u_71);
              return(t);
            }
            t = Cons_2(t, u_71, t_0);
            ;
            LocalPopChoice(k_8);
          }
        else
          {
            t = f_8;
            {
              ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL;
              o_8 = t;
              n_8 :
              if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
                {
                  p_8 = ATgetFirst((ATermList) o_8);
                  q_8 = (ATerm) ATgetNext((ATermList) o_8);
                  {
                    t = not_null(q_8);
                    t = filter_1(t, u_71);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm u_0 (ATerm t)
    {
      t = e_77(t);
      t = t_8(t);
      return(t);
    }
    t = try_1(t, u_0);
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_m_8;
    {
      t = table_get_0(t);
      {
        t = filter_1(t, xtc_read_0);
        {
          ATerm r_8 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_8;
            }
        }
      }
    }
    return(t);
  }
  t = repeat_1(t, v_0);
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm w_0 (ATerm t)
  {
    ATerm s_8;
    s_8 = t;
    {
      ATerm v_8 = NULL;
      ATerm w_8 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          w_8 = t;
          if(((v_8 != NULL) && (v_8 != w_8)))
            _fail(w_8);
          else
            v_8 = w_8;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_8), term_u_8);
        t = geq_0(t);
      }
    }
    t = s_8;
    t = c_87(t);
    return(t);
  }
  t = try_1(t, w_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm e_87 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm z_8 = NULL;
      ATerm a_9 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          a_9 = t;
          if(((z_8 != NULL) && (z_8 != a_9)))
            _fail(a_9);
          else
            z_8 = a_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_8), term_y_8);
        t = geq_0(t);
      }
    }
    t = x_8;
    t = e_87(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym__2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      if(((f_9 != NULL) && (f_9 != g_9)))
        _fail(g_9);
      else
        f_9 = g_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm e_70 (ATerm), ATerm f_70 (ATerm))
{
  ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
  m_9 = t;
  l_9 :
  if(((ATgetType(m_9) == AT_LIST) && !(ATisEmpty(m_9))))
    {
      n_9 = ATgetFirst((ATermList) m_9);
      o_9 = (ATerm) ATgetNext((ATermList) m_9);
      {
        t = f_70(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm r_9 = NULL;
            r_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(r_9));
              t = e_70(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(o_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  x_9 = t;
  w_9 :
  if(match_cons(x_9, sym__2))
    {
      y_9 = ATgetArgument(x_9, 0);
      z_9 = ATgetArgument(x_9, 1);
      {
        t = not_null(y_9);
        {
          ATerm d_10 (ATerm t)
          {
            ATerm b_9 = t;
            int c_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_9);
                ;
                LocalPopChoice(c_9);
              }
            else
              {
                t = b_9;
                {
                  ATerm h_9 = t;
                  int i_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(z_9);
                        return(t);
                      }
                      t = HdMember_p__2(t, a_70, a_1);
                      t = d_10(t);
                      ;
                      LocalPopChoice(i_9);
                    }
                  else
                    {
                      t = h_9;
                      t = Cons_2(t, _id, d_10);
                    }
                }
              }
            return(t);
          }
          t = d_10(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  i_10 = t;
  h_10 :
  if(match_cons(i_10, sym__3))
    {
      j_10 = ATgetArgument(i_10, 0);
      k_10 = ATgetArgument(i_10, 1);
      l_10 = ATgetArgument(i_10, 2);
      {
        ATerm j_9;
        j_9 = t;
        {
          ATerm p_10 = NULL;
          ATerm q_10 = NULL,s_10 = NULL;
          ATerm r_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(k_10));
          {
            ATerm k_9 = t;
            int p_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(p_9);
              }
            else
              {
                t = k_9;
                t = (ATerm) ATempty;
              }
            {
              r_10 = t;
              if(((q_10 != NULL) && (q_10 != r_10)))
                _fail(r_10);
              else
                q_10 = r_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(l_10));
            {
              t = union_0(t);
              {
                s_10 = t;
                if(((p_10 != NULL) && (p_10 != s_10)))
                  _fail(s_10);
                else
                  p_10 = s_10;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_10), not_null(k_10), not_null(p_10));
            t = set_0(t);
          }
        }
        t = j_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
  a_11 = t;
  z_10 :
  if(match_cons(a_11, sym__2))
    {
      b_11 = ATgetArgument(a_11, 0);
      c_11 = ATgetArgument(a_11, 1);
      {
        t = not_null(c_11);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL;
            f_11 = t;
            y_10 :
            if(match_cons(f_11, sym__2))
              {
                g_11 = ATgetArgument(f_11, 0);
                h_11 = ATgetArgument(f_11, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_11), not_null(g_11), not_null(h_11));
                  t = g_59(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, b_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm n_11 = NULL;
  ATerm q_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_11 = NULL;
      o_11 = t;
      {
        if(((n_11 != NULL) && (n_11 != o_11)))
          _fail(o_11);
        else
          n_11 = o_11;
        t = SSL_ReadFromFile(not_null(n_11));
      }
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = q_9;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_t_9;
          return(t);
        }
        t = debug_1(t, c_1);
        _fail(t);
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_11 = NULL;
  ATerm u_11 = NULL;
  s_11 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_1 (ATerm t)
      {
        t = term_u_9;
        return(t);
      }
      t = debug_1(t, e_1);
      return(t);
    }
    t = if_verbose5_1(t, d_1);
    {
      ATerm v_9 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_11)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = v_9;
        }
      {
        ATerm a_10;
        a_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_7, term_b_10, (ATerm) ATinsert(ATempty, not_null(s_11)));
          t = table_put_0(t);
        }
        t = a_10;
        {
          ATerm f_1 (ATerm t)
          {
            ATerm g_1 (ATerm t)
            {
              t = term_c_10;
              return(t);
            }
            t = debug_1(t, g_1);
            return(t);
          }
          t = if_verbose4_1(t, f_1);
          {
            ATerm e_10 = t;
            int f_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                t = ReadFromFile_0(t);
                ;
                LocalPopChoice(f_10);
              }
            else
              {
                t = e_10;
                t = (ATerm) ATempty;
              }
            {
              ATerm h_1 (ATerm t)
              {
                ATerm l_1 (ATerm t)
                {
                  t = term_g_10;
                  return(t);
                }
                t = say_1(t, l_1);
                return(t);
              }
              t = if_verbose6_1(t, h_1);
              {
                ATerm v_11 = NULL;
                v_11 = t;
                if(((u_11 != NULL) && (u_11 != v_11)))
                  _fail(v_11);
                else
                  u_11 = v_11;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(u_11));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm m_1 (ATerm t)
                      {
                        ATerm n_1 (ATerm t)
                        {
                          t = term_m_10;
                          return(t);
                        }
                        t = say_1(t, n_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, m_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_x_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_11)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm o_1 (ATerm t)
                            {
                              ATerm p_1 (ATerm t)
                              {
                                t = term_g_10;
                                return(t);
                              }
                              t = say_1(t, p_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, o_1);
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
ATerm getenv_0 (ATerm t)
{
  ATerm z_11 = NULL;
  z_11 = t;
  t = SSL_getenv(not_null(z_11));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm r_1 (ATerm t)
    {
      t = term_x_10;
      return(t);
    }
    t = debug_1(t, r_1);
    return(t);
  }
  t = if_verbose5_1(t, q_1);
  {
    ATerm d_11;
    d_11 = t;
    {
      ATerm e_11 = t;
      int i_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_j_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(i_11);
        }
      else
        {
          t = e_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = d_11;
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          t = term_k_11;
          return(t);
        }
        t = debug_1(t, t_1);
        return(t);
      }
      t = if_verbose5_1(t, s_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_1 (ATerm t)
        {
          t = term_p_11;
          return(t);
        }
        t = debug_1(t, v_1);
        return(t);
      }
      t = if_verbose5_1(t, u_1);
      {
        t = xtc_load_0(t);
        {
          ATerm q_11 = t;
          int r_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(r_11);
            }
          else
            {
              t = q_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm w_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                t = term_p_11;
                return(t);
              }
              t = debug_1(t, x_1);
              return(t);
            }
            t = if_verbose5_1(t, w_1);
          }
        }
      }
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm d_12 = NULL;
        ATerm e_12 = NULL;
        e_12 = t;
        if(((d_12 != NULL) && (d_12 != e_12)))
          _fail(e_12);
        else
          d_12 = e_12;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_11), not_null(d_12)), term_t_11);
          {
            t = error_0(t);
            {
              ATerm z_1 (ATerm t)
              {
                t = term_x_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm a_2 (ATerm t)
                    {
                      t = term_x_11;
                      return(t);
                    }
                    t = debug_1(t, a_2);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, z_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm i_12 = NULL;
  ATerm y_11;
  y_11 = t;
  {
    ATerm j_12 = NULL;
    t = d_74(t);
    {
      t = xtc_find_warning_0(t);
      {
        j_12 = t;
        if(((i_12 != NULL) && (i_12 != j_12)))
          _fail(j_12);
        else
          i_12 = j_12;
      }
    }
  }
  t = y_11;
  {
    ATerm a_12;
    a_12 = t;
    {
      ATerm k_12 = NULL;
      ATerm l_12 = NULL;
      l_12 = t;
      if(((k_12 != NULL) && (k_12 != l_12)))
        _fail(l_12);
      else
        k_12 = l_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_12), not_null(k_12));
        t = call_0(t);
      }
    }
    t = a_12;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym__2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
        ATerm b_12;
        b_12 = t;
        {
          ATerm b_13 = NULL;
          ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
          t = z_74(t);
          {
            b_13 = t;
            {
              if(((y_12 != NULL) && (y_12 != b_13)))
                _fail(b_13);
              else
                y_12 = b_13;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(y_12), not_null(u_12), not_null(v_12));
                {
                  t = table_push_0(t);
                  {
                    ATerm c_12 = t;
                    int f_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), term_g_12);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(f_12);
                      }
                    else
                      {
                        t = c_12;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      c_13 = t;
                      r_12 :
                      if(((ATgetType(c_13) == AT_LIST) && !(ATisEmpty(c_13))))
                        {
                          d_13 = ATgetFirst((ATermList) c_13);
                          e_13 = (ATerm) ATgetNext((ATermList) c_13);
                          {
                            if(((z_12 != NULL) && (z_12 != d_13)))
                              _fail(d_13);
                            else
                              z_12 = d_13;
                            {
                              if(((a_13 != NULL) && (a_13 != e_13)))
                                _fail(e_13);
                              else
                                a_13 = e_13;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(y_12), term_g_12, (ATerm) ATinsert(CheckATermList(not_null(a_13)), (ATerm) ATinsert(CheckATermList(not_null(z_12)), not_null(u_12))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = b_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm h_12;
  h_12 = t;
  {
    t = n_75(t);
    {
      ATerm b_2 (ATerm t)
      {
        t = term_m_12;
        return(t);
      }
      t = debug_1(t, b_2);
    }
  }
  t = h_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
      o_13 = t;
      j_13 :
      if(match_cons(o_13, sym__2))
        {
          p_13 = ATgetArgument(o_13, 0);
          q_13 = ATgetArgument(o_13, 1);
          {
            if(((n_13 != NULL) && (n_13 != p_13)))
              _fail(p_13);
            else
              n_13 = p_13;
            if(((m_13 != NULL) && (m_13 != q_13)))
              _fail(q_13);
            else
              m_13 = q_13;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_12);
      t = SSL_open_file(not_null(n_13), not_null(m_13));
    }
  else
    {
      t = n_12;
      {
        ATerm r_13 = NULL;
        ATerm s_13 = NULL;
        ATerm c_2 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = obsolete_1(t, c_2);
        {
          r_13 = t;
          {
            if(((n_13 != NULL) && (n_13 != r_13)))
              _fail(r_13);
            else
              n_13 = r_13;
            {
              ATerm q_12;
              q_12 = t;
              {
                ATerm t_13 = NULL;
                t = term_w_12;
                {
                  t_13 = t;
                  if(((s_13 != NULL) && (s_13 != t_13)))
                    _fail(t_13);
                  else
                    s_13 = t_13;
                }
              }
              t = q_12;
              t = SSL_open_file(not_null(n_13), not_null(s_13));
            }
          }
        }
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm z_13 = NULL;
  ATerm b_14 = NULL;
  z_13 = t;
  {
    ATerm x_12;
    x_12 = t;
    {
      ATerm c_14 = NULL;
      t = term_f_13;
      {
        c_14 = t;
        if(((b_14 != NULL) && (b_14 != c_14)))
          _fail(c_14);
        else
          b_14 = c_14;
      }
    }
    t = x_12;
    {
      t = SSL_open_file(not_null(z_13), not_null(b_14));
      t = SSL_close_file(not_null(z_13));
    }
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm g_14 = NULL;
  ATerm h_14 = NULL;
  t = term_d_7;
  {
    t = new_0(t);
    {
      h_14 = t;
      if(((g_14 != NULL) && (g_14 != h_14)))
        _fail(h_14);
      else
        g_14 = h_14;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), term_g_13);
    {
      t = conc_strings_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm l_14 = NULL;
  t = new_file_0(t);
  {
    l_14 = t;
    {
      ATerm h_13;
      h_13 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_w_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), term_d_7);
            {
              ATerm e_2 (ATerm t)
              {
                t = term_i_13;
                return(t);
              }
              t = assert_1(t, e_2);
            }
          }
        }
      }
      t = h_13;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm v_14 = NULL,w_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_stdin_0))
    {
      ATerm x_14 = NULL;
      ATerm y_14 = NULL;
      ATerm z_14 = NULL;
      t = xtc_new_file_0(t);
      {
        y_14 = t;
        {
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
          {
            ATerm a_15 = NULL;
            t = o_0(t);
            {
              a_15 = t;
              if(((z_14 != NULL) && (z_14 != a_15)))
                _fail(a_15);
              else
                z_14 = a_15;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_14), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), term_k_13));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(x_14);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(x_14));
    }
  else
    {
      if(match_cons(v_14, sym_FILE_1))
        {
          w_14 = ATgetArgument(v_14, 0);
          {
            ATerm c_15 = NULL;
            ATerm d_15 = NULL;
            t = not_null(w_14);
            {
              ATerm e_15 = NULL;
              t = xtc_new_file_0(t);
              {
                d_15 = t;
                {
                  if(((c_15 != NULL) && (c_15 != d_15)))
                    _fail(d_15);
                  else
                    c_15 = d_15;
                  {
                    ATerm f_15 = NULL;
                    t = o_0(t);
                    {
                      f_15 = t;
                      if(((e_15 != NULL) && (e_15 != f_15)))
                        _fail(f_15);
                      else
                        e_15 = f_15;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_15), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(c_15)), term_k_13), not_null(w_14)), term_l_13));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(c_15);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_15));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm q_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_stdin_0))
    {
      ATerm s_15 = NULL,u_15 = NULL;
      ATerm u_13;
      u_13 = t;
      {
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
      }
      t = u_13;
      {
        ATerm v_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(s_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        t = not_null(u_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm u_52 (ATerm))
{
  ATerm e_16 = NULL,f_16 = NULL;
  e_16 = t;
  d_16 :
  if(match_cons(e_16, sym_FILE_1))
    {
      f_16 = ATgetArgument(e_16, 0);
      {
        ATerm i_16 = NULL,k_16 = NULL;
        ATerm j_16 = NULL;
        t = SSLgetAnnotations(not_null(e_16));
        {
          j_16 = t;
          if(((i_16 != NULL) && (i_16 != j_16)))
            _fail(j_16);
          else
            i_16 = j_16;
        }
        {
          t = not_null(f_16);
          {
            ATerm m_16 = NULL;
            t = u_52(t);
            {
              k_16 = t;
              {
                ATerm n_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(k_16)), not_null(i_16));
                {
                  n_16 = t;
                  if(((m_16 != NULL) && (m_16 != n_16)))
                    _fail(n_16);
                  else
                    m_16 = n_16;
                }
                t = not_null(m_16);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm f_74 (ATerm), ATerm g_74 (ATerm))
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_13 = t;
      int y_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(y_13);
        }
      else
        {
          t = x_13;
          t = stdin_0(t);
        }
      LocalPopChoice(w_13);
      t = xtc_transform_file_2(t, f_74, g_74);
    }
  else
    {
      t = v_13;
      t = xtc_transform_term_2(t, f_74, g_74);
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL;
  u_16 = t;
  t_16 :
  if(match_cons(u_16, sym__2))
    {
      v_16 = ATgetArgument(u_16, 0);
      w_16 = ATgetArgument(u_16, 1);
      t = SSL_copy(not_null(v_16), not_null(w_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm e_17 = NULL;
  e_17 = t;
  d_17 :
  if(match_cons(e_17, sym_stderr_0))
    {
      ATerm g_17 = NULL,i_17 = NULL;
      ATerm a_14;
      a_14 = t;
      {
        ATerm h_17 = NULL;
        t = SSLgetAnnotations(not_null(e_17));
        {
          h_17 = t;
          if(((g_17 != NULL) && (g_17 != h_17)))
            _fail(h_17);
          else
            g_17 = h_17;
        }
      }
      t = a_14;
      {
        ATerm j_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(g_17));
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
        t = not_null(i_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm r_17 = NULL;
  r_17 = t;
  q_17 :
  if(match_cons(r_17, sym_stdout_0))
    {
      ATerm t_17 = NULL,v_17 = NULL;
      ATerm d_14;
      d_14 = t;
      {
        ATerm u_17 = NULL;
        t = SSLgetAnnotations(not_null(r_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
      }
      t = d_14;
      {
        ATerm w_17 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(t_17));
        {
          w_17 = t;
          if(((v_17 != NULL) && (v_17 != w_17)))
            _fail(w_17);
          else
            v_17 = w_17;
        }
        t = not_null(v_17);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym_FILE_1))
    {
      j_18 = ATgetArgument(i_18, 0);
      {
        ATerm e_14 = t;
        int f_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_18 = NULL;
            ATerm m_18 = NULL;
            t = m_0(t);
            {
              m_18 = t;
              {
                if(((l_18 != NULL) && (l_18 != m_18)))
                  _fail(m_18);
                else
                  l_18 = m_18;
                {
                  ATerm i_14 = t;
                  int j_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(j_14);
                    }
                  else
                    {
                      t = i_14;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(l_18));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
            ;
            LocalPopChoice(f_14);
          }
        else
          {
            t = e_14;
            {
              ATerm k_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_18 = NULL;
                  ATerm p_18 = NULL;
                  t = m_0(t);
                  {
                    p_18 = t;
                    {
                      if(((o_18 != NULL) && (o_18 != p_18)))
                        _fail(p_18);
                      else
                        o_18 = p_18;
                      {
                        ATerm n_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm o_14 = t;
                            int p_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(p_14);
                              }
                            else
                              {
                                t = o_14;
                                {
                                  ATerm q_14 = t;
                                  int r_14 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(r_14);
                                    }
                                  else
                                    {
                                      t = q_14;
                                      {
                                        ATerm q_18 = NULL;
                                        q_18 = t;
                                        if(((j_18 != NULL) && (j_18 != q_18)))
                                          _fail(q_18);
                                        else
                                          j_18 = q_18;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = n_14;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(j_18), not_null(o_18));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  ;
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = k_14;
                  {
                    ATerm s_18 = NULL;
                    t = m_0(t);
                    {
                      s_18 = t;
                      if(((j_18 != NULL) && (j_18 != s_18)))
                        _fail(s_18);
                      else
                        j_18 = s_18;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(j_18));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
    {
      e_19 = ATgetFirst((ATermList) d_19);
      f_19 = (ATerm) ATgetNext((ATermList) d_19);
      t = not_null(f_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm s_14;
        s_14 = t;
        {
          ATerm q_19 = NULL;
          ATerm s_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
          {
            ATerm t_14 = t;
            int b_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(b_15);
              }
            else
              {
                t = t_14;
                t = (ATerm) ATempty;
              }
            {
              s_19 = t;
              if(((q_19 != NULL) && (q_19 != s_19)))
                _fail(s_19);
              else
                q_19 = s_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_19), not_null(n_19), not_null(q_19));
            t = table_put_0(t);
          }
        }
        t = s_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  ATerm g_15;
  g_15 = t;
  {
    ATerm h_20 = NULL;
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
    t = w_74(t);
    {
      h_20 = t;
      {
        if(((g_20 != NULL) && (g_20 != h_20)))
          _fail(h_20);
        else
          g_20 = h_20;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), term_g_12);
              t = table_get_0(t);
              ;
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_20 = t;
            d_20 :
            if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
              {
                l_20 = ATgetFirst((ATermList) k_20);
                m_20 = (ATerm) ATgetNext((ATermList) k_20);
                {
                  if(((f_20 != NULL) && (f_20 != l_20)))
                    _fail(l_20);
                  else
                    f_20 = l_20;
                  {
                    if(((e_20 != NULL) && (e_20 != m_20)))
                      _fail(m_20);
                    else
                      e_20 = m_20;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(g_20), term_g_12, not_null(e_20));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(f_20);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm n_20 = NULL;
                              n_20 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(n_20));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, f_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = g_15;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm y_20 = NULL;
  y_20 = t;
  t = SSL_remove(not_null(y_20));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm a_63 (ATerm), ATerm b_63 (ATerm))
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_63(t);
      t = b_63(t);
      ;
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
      {
        t = b_63(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm d_21 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm e_21 = NULL;
    ATerm f_21 = NULL;
    t = v_74(t);
    {
      e_21 = t;
      {
        if(((d_21 != NULL) && (d_21 != e_21)))
          _fail(e_21);
        else
          d_21 = e_21;
        {
          ATerm g_21 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_21), term_g_12);
          {
            ATerm m_15 = t;
            int n_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(n_15);
              }
            else
              {
                t = m_15;
                t = (ATerm) ATempty;
              }
            {
              g_21 = t;
              if(((f_21 != NULL) && (f_21 != g_21)))
                _fail(g_21);
              else
                f_21 = g_21;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_21), term_g_12, (ATerm) ATinsert(CheckATermList(not_null(f_21)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_15;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm l_21 = NULL,r_21 = NULL;
  ATerm g_2 (ATerm t)
  {
    t = term_i_13;
    return(t);
  }
  t = begin_scope_1(t, g_2);
  {
    ATerm h_2 (ATerm t)
    {
      ATerm o_15;
      o_15 = t;
      {
        ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
        ATerm r_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_x_15;
            t = table_get_0(t);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = r_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          s_21 = t;
          k_21 :
          if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
            {
              t_21 = ATgetFirst((ATermList) s_21);
              u_21 = (ATerm) ATgetNext((ATermList) s_21);
              {
                if(((r_21 != NULL) && (r_21 != t_21)))
                  _fail(t_21);
                else
                  r_21 = t_21;
                {
                  if(((l_21 != NULL) && (l_21 != u_21)))
                    _fail(u_21);
                  else
                    l_21 = u_21;
                  {
                    t = not_null(r_21);
                    {
                      ATerm i_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, i_2);
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = o_15;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_i_13;
          return(t);
        }
        t = end_scope_1(t, j_2);
      }
      return(t);
    }
    t = restore_always_2(t, p_73, h_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_22 = NULL;
        ATerm j_22 = NULL;
        t = term_l_13;
        {
          t = get_config_0(t);
          {
            j_22 = t;
            if(((i_22 != NULL) && (i_22 != j_22)))
              _fail(j_22);
            else
              i_22 = j_22;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_22));
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        t = term_e_7;
      }
    {
      t = q_73(t);
      {
        ATerm l_2 (ATerm t)
        {
          ATerm a_16 = t;
          int b_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_k_13;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_16);
            }
          else
            {
              t = a_16;
              t = term_c_16;
            }
          return(t);
        }
        t = copy_to_1(t, l_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, k_2);
  return(t);
}
ATerm ast2text_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      t = term_g_16;
      return(t);
    }
    ATerm o_2 (ATerm t)
    {
      t = term_h_16;
      {
        t = get_config_0(t);
        {
          ATerm p_2 (ATerm t)
          {
            ATerm n_22 = NULL;
            ATerm p_22 = NULL;
            p_22 = t;
            if(((n_22 != NULL) && (n_22 != p_22)))
              _fail(p_22);
            else
              n_22 = p_22;
            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_22)), term_h_16);
            return(t);
          }
          t = map_1(t, p_2);
          t = concat_0(t);
        }
      }
      return(t);
    }
    t = xtc_transform_2(t, n_2, o_2);
    t = xtc_abox2text_1(t, pass_width_0);
    return(t);
  }
  t = xtc_io_1(t, m_2);
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,x_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      x_22 = ATgetArgument(v_22, 1);
      {
        ATerm a_23 = NULL;
        ATerm b_23 = NULL,d_23 = NULL;
        ATerm c_23 = NULL;
        t = not_null(w_22);
        {
          ATerm l_16 = t;
          int o_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(o_16);
            }
          else
            {
              t = l_16;
              t = (ATerm) ATempty;
            }
          {
            c_23 = t;
            if(((b_23 != NULL) && (b_23 != c_23)))
              _fail(c_23);
            else
              b_23 = c_23;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), not_null(b_23));
          {
            t = conc_0(t);
            {
              d_23 = t;
              if(((a_23 != NULL) && (a_23 != d_23)))
                _fail(d_23);
              else
                a_23 = d_23;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_16, not_null(w_22), not_null(a_23));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pp_options_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm j_23 = NULL;
    j_23 = t;
    h_23 :
    if(!(match_string(j_23, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    ATerm q_16;
    q_16 = t;
    {
      ATerm k_23 = NULL;
      ATerm l_23 = NULL;
      l_23 = t;
      if(((k_23 != NULL) && (k_23 != l_23)))
        _fail(l_23);
      else
        k_23 = l_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_16, (ATerm) ATinsert(ATempty, not_null(k_23)));
        t = extend_config_0(t);
      }
    }
    t = q_16;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_r_16;
    return(t);
  }
  t = ArgOption_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
  s_23 = t;
  q_23 :
  if(match_string(s_23, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_23) == AT_LIST) && !(ATisEmpty(s_23))))
        {
          t_23 = ATgetFirst((ATermList) s_23);
          u_23 = (ATerm) ATgetNext((ATermList) s_23);
          r_23 :
          if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
            {
              v_23 = ATgetFirst((ATermList) u_23);
              w_23 = (ATerm) ATgetNext((ATermList) u_23);
              {
                ATerm f_24 = NULL;
                ATerm s_16;
                s_16 = t;
                {
                  t = not_null(t_23);
                  t = j_0(t);
                }
                t = s_16;
                {
                  ATerm g_24 = NULL;
                  t = not_null(v_23);
                  {
                    t = k_0(t);
                    {
                      g_24 = t;
                      if(((f_24 != NULL) && (f_24 != g_24)))
                        _fail(g_24);
                      else
                        f_24 = g_24;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_23)), not_null(f_24));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm l_24 = NULL;
    l_24 = t;
    k_24 :
    if(!(match_string(l_24, "-v")))
      {
        if(!(match_string(l_24, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_y_16;
    t = set_config_0(t);
    t = term_z_16;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_a_17;
    return(t);
  }
  t = Option_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm o_24 = NULL;
    o_24 = t;
    m_24 :
    if(!(match_string(o_24, "-k")))
      {
        if(!(match_string(o_24, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    ATerm b_17;
    b_17 = t;
    {
      ATerm p_24 = NULL;
      ATerm q_24 = NULL;
      t = string_to_int_0(t);
      {
        q_24 = t;
        if(((p_24 != NULL) && (p_24 != q_24)))
          _fail(q_24);
        else
          p_24 = q_24;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(p_24));
        t = set_config_0(t);
      }
    }
    t = b_17;
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    t = term_f_17;
    return(t);
  }
  t = ArgOption_3(t, w_2, x_2, c_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = SSL_string_to_int(not_null(x_24));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_3 (ATerm t)
      {
        ATerm f_25 = NULL;
        f_25 = t;
        a_25 :
        if(!(match_string(f_25, "-S")))
          {
            if(!(match_string(f_25, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_3 (ATerm t)
      {
        t = term_n_17;
        t = set_config_0(t);
        t = term_o_17;
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_p_17;
        return(t);
      }
      t = Option_3(t, d_3, e_3, f_3);
      ;
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm s_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm g_25 = NULL;
              g_25 = t;
              b_25 :
              if(!(match_string(g_25, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm j_25 = NULL;
              ATerm y_17;
              y_17 = t;
              {
                ATerm h_25 = NULL;
                ATerm i_25 = NULL;
                t = string_to_int_0(t);
                {
                  i_25 = t;
                  if(((h_25 != NULL) && (h_25 != i_25)))
                    _fail(i_25);
                  else
                    h_25 = i_25;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_6, not_null(h_25));
                  t = set_config_0(t);
                }
              }
              t = y_17;
              {
                ATerm k_25 = NULL;
                k_25 = t;
                if(((j_25 != NULL) && (j_25 != k_25)))
                  _fail(k_25);
                else
                  j_25 = k_25;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_25));
              }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_z_17;
              return(t);
            }
            t = ArgOption_3(t, k_3, l_3, m_3);
            ;
            LocalPopChoice(x_17);
          }
        else
          {
            t = s_17;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm l_25 = NULL;
                l_25 = t;
                e_25 :
                if(!(match_string(l_25, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_3 (ATerm t)
              {
                t = term_b_18;
                t = set_config_0(t);
                t = term_c_18;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_d_18;
                return(t);
              }
              t = Option_3(t, n_3, o_3, p_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm g_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(k_18);
          }
        else
          {
            t = g_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm r_25 = NULL;
    r_25 = t;
    o_25 :
    if(!(match_string(r_25, "-o")))
      {
        if(!(match_string(r_25, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm u_25 = NULL;
    ATerm n_18;
    n_18 = t;
    {
      ATerm s_25 = NULL;
      ATerm t_25 = NULL;
      t_25 = t;
      if(((s_25 != NULL) && (s_25 != t_25)))
        _fail(t_25);
      else
        s_25 = t_25;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(s_25));
        t = set_config_0(t);
      }
    }
    t = n_18;
    {
      ATerm v_25 = NULL;
      v_25 = t;
      if(((u_25 != NULL) && (u_25 != v_25)))
        _fail(v_25);
      else
        u_25 = v_25;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_25));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  t = ArgOption_3(t, v_3, y_3, z_3);
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm b_26 = NULL;
    b_26 = t;
    y_25 :
    if(!(match_string(b_26, "-i")))
      {
        if(!(match_string(b_26, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm e_26 = NULL;
    ATerm t_18;
    t_18 = t;
    {
      ATerm c_26 = NULL;
      ATerm d_26 = NULL;
      d_26 = t;
      if(((c_26 != NULL) && (c_26 != d_26)))
        _fail(d_26);
      else
        c_26 = d_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_13, not_null(c_26));
        t = set_config_0(t);
      }
    }
    t = t_18;
    {
      ATerm f_26 = NULL;
      f_26 = t;
      if(((e_26 != NULL) && (e_26 != f_26)))
        _fail(f_26);
      else
        e_26 = f_26;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_26));
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm abox2text_options_0 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0(t);
            ;
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
              ATerm z_18 = t;
              int a_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = general_options_0(t);
                  ;
                  LocalPopChoice(a_19);
                }
              else
                {
                  t = z_18;
                  {
                    ATerm h_4 (ATerm t)
                    {
                      ATerm k_26 = NULL;
                      k_26 = t;
                      i_26 :
                      if(!(match_string(k_26, "-w")))
                        {
                          if(!(match_string(k_26, "--width")))
                            {
                              _fail(t);
                            }
                        }
                      return(t);
                    }
                    ATerm i_4 (ATerm t)
                    {
                      ATerm b_19;
                      b_19 = t;
                      {
                        ATerm l_26 = NULL;
                        ATerm m_26 = NULL;
                        m_26 = t;
                        if(((l_26 != NULL) && (l_26 != m_26)))
                          _fail(m_26);
                        else
                          l_26 = m_26;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_o_6, not_null(l_26));
                          t = set_config_0(t);
                        }
                      }
                      t = b_19;
                      return(t);
                    }
                    ATerm j_4 (ATerm t)
                    {
                      t = term_g_19;
                      return(t);
                    }
                    t = ArgOption_3(t, h_4, i_4, j_4);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm ast2text_options_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = abox2text_options_0(t);
      ;
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm j_19;
  j_19 = t;
  {
    ATerm k_4 (ATerm t)
    {
      ATerm r_26 = NULL,s_26 = NULL;
      r_26 = t;
      p_26 :
      if(match_cons(r_26, sym_Program_1))
        {
          s_26 = ATgetArgument(r_26, 0);
          if(((q_26 != NULL) && (q_26 != s_26)))
            _fail(s_26);
          else
            q_26 = s_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, k_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_19), not_null(q_26)), term_o_19));
      {
        t = printnl_0(t);
        {
          t = term_y_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, term_r_19));
  {
    t = printnl_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_26 = NULL;
  v_26 = t;
  t = SSL_TicksToSeconds(not_null(v_26));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_27), not_null(c_27));
            ;
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = SSL_addr(not_null(b_27), not_null(c_27));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm r_70 (ATerm), ATerm s_70 (ATerm))
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = r_70(t);
      ;
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
        j_27 = t;
        i_27 :
        if(((ATgetType(j_27) == AT_LIST) && !(ATisEmpty(j_27))))
          {
            k_27 = ATgetFirst((ATermList) j_27);
            l_27 = (ATerm) ATgetNext((ATermList) j_27);
            {
              ATerm o_27 = NULL;
              ATerm p_27 = NULL;
              t = not_null(l_27);
              {
                t = foldr_2(t, r_70, s_70);
                {
                  p_27 = t;
                  if(((o_27 != NULL) && (o_27 != p_27)))
                    _fail(p_27);
                  else
                    o_27 = p_27;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(o_27));
                t = s_70(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm p_69 (ATerm), ATerm q_69 (ATerm))
{
  ATerm w_27 = NULL;
  ATerm y_27 = NULL;
  w_27 = t;
  {
    ATerm z_27 = NULL;
    ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL;
    t = not_null(w_27);
    {
      z_27 = t;
      {
        t = SSL_explode_term(not_null(z_27));
        {
          b_28 = t;
          v_27 :
          if(match_cons(b_28, sym__2))
            {
              c_28 = ATgetArgument(b_28, 0);
              d_28 = ATgetArgument(b_28, 1);
              if(((y_27 != NULL) && (y_27 != d_28)))
                _fail(d_28);
              else
                y_27 = d_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_27);
      t = foldr_2(t, p_69, q_69);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm l_4 (ATerm t)
    {
      t = term_m_17;
      return(t);
    }
    t = crush_2(t, l_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym__2))
    {
      k_28 = ATgetArgument(j_28, 0);
      l_28 = ATgetArgument(j_28, 1);
      {
        ATerm x_19;
        x_19 = t;
        {
          ATerm y_19 = t;
          int z_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(k_28), not_null(l_28));
              ;
              LocalPopChoice(z_19);
            }
          else
            {
              t = y_19;
              t = SSL_gtr(not_null(k_28), not_null(l_28));
            }
        }
        t = x_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm r_28 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
      s_28 = t;
      q_28 :
      if(match_cons(s_28, sym__2))
        {
          t_28 = ATgetArgument(s_28, 0);
          u_28 = ATgetArgument(s_28, 1);
          {
            if(((r_28 != NULL) && (r_28 != t_28)))
              _fail(t_28);
            else
              r_28 = t_28;
            if(((r_28 != NULL) && (r_28 != u_28)))
              _fail(u_28);
            else
              r_28 = u_28;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_86 (ATerm))
{
  ATerm n_4 (ATerm t)
  {
    ATerm c_20;
    c_20 = t;
    {
      ATerm x_28 = NULL;
      ATerm y_28 = NULL;
      t = term_s_6;
      {
        t = get_config_0(t);
        {
          y_28 = t;
          if(((x_28 != NULL) && (x_28 != y_28)))
            _fail(y_28);
          else
            x_28 = y_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_28), term_y_6);
        t = geq_0(t);
      }
    }
    t = c_20;
    t = z_86(t);
    return(t);
  }
  t = try_1(t, n_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_4 (ATerm t)
  {
    ATerm c_29 = NULL,e_29 = NULL;
    ATerm i_20;
    i_20 = t;
    {
      ATerm d_29 = NULL;
      t = run_time_0(t);
      {
        d_29 = t;
        if(((c_29 != NULL) && (c_29 != d_29)))
          _fail(d_29);
        else
          c_29 = d_29;
      }
    }
    t = i_20;
    {
      ATerm f_29 = NULL;
      t = term_j_20;
      {
        t = get_config_0(t);
        {
          f_29 = t;
          if(((e_29 != NULL) && (e_29 != f_29)))
            _fail(f_29);
          else
            e_29 = f_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_20), not_null(c_29)), term_o_20), not_null(e_29)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_4);
  {
    t = term_m_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_29 = NULL;
  p_29 = t;
  m_29 :
  if(match_cons(p_29, sym_Version_0))
    {
      ATerm u_29 = NULL,w_29 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm v_29 = NULL;
        t = SSLgetAnnotations(not_null(p_29));
        {
          v_29 = t;
          if(((u_29 != NULL) && (u_29 != v_29)))
            _fail(v_29);
          else
            u_29 = v_29;
        }
      }
      t = q_20;
      {
        ATerm x_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_29));
        {
          x_29 = t;
          if(((w_29 != NULL) && (w_29 != x_29)))
            _fail(x_29);
          else
            w_29 = x_29;
        }
        t = not_null(w_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm r_4 (ATerm t)
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, r_4);
  t = k_78(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  t = SSL_table_create(not_null(c_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_30 = NULL;
  g_30 = t;
  {
    ATerm v_20;
    v_20 = t;
    {
      t = term_w_20;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_20, term_x_20, not_null(g_30));
          t = table_put_0(t);
        }
      }
    }
    t = v_20;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_table_destroy(not_null(m_30));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_30 = NULL;
  q_30 = t;
  t = SSL_exit(not_null(q_30));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(((ATgetType(u_30) == AT_LIST) && ATisEmpty(u_30)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
        {
          v_30 = ATgetFirst((ATermList) u_30);
          w_30 = (ATerm) ATgetNext((ATermList) u_30);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm z_20;
  z_20 = t;
  {
    ATerm z_30 = NULL;
    ATerm c_31 = NULL;
    ATerm a_21 = t;
    int b_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(b_21);
      }
    else
      {
        t = a_21;
        {
          ATerm a_31 = NULL;
          ATerm b_31 = NULL;
          b_31 = t;
          if(((a_31 != NULL) && (a_31 != b_31)))
            _fail(b_31);
          else
            a_31 = b_31;
          t = (ATerm) ATinsert(ATempty, not_null(a_31));
        }
      }
    {
      c_31 = t;
      if(((z_30 != NULL) && (z_30 != c_31)))
        _fail(c_31);
      else
        z_30 = c_31;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_16, not_null(z_30));
      t = printnl_0(t);
    }
  }
  t = z_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm s_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL;
  n_31 = t;
  k_31 :
  if(((ATgetType(n_31) == AT_LIST) && !(ATisEmpty(n_31))))
    {
      l_31 = ATgetFirst((ATermList) n_31);
      m_31 = (ATerm) ATgetNext((ATermList) n_31);
      {
        ATerm q_31 = NULL;
        t = not_null(m_31);
        {
          ATerm c_21;
          c_21 = t;
          {
            ATerm r_31 = NULL,t_31 = NULL,v_31 = NULL;
            ATerm h_21;
            h_21 = t;
            {
              ATerm s_31 = NULL;
              t = i_0(t);
              {
                s_31 = t;
                if(((r_31 != NULL) && (r_31 != s_31)))
                  _fail(s_31);
                else
                  r_31 = s_31;
              }
            }
            t = h_21;
            {
              ATerm u_31 = NULL;
              t = not_null(l_31);
              {
                t = h_0(t);
                {
                  u_31 = t;
                  if(((t_31 != NULL) && (t_31 != u_31)))
                    _fail(u_31);
                  else
                    t_31 = u_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(r_31)), not_null(t_31));
                {
                  v_31 = t;
                  if(((q_31 != NULL) && (q_31 != v_31)))
                    _fail(v_31);
                  else
                    q_31 = v_31;
                }
              }
            }
          }
          t = c_21;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(q_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(n_31) == AT_LIST) && ATisEmpty(n_31)))
        {
          {
            t = term_d_7;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm p_32 = NULL,s_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_Program_1))
    {
      s_32 = ATgetArgument(p_32, 0);
      {
        ATerm v_32 = NULL,z_32 = NULL;
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(p_32));
        {
          y_32 = t;
          if(((v_32 != NULL) && (v_32 != y_32)))
            _fail(y_32);
          else
            v_32 = y_32;
        }
        {
          t = not_null(s_32);
          {
            ATerm b_33 = NULL;
            t = t_57(t);
            {
              z_32 = t;
              {
                ATerm c_33 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_32)), not_null(v_32));
                {
                  c_33 = t;
                  if(((b_33 != NULL) && (b_33 != c_33)))
                    _fail(c_33);
                  else
                    b_33 = c_33;
                }
                t = not_null(b_33);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm v_33 = NULL;
  ATerm i_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_33 = NULL;
      t = term_j_20;
      {
        t = get_config_0(t);
        {
          w_33 = t;
          if(((v_33 != NULL) && (v_33 != w_33)))
            _fail(w_33);
          else
            v_33 = w_33;
        }
      }
      ;
      LocalPopChoice(j_21);
    }
  else
    {
      t = i_21;
      {
        ATerm v_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            ATerm x_33 = NULL;
            x_33 = t;
            if(((v_33 != NULL) && (v_33 != x_33)))
              _fail(x_33);
            else
              v_33 = x_33;
            return(t);
          }
          t = Program_1(t, w_4);
          return(t);
        }
        t = option_defined_1(t, v_4);
      }
    }
  {
    ATerm b_5 (ATerm t)
    {
      ATerm c_5 (ATerm t)
      {
        t = not_null(v_33);
        return(t);
      }
      t = short_description_1(t, c_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, b_5);
    {
      t = term_m_21;
      {
        t = echo_0(t);
        {
          t = term_p_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_5 (ATerm t)
                {
                  ATerm y_33 = NULL;
                  ATerm a_34 = NULL;
                  a_34 = t;
                  if(((y_33 != NULL) && (y_33 != a_34)))
                    _fail(a_34);
                  else
                    y_33 = a_34;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_33)), term_q_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_5);
                {
                  ATerm e_5 (ATerm t)
                  {
                    ATerm d_34 = NULL;
                    ATerm e_34 = NULL;
                    ATerm g_5 (ATerm t)
                    {
                      t = not_null(v_33);
                      return(t);
                    }
                    t = long_description_1(t, g_5);
                    {
                      e_34 = t;
                      if(((d_34 != NULL) && (d_34 != e_34)))
                        _fail(e_34);
                      else
                        d_34 = e_34;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_34)), term_v_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm w_21;
  w_21 = t;
  {
    ATerm y_34 = NULL;
    ATerm z_34 = NULL;
    z_34 = t;
    if(((y_34 != NULL) && (y_34 != z_34)))
      _fail(z_34);
    else
      y_34 = z_34;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(y_34)));
      t = printnl_0(t);
    }
  }
  t = w_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm x_21;
  x_21 = t;
  {
    t = h_75(t);
    t = debug_0(t);
  }
  t = x_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_57 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL;
  m_35 = t;
  j_35 :
  if(match_cons(m_35, sym_Undefined_1))
    {
      n_35 = ATgetArgument(m_35, 0);
      {
        ATerm t_35 = NULL,v_35 = NULL;
        ATerm u_35 = NULL;
        t = SSLgetAnnotations(not_null(m_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
        {
          t = not_null(n_35);
          {
            ATerm x_35 = NULL;
            t = u_57(t);
            {
              v_35 = t;
              {
                ATerm y_35 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_35)), not_null(t_35));
                {
                  y_35 = t;
                  if(((x_35 != NULL) && (x_35 != y_35)))
                    _fail(y_35);
                  else
                    x_35 = y_35;
                }
                t = not_null(x_35);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm d_36 (ATerm t)
  {
    ATerm y_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, m_64, _id);
        ;
        LocalPopChoice(z_21);
      }
    else
      {
        t = y_21;
        t = Cons_2(t, _id, d_36);
      }
    return(t);
  }
  t = d_36(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_79 (ATerm))
{
  t = fetch_1(t, r_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_36 = NULL;
  i_36 = t;
  h_36 :
  if(match_cons(i_36, sym_Help_0))
    {
      ATerm k_36 = NULL,m_36 = NULL;
      ATerm a_22;
      a_22 = t;
      {
        ATerm l_36 = NULL;
        t = SSLgetAnnotations(not_null(i_36));
        {
          l_36 = t;
          if(((k_36 != NULL) && (k_36 != l_36)))
            _fail(l_36);
          else
            k_36 = l_36;
        }
      }
      t = a_22;
      {
        ATerm n_36 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_36));
        {
          n_36 = t;
          if(((m_36 != NULL) && (m_36 != n_36)))
            _fail(n_36);
          else
            m_36 = n_36;
        }
        t = not_null(m_36);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  t = SSL_implode_string(not_null(s_36));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
        x_36 = t;
        w_36 :
        if(((ATgetType(x_36) == AT_LIST) && !(ATisEmpty(x_36))))
          {
            y_36 = ATgetFirst((ATermList) x_36);
            z_36 = (ATerm) ATgetNext((ATermList) x_36);
            {
              t = not_null(y_36);
              {
                ATerm h_5 (ATerm t)
                {
                  t = not_null(z_36);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_5);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm j_37 = NULL;
  ATerm l_37 = NULL;
  j_37 = t;
  {
    ATerm m_37 = NULL;
    ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
    t = not_null(j_37);
    {
      m_37 = t;
      {
        t = SSL_explode_term(not_null(m_37));
        {
          o_37 = t;
          h_37 :
          if(match_cons(o_37, sym__2))
            {
              p_37 = ATgetArgument(o_37, 0);
              q_37 = ATgetArgument(o_37, 1);
              i_37 :
              if(match_string(p_37, ""))
                {
                  if(((l_37 != NULL) && (l_37 != q_37)))
                    _fail(q_37);
                  else
                    l_37 = q_37;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_37);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm u_37 (ATerm t)
  {
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, u_37);
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
        {
          t = Nil_0(t);
          t = s_64(t);
        }
      }
    return(t);
  }
  t = u_37(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  w_37 :
  if(match_cons(x_37, sym__2))
    {
      y_37 = ATgetArgument(x_37, 0);
      z_37 = ATgetArgument(x_37, 1);
      {
        t = not_null(y_37);
        {
          ATerm i_5 (ATerm t)
          {
            t = not_null(z_37);
            return(t);
          }
          t = at_end_1(t, i_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm f_22 = t;
  int g_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(g_22);
    }
  else
    {
      t = f_22;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  t = SSL_explode_string(not_null(e_38));
  return(t);
}
ATerm _2 (ATerm t, ATerm x_50 (ATerm), ATerm y_50 (ATerm))
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym__2))
    {
      o_38 = ATgetArgument(n_38, 0);
      p_38 = ATgetArgument(n_38, 1);
      {
        ATerm t_38 = NULL,v_38 = NULL;
        ATerm u_38 = NULL;
        t = SSLgetAnnotations(not_null(n_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        {
          t = not_null(o_38);
          {
            ATerm x_38 = NULL;
            t = x_50(t);
            {
              v_38 = t;
              {
                t = not_null(p_38);
                {
                  ATerm z_38 = NULL;
                  t = y_50(t);
                  {
                    x_38 = t;
                    {
                      ATerm a_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(v_38), not_null(x_38)), not_null(t_38));
                      {
                        a_39 = t;
                        if(((z_38 != NULL) && (z_38 != a_39)))
                          _fail(a_39);
                        else
                          z_38 = a_39;
                      }
                      t = not_null(z_38);
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
    {
      _fail(t);
    }
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
ATerm printnl_0 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
  i_39 = t;
  h_39 :
  if(match_cons(i_39, sym__2))
    {
      j_39 = ATgetArgument(i_39, 0);
      k_39 = ATgetArgument(i_39, 1);
      {
        ATerm h_22;
        h_22 = t;
        t = SSL_printnl(not_null(j_39), not_null(k_39));
        t = h_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm k_22;
  k_22 = t;
  {
    ATerm q_39 = NULL,s_39 = NULL;
    ATerm l_22;
    l_22 = t;
    {
      ATerm r_39 = NULL;
      t = g_75(t);
      {
        r_39 = t;
        if(((q_39 != NULL) && (q_39 != r_39)))
          _fail(r_39);
        else
          q_39 = r_39;
      }
    }
    t = l_22;
    {
      ATerm t_39 = NULL;
      t_39 = t;
      if(((s_39 != NULL) && (s_39 != t_39)))
        _fail(t_39);
      else
        s_39 = t_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_39)), not_null(q_39)));
        t = printnl_0(t);
      }
    }
  }
  t = k_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm w_39 (ATerm t)
  {
    ATerm m_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = m_22;
        t = Cons_2(t, d_64, w_39);
      }
    return(t);
  }
  t = w_39(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  t = SSL_is_string(not_null(y_39));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, j_5);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            {
              ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
              k_40 = t;
              g_40 :
              if(match_cons(k_40, sym_Path_1))
                {
                  l_40 = ATgetArgument(k_40, 0);
                  t = not_null(l_40);
                }
              else
                {
                  if(match_cons(k_40, sym_Var_1))
                    {
                      l_40 = ATgetArgument(k_40, 0);
                      {
                        t = not_null(l_40);
                        {
                          ATerm y_22 = t;
                          int z_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(z_22);
                            }
                          else
                            {
                              t = y_22;
                              {
                                ATerm k_5 (ATerm t)
                                {
                                  t = term_e_23;
                                  return(t);
                                }
                                t = debug_1(t, k_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(k_40, sym_Prefix_2))
                        {
                          l_40 = ATgetArgument(k_40, 0);
                          m_40 = ATgetArgument(k_40, 1);
                          {
                            ATerm r_40 = NULL,t_40 = NULL;
                            ATerm f_23;
                            f_23 = t;
                            {
                              ATerm s_40 = NULL;
                              t = not_null(l_40);
                              {
                                t = eval_config_0(t);
                                {
                                  s_40 = t;
                                  if(((r_40 != NULL) && (r_40 != s_40)))
                                    _fail(s_40);
                                  else
                                    r_40 = s_40;
                                }
                              }
                            }
                            t = f_23;
                            {
                              ATerm u_40 = NULL;
                              t = not_null(m_40);
                              {
                                t = eval_config_0(t);
                                {
                                  u_40 = t;
                                  if(((t_40 != NULL) && (t_40 != u_40)))
                                    _fail(u_40);
                                  else
                                    t_40 = u_40;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(r_40), not_null(t_40));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm e_41 = NULL;
  e_41 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_16, not_null(e_41));
    {
      t = table_get_0(t);
      {
        ATerm m_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_23;
            g_23 = t;
            {
              ATerm g_41 = NULL;
              ATerm h_41 = NULL;
              h_41 = t;
              if(((g_41 != NULL) && (g_41 != h_41)))
                _fail(h_41);
              else
                g_41 = h_41;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_16, not_null(e_41), not_null(g_41));
                t = table_put_0(t);
              }
            }
            t = g_23;
          }
          return(t);
        }
        t = try_1(t, m_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm i_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_62(t);
      ;
      LocalPopChoice(m_23);
    }
  else
    {
      t = i_23;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  n_41 :
  if(match_cons(q_41, sym__2))
    {
      r_41 = ATgetArgument(q_41, 0);
      s_41 = ATgetArgument(q_41, 1);
      t = SSL_table_get(not_null(r_41), not_null(s_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
  z_41 = t;
  y_41 :
  if(match_cons(z_41, sym__3))
    {
      a_42 = ATgetArgument(z_41, 0);
      b_42 = ATgetArgument(z_41, 1);
      c_42 = ATgetArgument(z_41, 2);
      {
        ATerm n_23;
        n_23 = t;
        {
          ATerm g_42 = NULL;
          ATerm h_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_42), not_null(b_42));
          {
            ATerm o_23 = t;
            int p_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(p_23);
              }
            else
              {
                t = o_23;
                t = (ATerm) ATempty;
              }
            {
              h_42 = t;
              if(((g_42 != NULL) && (g_42 != h_42)))
                _fail(h_42);
              else
                g_42 = h_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_42), not_null(b_42), (ATerm) ATinsert(CheckATermList(not_null(g_42)), not_null(c_42)));
            t = table_put_0(t);
          }
        }
        t = n_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_80 (ATerm))
{
  ATerm n_42 = NULL;
  ATerm p_42 = NULL;
  t = term_d_7;
  {
    t = w_80(t);
    {
      p_42 = t;
      if(((n_42 != NULL) && (n_42 != p_42)))
        _fail(p_42);
      else
        n_42 = p_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_n_21, term_o_21, not_null(n_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_string(w_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
        {
          x_42 = ATgetFirst((ATermList) w_42);
          y_42 = (ATerm) ATgetNext((ATermList) w_42);
          {
            ATerm b_43 = NULL;
            ATerm x_23;
            x_23 = t;
            {
              t = not_null(x_42);
              t = a_0(t);
            }
            t = x_23;
            {
              ATerm c_43 = NULL;
              t = term_d_7;
              {
                t = d_0(t);
                {
                  c_43 = t;
                  if(((b_43 != NULL) && (b_43 != c_43)))
                    _fail(c_43);
                  else
                    b_43 = c_43;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_42)), not_null(b_43));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm q_5 (ATerm t)
  {
    ATerm h_43 = NULL;
    h_43 = t;
    g_43 :
    if(!(match_string(h_43, "--help")))
      {
        if(!(match_string(h_43, "-h")))
          {
            if(!(match_string(h_43, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_z_23;
    {
      t = set_config_0(t);
      t = term_a_24;
    }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = term_b_24;
    return(t);
  }
  t = Option_3(t, q_5, s_5, y_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL;
  k_43 = t;
  j_43 :
  if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
    {
      l_43 = ATgetFirst((ATermList) k_43);
      m_43 = (ATerm) ATgetNext((ATermList) k_43);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_43)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_43)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm g_52 (ATerm), ATerm h_52 (ATerm))
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL;
  w_43 = t;
  v_43 :
  if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
    {
      x_43 = ATgetFirst((ATermList) w_43);
      y_43 = (ATerm) ATgetNext((ATermList) w_43);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(w_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(x_43);
          {
            ATerm g_44 = NULL;
            t = g_52(t);
            {
              e_44 = t;
              {
                t = not_null(y_43);
                {
                  ATerm i_44 = NULL;
                  t = h_52(t);
                  {
                    g_44 = t;
                    {
                      ATerm j_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(g_44)), not_null(e_44)), not_null(c_44));
                      {
                        j_44 = t;
                        if(((i_44 != NULL) && (i_44 != j_44)))
                          _fail(j_44);
                        else
                          i_44 = j_44;
                      }
                      t = not_null(i_44);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && ATisEmpty(t_44)))
    {
      {
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_24;
        c_24 = t;
        {
          ATerm c_45 = NULL;
          t = SSLgetAnnotations(not_null(t_44));
          {
            c_45 = t;
            if(((b_45 != NULL) && (b_45 != c_45)))
              _fail(c_45);
            else
              b_45 = c_45;
          }
        }
        t = c_24;
        {
          ATerm e_45 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_45));
          {
            e_45 = t;
            if(((d_45 != NULL) && (d_45 != e_45)))
              _fail(e_45);
            else
              d_45 = e_45;
          }
          t = not_null(d_45);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm l_45 = NULL,n_45 = NULL,o_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym__2))
    {
      n_45 = ATgetArgument(l_45, 0);
      o_45 = ATgetArgument(l_45, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_16, not_null(n_45), not_null(o_45));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm u_80 (ATerm))
{
  ATerm d_24;
  d_24 = t;
  {
    ATerm z_5 (ATerm t)
    {
      t = term_e_24;
      t = u_80(t);
      return(t);
    }
    t = try_1(t, z_5);
  }
  t = d_24;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_46 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm z_45 = NULL;
        ATerm a_46 = NULL;
        a_46 = t;
        if(((z_45 != NULL) && (z_45 != a_46)))
          _fail(a_46);
        else
          z_45 = a_46;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_20, not_null(z_45));
          t = set_config_0(t);
        }
      }
      t = h_24;
      {
        ATerm g_46 = NULL;
        g_46 = t;
        if(((b_46 != NULL) && (b_46 != g_46)))
          _fail(g_46);
        else
          b_46 = g_46;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_46));
      }
      return(t);
    }
    ATerm b_6 (ATerm t)
    {
      ATerm i_24 = t;
      int j_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_24 = t;
          int r_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_24);
            }
          else
            {
              t = n_24;
              {
                t = u_80(t);
                t = Cons_2(t, _id, b_6);
              }
            }
          ;
          LocalPopChoice(j_24);
        }
      else
        {
          t = i_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_6, b_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
  ATerm s_24;
  s_24 = t;
  {
    ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
    p_46 = t;
    l_46 :
    if(match_cons(p_46, sym__3))
      {
        q_46 = ATgetArgument(p_46, 0);
        r_46 = ATgetArgument(p_46, 1);
        s_46 = ATgetArgument(p_46, 2);
        {
          if(((m_46 != NULL) && (m_46 != q_46)))
            _fail(q_46);
          else
            m_46 = q_46;
          {
            if(((n_46 != NULL) && (n_46 != r_46)))
              _fail(r_46);
            else
              n_46 = r_46;
            {
              if(((o_46 != NULL) && (o_46 != s_46)))
                _fail(s_46);
              else
                o_46 = s_46;
              t = SSL_table_put(not_null(m_46), not_null(n_46), not_null(o_46));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = s_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm v_46 = NULL;
  ATerm t_24;
  t_24 = t;
  {
    t = term_u_24;
    t = table_put_0(t);
  }
  t = t_24;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_80(t);
          ;
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_6);
    {
      ATerm h_6 (ATerm t)
      {
        ATerm y_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_25;
            c_25 = t;
            {
              ATerm d_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_y_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(m_25);
                }
              else
                {
                  t = d_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = c_25;
            {
              t = system_usage_0(t);
              {
                t = term_m_17;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(z_24);
          }
        else
          {
            t = y_24;
            {
              ATerm i_6 (ATerm t)
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm w_46 = NULL;
                  w_46 = t;
                  if(((v_46 != NULL) && (v_46 != w_46)))
                    _fail(w_46);
                  else
                    v_46 = w_46;
                  return(t);
                }
                t = Undefined_1(t, j_6);
                return(t);
              }
              t = option_defined_1(t, i_6);
              {
                ATerm k_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_46)), term_n_25);
                  return(t);
                }
                t = say_1(t, k_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_6);
      {
        ATerm p_25;
        p_25 = t;
        {
          t = term_n_21;
          t = table_destroy_0(t);
        }
        t = p_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm), ATerm t_78 (ATerm))
{
  t = parse_options_1(t, q_78);
  {
    t = store_options_0(t);
    {
      t = s_78(t);
      {
        ATerm q_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, r_78);
            ;
            LocalPopChoice(w_25);
          }
        else
          {
            t = q_25;
            {
              ATerm x_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_78(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = x_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm u_78 (ATerm), ATerm v_78 (ATerm))
{
  t = option_wrap_4(t, u_78, default_usage_0, _id, v_78);
  return(t);
}
ATerm io_ast2text_0 (ATerm t)
{
  t = option_wrap_2(t, ast2text_options_0, ast2text_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_ast2text_0(t);
  return(t);
}
