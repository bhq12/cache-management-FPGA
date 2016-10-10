/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xcb73ee62 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//file/UsersB$/bhq12/Home/cache-management-FPGA/cache_controller/simple_ram.vhd";
extern char *IEEE_P_3499444699;



static void work_a_0284546656_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2092);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1144U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 776U);
    t8 = *((char **)t1);
    t1 = (t0 + 684U);
    t9 = *((char **)t1);
    t1 = (t0 + 4192U);
    t10 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t9, t1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    t13 = (8U * t12);
    t14 = (0U + t13);
    t15 = (t0 + 2136);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 8U);
    xsi_driver_first_trans_delta(t15, t14, 8U, 0LL);
    goto LAB6;

LAB8:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1236U);
    t5 = *((char **)t1);
    t1 = (t0 + 684U);
    t8 = *((char **)t1);
    t1 = (t0 + 4192U);
    t10 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t8, t1);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t10);
    t13 = (8U * t12);
    t14 = (0 + t13);
    t9 = (t5 + t14);
    t15 = (t0 + 2172);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 8U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2208);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB9;

}


extern void work_a_0284546656_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0284546656_3212880686_p_0};
	xsi_register_didat("work_a_0284546656_3212880686", "isim/cache_system_isim_beh.exe.sim/work/a_0284546656_3212880686.didat");
	xsi_register_executes(pe);
}
