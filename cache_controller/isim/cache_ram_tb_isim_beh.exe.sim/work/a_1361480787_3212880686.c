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
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3499444699_sub_2930370427_3536714472(char *, char *, char *, char *, int );


static void work_a_1361480787_3212880686_p_0(char *t0)
{
    char t15[16];
    char t18[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    int t13;
    int t14;
    int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t3 = (t0 + 2504);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 936U);
    t8 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(84, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)4, 8U);
    t3 = (t0 + 2504);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 2460);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t9 = (7 - 7);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t2 = (t3 + t11);
    t4 = (t0 + 2540);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t12 = *((char **)t7);
    memcpy(t12, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t3 = (t0 + 2576);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t3, t1);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t13);
    t10 = (4U * t9);
    t11 = (0 + t10);
    t4 = (t2 + t11);
    t5 = (t15 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 3;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t16 = (0 - 3);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t17;
    t6 = (t0 + 1604U);
    t7 = *((char **)t6);
    t6 = (t0 + 5616U);
    t12 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t18, t7, t6, 4);
    t8 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t15, t12, t18);
    if (t8 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t24 = (t8 == (unsigned char)2);
    if (t24 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2612);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 40U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t19 = (t0 + 2612);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t24 = (t8 == (unsigned char)2);
    if (t24 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t8 = *((unsigned char *)t2);
    t24 = (t8 == (unsigned char)3);
    if (t24 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB6;

LAB8:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t4, t1);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    t10 = (8U * t9);
    t11 = (0U + t10);
    t5 = (t0 + 2648);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t12 = (t7 + 40U);
    t19 = *((char **)t12);
    memcpy(t19, t3, 8U);
    xsi_driver_first_trans_delta(t5, t11, 8U, 0LL);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 5616U);
    t3 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t15, t2, t1, 4);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t5, t4);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    t10 = (4U * t9);
    t11 = (0U + t10);
    t6 = (t0 + 2684);
    t7 = (t6 + 32U);
    t12 = *((char **)t7);
    t19 = (t12 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 4U);
    xsi_driver_first_trans_delta(t6, t11, 4U, 0LL);
    goto LAB9;

LAB11:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t4, t1);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t13);
    t10 = (8U * t9);
    t11 = (0 + t10);
    t5 = (t3 + t11);
    t6 = (t0 + 2504);
    t7 = (t6 + 32U);
    t12 = *((char **)t7);
    t19 = (t12 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB12;

LAB14:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t1 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t4, t1);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    t10 = (8U * t9);
    t11 = (0U + t10);
    t5 = (t0 + 2648);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t12 = (t7 + 40U);
    t19 = *((char **)t12);
    memcpy(t19, t3, 8U);
    xsi_driver_first_trans_delta(t5, t11, 8U, 0LL);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 5616U);
    t3 = ieee_p_3499444699_sub_2930370427_3536714472(IEEE_P_3499444699, t15, t2, t1, 4);
    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t4 = (t0 + 5600U);
    t13 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t5, t4);
    t14 = (t13 - 0);
    t9 = (t14 * 1);
    t10 = (4U * t9);
    t11 = (0U + t10);
    t6 = (t0 + 2684);
    t7 = (t6 + 32U);
    t12 = *((char **)t7);
    t19 = (t12 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t3, 4U);
    xsi_driver_first_trans_delta(t6, t11, 4U, 0LL);
    goto LAB15;

}


extern void work_a_1361480787_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1361480787_3212880686_p_0};
	xsi_register_didat("work_a_1361480787_3212880686", "isim/cache_ram_tb_isim_beh.exe.sim/work/a_1361480787_3212880686.didat");
	xsi_register_executes(pe);
}
