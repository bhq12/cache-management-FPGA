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
static const char *ng0 = "//file/UsersM$/mrh129/Home/My Documents/cache-management-FPGA/cache_controller/cache_system_two_way_tb.vhd";
extern char *IEEE_P_3620187407;



static void work_a_3448423580_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1132U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1588);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1132U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1588);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

void work_a_3448423580_2372691052_sub_666135344_2855802964(char *t0, char *t1, char *t2, char *t3)
{
    char t5[24];
    char t6[16];
    char t11[16];
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int64 t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 7);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 7;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 7);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t5 + 4U);
    t14 = (t2 != 0);
    if (t14 == 1)
        goto LAB3;

LAB2:    t15 = (t5 + 8U);
    *((char **)t15) = t6;
    t16 = (t5 + 12U);
    t17 = (t3 != 0);
    if (t17 == 1)
        goto LAB5;

LAB4:    t18 = (t5 + 16U);
    *((char **)t18) = t11;
    t19 = (t0 + 2136);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 4484U);
    t25 = (t24 + 12U);
    t10 = *((unsigned int *)t25);
    t10 = (t10 * 1U);
    memcpy(t23, t2, t10);
    xsi_driver_first_trans_fast(t19);
    t7 = (t0 + 2172);
    t8 = (t7 + 32U);
    t19 = *((char **)t8);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 4452U);
    t23 = (t22 + 12U);
    t10 = *((unsigned int *)t23);
    t10 = (t10 * 1U);
    memcpy(t21, t3, t10);
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 4564);
    t19 = (t0 + 2100);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 4468U);
    t25 = (t24 + 12U);
    t10 = *((unsigned int *)t25);
    t10 = (t10 * 1U);
    memcpy(t23, t7, t10);
    xsi_driver_first_trans_fast(t19);
    t26 = (10 * 1000LL);
    xsi_process_wait(t1, t26);

LAB9:    t7 = (t1 + 48U);
    t8 = *((char **)t7);
    t19 = (t8 + 1440U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 48U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 1440U);
    t10 = *((unsigned int *)t25);
    if (t10 == 1)
        goto LAB10;

LAB11:    t27 = (t1 + 48U);
    t28 = *((char **)t27);
    t29 = (t28 + 1440U);
    *((unsigned int *)t29) = 3U;

LAB7:
LAB8:
LAB6:    t7 = (t0 + 4567);
    t19 = (t0 + 2100);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 4468U);
    t25 = (t24 + 12U);
    t10 = *((unsigned int *)t25);
    t10 = (t10 * 1U);
    memcpy(t23, t7, t10);
    xsi_driver_first_trans_fast(t19);
    t26 = (10 * 1000LL);
    xsi_process_wait(t1, t26);

LAB15:    t7 = (t1 + 48U);
    t8 = *((char **)t7);
    t19 = (t8 + 1440U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 48U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 1440U);
    t10 = *((unsigned int *)t25);
    if (t10 == 1)
        goto LAB16;

LAB17:    t27 = (t1 + 48U);
    t28 = *((char **)t27);
    t29 = (t28 + 1440U);
    *((unsigned int *)t29) = 3U;

LAB13:
LAB14:
LAB12:
LAB1:    return;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t16) = t3;
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB16:    xsi_saveStackAndSuspend(t1);
    goto LAB17;

}

void work_a_3448423580_2372691052_sub_1153916100_2855802964(char *t0, char *t1, char *t2)
{
    char t4[16];
    char t5[16];
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t4 + 4U);
    t10 = (t2 != 0);
    if (t10 == 1)
        goto LAB3;

LAB2:    t11 = (t4 + 8U);
    *((char **)t11) = t5;
    t12 = (t0 + 2136);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 4484U);
    t18 = (t17 + 12U);
    t9 = *((unsigned int *)t18);
    t9 = (t9 * 1U);
    memcpy(t16, t2, t9);
    xsi_driver_first_trans_fast(t12);
    t6 = (t0 + 4570);
    t13 = (t0 + 2172);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = (t0 + 4452U);
    t19 = (t18 + 12U);
    t9 = *((unsigned int *)t19);
    t9 = (t9 * 1U);
    memcpy(t17, t6, t9);
    xsi_driver_first_trans_fast(t13);
    t6 = (t0 + 4578);
    t13 = (t0 + 2100);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = (t0 + 4468U);
    t19 = (t18 + 12U);
    t9 = *((unsigned int *)t19);
    t9 = (t9 * 1U);
    memcpy(t17, t6, t9);
    xsi_driver_first_trans_fast(t13);
    t20 = (10 * 1000LL);
    xsi_process_wait(t1, t20);

LAB7:    t6 = (t1 + 48U);
    t12 = *((char **)t6);
    t13 = (t12 + 1440U);
    *((unsigned int *)t13) = 1U;
    t14 = (t1 + 48U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    getcontext(t16);
    t17 = (t1 + 48U);
    t18 = *((char **)t17);
    t19 = (t18 + 1440U);
    t9 = *((unsigned int *)t19);
    if (t9 == 1)
        goto LAB8;

LAB9:    t21 = (t1 + 48U);
    t22 = *((char **)t21);
    t23 = (t22 + 1440U);
    *((unsigned int *)t23) = 3U;

LAB5:
LAB6:
LAB4:
LAB1:    return;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

}

static void work_a_3448423580_2372691052_p_1(char *t0)
{
    char t11[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(114, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 1132U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4581);
    t6 = (t0 + 2100);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(124, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4584);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4618);
    t7 = (t0 + 4626);
    work_a_3448423580_2372691052_sub_666135344_2855802964(t0, t2, t4, t7);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4634);
    t7 = (t0 + 4642);
    work_a_3448423580_2372691052_sub_666135344_2855802964(t0, t2, t4, t7);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4650);
    t7 = (t0 + 4658);
    work_a_3448423580_2372691052_sub_666135344_2855802964(t0, t2, t4, t7);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4666);
    work_a_3448423580_2372691052_sub_1153916100_2855802964(t0, t2, t4);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 4500U);
    t6 = (t0 + 4674);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t6, t11);
    if (t14 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 4727);
    t6 = (t0 + 2100);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(135, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t3);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t9 = (t0 + 4682);
    xsi_report(t9, 45U, 2);
    goto LAB17;

LAB18:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4730);
    work_a_3448423580_2372691052_sub_1153916100_2855802964(t0, t2, t4);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 4500U);
    t6 = (t0 + 4738);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t6, t11);
    if (t14 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 4817);
    t6 = (t0 + 2100);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(141, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t9 = (t0 + 4746);
    xsi_report(t9, 71U, 2);
    goto LAB23;

LAB24:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1732);
    t4 = (t0 + 4820);
    work_a_3448423580_2372691052_sub_1153916100_2855802964(t0, t2, t4);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 960U);
    t4 = *((char **)t2);
    t2 = (t0 + 4500U);
    t6 = (t0 + 4828);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (7 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t14 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t6, t11);
    if (t14 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 4881);
    t6 = (t0 + 2100);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 3U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(148, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 1732);
    xsi_process_wait(t2, t3);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t9 = (t0 + 4836);
    xsi_report(t9, 45U, 2);
    goto LAB29;

LAB30:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4884);
    xsi_report(t2, 31U, 0);
    xsi_set_current_line(152, ng0);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB34:    goto LAB2;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

}


extern void work_a_3448423580_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3448423580_2372691052_p_0,(void *)work_a_3448423580_2372691052_p_1};
	static char *se[] = {(void *)work_a_3448423580_2372691052_sub_666135344_2855802964,(void *)work_a_3448423580_2372691052_sub_1153916100_2855802964};
	xsi_register_didat("work_a_3448423580_2372691052", "isim/cache_system_two_way_tb_isim_beh.exe.sim/work/a_3448423580_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
