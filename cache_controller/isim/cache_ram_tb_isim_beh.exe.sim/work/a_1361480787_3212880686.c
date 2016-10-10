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
static const char *ng0 = "//file/UsersM$/mrh129/Home/My Documents/cache-management-FPGA/cache_controller/cache_ram.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2930370427_3536714472(char *, char *, char *, char *, int );


static void work_a_1361480787_3212880686_p_0(char *t0)
{
    char t16[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    int t17;
    unsigned int t18;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 684U);
    t5 = *((char **)t1);
    t6 = (7 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 2412);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t6 = (7 - 3);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t5 = (t0 + 2448);
    t9 = (t5 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t1 = (t0 + 1420U);
    t9 = *((char **)t1);
    t1 = (t0 + 5380U);
    t14 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t9, t1);
    t15 = (t14 - 0);
    t6 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t14);
    t7 = (4U * t6);
    t8 = (0 + t7);
    t10 = (t5 + t8);
    t11 = (t16 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 3;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t17 = (0 - 3);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t12 = (t0 + 1512U);
    t13 = *((char **)t12);
    t12 = (t0 + 5396U);
    t20 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t19, t13, t12, 4);
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t10, t16, t20, t19);
    if (t21 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2484);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t9 = (t5 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(65, ng0);
    t22 = (t0 + 2484);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t1 = (t0 + 5380U);
    t14 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t5, t1);
    t15 = (t14 - 0);
    t6 = (t15 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t14);
    t7 = (8U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 2520);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t20 = *((char **)t13);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB9;

LAB11:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 776U);
    t5 = *((char **)t1);
    t1 = (t0 + 1420U);
    t9 = *((char **)t1);
    t1 = (t0 + 5380U);
    t14 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t9, t1);
    t15 = (t14 - 0);
    t6 = (t15 * 1);
    t7 = (8U * t6);
    t8 = (0U + t7);
    t10 = (t0 + 2556);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t20 = *((char **)t13);
    memcpy(t20, t5, 8U);
    xsi_driver_first_trans_delta(t10, t8, 8U, 0LL);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5396U);
    t5 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t16, t2, t1, 4);
    t9 = (t0 + 1420U);
    t10 = *((char **)t9);
    t9 = (t0 + 5380U);
    t14 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t10, t9);
    t15 = (t14 - 0);
    t6 = (t15 * 1);
    t7 = (4U * t6);
    t8 = (0U + t7);
    t11 = (t0 + 2592);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t20 = (t13 + 40U);
    t22 = *((char **)t20);
    memcpy(t22, t5, 4U);
    xsi_driver_first_trans_delta(t11, t8, 4U, 0LL);
    goto LAB12;

}


extern void work_a_1361480787_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1361480787_3212880686_p_0};
	xsi_register_didat("work_a_1361480787_3212880686", "isim/cache_ram_tb_isim_beh.exe.sim/work/a_1361480787_3212880686.didat");
	xsi_register_executes(pe);
}
