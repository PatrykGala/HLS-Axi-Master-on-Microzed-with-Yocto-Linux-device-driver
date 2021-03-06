// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.1
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _example_HH_
#define _example_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "example_buff.h"

namespace ap_rtl {

struct example : public sc_module {
    // Port declarations 24
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > a_req_din;
    sc_in< sc_logic > a_req_full_n;
    sc_out< sc_logic > a_req_write;
    sc_in< sc_logic > a_rsp_empty_n;
    sc_out< sc_logic > a_rsp_read;
    sc_out< sc_lv<32> > a_address;
    sc_in< sc_lv<32> > a_datain;
    sc_out< sc_lv<32> > a_dataout;
    sc_out< sc_lv<32> > a_size;
    sc_in< sc_lv<32> > stream_in_TDATA;
    sc_in< sc_logic > stream_in_TVALID;
    sc_out< sc_logic > stream_in_TREADY;
    sc_in< sc_lv<32> > byte_wroffset;
    sc_in< sc_lv<32> > ctrl_reg;
    sc_out< sc_lv<32> > status_reg;
    sc_out< sc_logic > status_reg_ap_vld;
    sc_out< sc_logic > interrupt_r;
    sc_out< sc_logic > interrupt_r_ap_vld;


    // Module declarations
    example(sc_module_name name);
    SC_HAS_PROCESS(example);

    ~example();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    example_buff* buff_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_25;
    sc_signal< sc_lv<32> > byte_wroffset_0_data_reg;
    sc_signal< sc_logic > byte_wroffset_0_vld_reg;
    sc_signal< sc_logic > byte_wroffset_0_ack_out;
    sc_signal< sc_lv<32> > ctrl_reg_0_data_reg;
    sc_signal< sc_logic > ctrl_reg_0_vld_reg;
    sc_signal< sc_logic > ctrl_reg_0_ack_out;
    sc_signal< sc_lv<32> > status_reg_1_data_reg;
    sc_signal< sc_logic > status_reg_1_vld_reg;
    sc_signal< sc_logic > status_reg_1_vld_in;
    sc_signal< sc_logic > status_reg_1_ack_in;
    sc_signal< sc_lv<1> > int_pending;
    sc_signal< sc_lv<32> > count;
    sc_signal< sc_lv<8> > indvar_reg_178;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_138;
    sc_signal< sc_lv<1> > tmp_1_fu_216_p2;
    sc_signal< sc_lv<1> > tmp_1_reg_349;
    sc_signal< sc_logic > ap_sig_cseq_ST_st3_fsm_2;
    sc_signal< bool > ap_sig_bdd_151;
    sc_signal< sc_lv<1> > brmerge_fu_226_p2;
    sc_signal< sc_lv<1> > brmerge_reg_359;
    sc_signal< sc_lv<1> > exitcond_fu_231_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_3;
    sc_signal< bool > ap_sig_bdd_162;
    sc_signal< bool > ap_sig_bdd_167;
    sc_signal< sc_lv<8> > i_1_fu_237_p2;
    sc_signal< sc_lv<32> > a_addr_reg_372;
    sc_signal< sc_lv<1> > exitcond3_fu_267_p2;
    sc_signal< sc_lv<1> > exitcond3_reg_377;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_4;
    sc_signal< bool > ap_sig_bdd_183;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<1> > ap_reg_ppstg_exitcond3_reg_377_pp0_it1;
    sc_signal< bool > ap_sig_bdd_193;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it2;
    sc_signal< sc_lv<8> > indvar_next_fu_273_p2;
    sc_signal< sc_lv<1> > is_0iter_fu_284_p2;
    sc_signal< sc_lv<1> > is_0iter_reg_391;
    sc_signal< sc_lv<1> > ap_reg_ppstg_is_0iter_reg_391_pp0_it1;
    sc_signal< sc_lv<32> > buff_q0;
    sc_signal< sc_lv<32> > buff_load_reg_395;
    sc_signal< sc_lv<32> > tmp_5_fu_294_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st8_fsm_5;
    sc_signal< bool > ap_sig_bdd_221;
    sc_signal< sc_lv<7> > buff_address0;
    sc_signal< sc_logic > buff_ce0;
    sc_signal< sc_logic > buff_we0;
    sc_signal< sc_lv<32> > buff_d0;
    sc_signal< sc_lv<8> > i_reg_167;
    sc_signal< sc_lv<1> > int_pending_flag_phi_fu_193_p4;
    sc_signal< sc_lv<1> > int_pending_flag_reg_189;
    sc_signal< sc_logic > ap_sig_cseq_ST_st9_fsm_6;
    sc_signal< bool > ap_sig_bdd_252;
    sc_signal< sc_lv<1> > int_pending_loc_phi_fu_204_p4;
    sc_signal< sc_lv<1> > int_pending_loc_reg_201;
    sc_signal< sc_lv<64> > tmp_3_fu_243_p1;
    sc_signal< sc_lv<64> > tmp_6_fu_279_p1;
    sc_signal< sc_lv<64> > tmp_7_fu_257_p1;
    sc_signal< sc_lv<1> > rev_fu_314_p2;
    sc_signal< sc_lv<1> > int_pending_flag_s_fu_320_p2;
    sc_signal< sc_lv<1> > tmp_2_fu_212_p1;
    sc_signal< sc_lv<30> > tmp_fu_248_p4;
    sc_signal< sc_lv<1> > tmp_8_fu_307_p3;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_st1_fsm_0;
    static const sc_lv<7> ap_ST_st2_fsm_1;
    static const sc_lv<7> ap_ST_st3_fsm_2;
    static const sc_lv<7> ap_ST_st4_fsm_3;
    static const sc_lv<7> ap_ST_pp0_stg0_fsm_4;
    static const sc_lv<7> ap_ST_st8_fsm_5;
    static const sc_lv<7> ap_ST_st9_fsm_6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<8> ap_const_lv8_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<8> ap_const_lv8_80;
    static const sc_lv<8> ap_const_lv8_1;
    static const sc_lv<32> ap_const_lv32_1F;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address();
    void thread_a_dataout();
    void thread_a_req_din();
    void thread_a_req_write();
    void thread_a_rsp_read();
    void thread_a_size();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_bdd_138();
    void thread_ap_sig_bdd_151();
    void thread_ap_sig_bdd_162();
    void thread_ap_sig_bdd_167();
    void thread_ap_sig_bdd_183();
    void thread_ap_sig_bdd_193();
    void thread_ap_sig_bdd_221();
    void thread_ap_sig_bdd_25();
    void thread_ap_sig_bdd_252();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_4();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_ap_sig_cseq_ST_st3_fsm_2();
    void thread_ap_sig_cseq_ST_st4_fsm_3();
    void thread_ap_sig_cseq_ST_st8_fsm_5();
    void thread_ap_sig_cseq_ST_st9_fsm_6();
    void thread_brmerge_fu_226_p2();
    void thread_buff_address0();
    void thread_buff_ce0();
    void thread_buff_d0();
    void thread_buff_we0();
    void thread_byte_wroffset_0_ack_out();
    void thread_ctrl_reg_0_ack_out();
    void thread_exitcond3_fu_267_p2();
    void thread_exitcond_fu_231_p2();
    void thread_i_1_fu_237_p2();
    void thread_indvar_next_fu_273_p2();
    void thread_int_pending_flag_phi_fu_193_p4();
    void thread_int_pending_flag_s_fu_320_p2();
    void thread_int_pending_loc_phi_fu_204_p4();
    void thread_interrupt_r();
    void thread_interrupt_r_ap_vld();
    void thread_is_0iter_fu_284_p2();
    void thread_rev_fu_314_p2();
    void thread_status_reg();
    void thread_status_reg_1_ack_in();
    void thread_status_reg_1_vld_in();
    void thread_status_reg_ap_vld();
    void thread_stream_in_TREADY();
    void thread_tmp_1_fu_216_p2();
    void thread_tmp_2_fu_212_p1();
    void thread_tmp_3_fu_243_p1();
    void thread_tmp_5_fu_294_p2();
    void thread_tmp_6_fu_279_p1();
    void thread_tmp_7_fu_257_p1();
    void thread_tmp_8_fu_307_p3();
    void thread_tmp_fu_248_p4();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
