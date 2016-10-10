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
static const char *ng0 = "//file/UsersM$/mrh129/Home/My Documents/cache-management-FPGA/cache_controller/cache_ram_tb.vhd";
extern char *IEEE_P_3620187407;



static void work_a_4288289069_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 1872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1772);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1316U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1772);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

void work_a_4288289069_2372691052_sub_666135344_2855802964(char *t0, char *t1, char *t2, char *t3)
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
    t19 = (t0 + 2284);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 40U);
    t23 = *((char **)t22);
    t24 = (t0 + 4700U);
    t25 = (t24 + 12U);
    t10 = *((unsigned int *)t25);
    t10 = (t10 * 1U);
    memcpy(t23, t2, t10);
    xsi_driver_first_trans_fast(t19);
    t7 = (t0 + 2320);
    t8 = (t7 + 32U);
    t19 = *((char **)t8);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 4716U);
    t23 = (t22 + 12U);
    t10 = *((unsigned int *)t23);
    t10 = (t10 * 1U);
    memcpy(t21, t3, t10);
    xsi_driver_first_trans_fast(t7);
    t7 = (t0 + 2356);
    t8 = (t7 + 32U);
    t19 = *((char **)t8);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
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
LAB6:    t7 = (t0 + 2392);
    t8 = (t7 + 32U);
    t19 = *((char **)t8);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
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
LAB12:    t7 = (t0 + 2392);
    t8 = (t7 + 32U);
    t19 = *((char **)t8);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    t26 = (10 * 1000LL);
    xsi_process_wait(t1, t26);

LAB21:    t7 = (t1 + 48U);
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
        goto LAB22;

LAB23:    t27 = (t1 + 48U);
    t28 = *((char **)t27);
    t29 = (t28 + 1440U);
    *((unsigned int *)t29) = 3U;

LAB19:
LAB20:
LAB18:
LAB1:    return;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    *((char **)t16) = t3;
    goto LAB4;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

LAB16:    xsi_saveStackAndSuspend(t1);
    goto LAB17;

LAB22:    xsi_saveStackAndSuspend(t1);
    goto LAB23;

}

void work_a_4288289069_2372691052_sub_1153916100_2855802964(char *t0, char *t1, char *t2)
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
    t12 = (t0 + 2284);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    t17 = (t0 + 4700U);
    t18 = (t17 + 12U);
    t9 = *((unsigned int *)t18);
    t9 = (t9 * 1U);
    memcpy(t16, t2, t9);
    xsi_driver_first_trans_fast(t12);
    t6 = (t0 + 4796);
    t13 = (t0 + 2320);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    t18 = (t0 + 4716U);
    t19 = (t18 + 12U);
    t9 = *((unsigned int *)t19);
    t9 = (t9 * 1U);
    memcpy(t17, t6, t9);
    xsi_driver_first_trans_fast(t13);
    t6 = (t0 + 2356);
    t12 = (t6 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
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
LAB4:    t6 = (t0 + 2392);
    t12 = (t6 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    t20 = (10 * 1000LL);
    xsi_process_wait(t1, t20);

LAB13:    t6 = (t1 + 48U);
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
        goto LAB14;

LAB15:    t21 = (t1 + 48U);
    t22 = *((char **)t21);
    t23 = (t22 + 1440U);
    *((unsigned int *)t23) = 3U;

LAB11:
LAB12:
LAB10:    t6 = (t0 + 2392);
    t12 = (t6 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    t20 = (10 * 1000LL);
    xsi_process_wait(t1, t20);

LAB19:    t6 = (t1 + 48U);
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
        goto LAB20;

LAB21:    t21 = (t1 + 48U);
    t22 = *((char **)t21);
    t23 = (t22 + 1440U);
    *((unsigned int *)t23) = 3U;

LAB17:
LAB18:
LAB16:
LAB1:    return;
LAB3:    *((char **)t7) = t2;
    goto LAB2;

LAB8:    xsi_saveStackAndSuspend(t1);
    goto LAB9;

LAB14:    xsi_saveStackAndSuspend(t1);
    goto LAB15;

LAB20:    xsi_saveStackAndSuspend(t1);
    goto LAB21;

}

static void work_a_4288289069_2372691052_p_1(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t14;

LAB0:    t1 = (t0 + 2016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 1916);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 4804);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1916);
    t4 = (t0 + 4838);
    t6 = (t0 + 4846);
    work_a_4288289069_2372691052_sub_666135344_2855802964(t0, t2, t4, t6);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1916);
    t4 = (t0 + 4854);
    t6 = (t0 + 4862);
    work_a_4288289069_2372691052_sub_666135344_2855802964(t0, t2, t4, t6);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 4870);
    xsi_report(t2, 34U, 0);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1916);
    t4 = (t0 + 4904);
    work_a_4288289069_2372691052_sub_1153916100_2855802964(t0, t2, t4);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4732U);
    t5 = (t0 + 4912);
    t7 = (t8 + 0U);
    t9 = (t7 + 0U);
    *((int *)t9) = 0;
    t9 = (t7 + 4U);
    *((int *)t9) = 7;
    t9 = (t7 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t7 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t8);
    if (t12 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1916);
    t4 = (t0 + 4975);
    work_a_4288289069_2372691052_sub_1153916100_2855802964(t0, t2, t4);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t14 = (t12 == (unsigned char)3);
    if (t14 == 0)
        goto LAB10;

LAB11:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 5047);
    xsi_report(t2, 23U, 0);
    xsi_set_current_line(150, ng0);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t9 = (t0 + 4920);
    xsi_report(t9, 55U, 2);
    goto LAB9;

LAB10:    t2 = (t0 + 4983);
    xsi_report(t2, 64U, 2);
    goto LAB11;

LAB12:    goto LAB2;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

}


extern void work_a_4288289069_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4288289069_2372691052_p_0,(void *)work_a_4288289069_2372691052_p_1};
	static char *se[] = {(void *)work_a_4288289069_2372691052_sub_666135344_2855802964,(void *)work_a_4288289069_2372691052_sub_1153916100_2855802964};
	xsi_register_didat("work_a_4288289069_2372691052", "isim/cache_ram_tb_isim_beh.exe.sim/work/a_4288289069_2372691052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
