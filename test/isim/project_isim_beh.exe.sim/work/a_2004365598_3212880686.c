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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/VHDL_prj/test/project.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_2563015576_1035706684(char *, char *, int , int );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


static void work_a_2004365598_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(48, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3880);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2004365598_3212880686_p_1(char *t0)
{
    char t15[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned char t31;

LAB0:    t1 = (t0 + 3560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 5896);
    t5 = xsi_mem_cmp(t2, t3, 6U);
    if (t5 == 1)
        goto LAB5;

LAB10:    t6 = (t0 + 5902);
    t8 = xsi_mem_cmp(t6, t3, 6U);
    if (t8 == 1)
        goto LAB6;

LAB11:    t9 = (t0 + 5908);
    t11 = xsi_mem_cmp(t9, t3, 6U);
    if (t11 == 1)
        goto LAB7;

LAB12:    t12 = (t0 + 5914);
    t14 = xsi_mem_cmp(t12, t3, 6U);
    if (t14 == 1)
        goto LAB8;

LAB13:
LAB9:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5744U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t4 = (t0 + 5760U);
    t7 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t15, t3, t2, t6, t4);
    t9 = (t15 + 12U);
    t29 = *((unsigned int *)t9);
    t30 = (1U * t29);
    t31 = (5U != t30);
    if (t31 == 1)
        goto LAB19;

LAB20:    t10 = (t0 + 4040);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 5U);
    xsi_driver_first_trans_fast_port(t10);

LAB4:    xsi_set_current_line(49, ng0);

LAB23:    t2 = (t0 + 3896);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB24;

LAB1:    return;
LAB5:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 1192U);
    t17 = *((char **)t16);
    t16 = (t0 + 5744U);
    t18 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t17, t16);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 5760U);
    t21 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t20, t19);
    t22 = (t18 + t21);
    t23 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t15, t22, 5);
    t24 = (t0 + 4040);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t23, 5U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB4;

LAB6:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5744U);
    t5 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t3, t2);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t4 = (t0 + 5760U);
    t8 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t6, t4);
    t11 = (t5 - t8);
    t7 = ieee_p_1242562249_sub_2563015576_1035706684(IEEE_P_1242562249, t15, t11, 5);
    t9 = (t0 + 4040);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    memcpy(t16, t7, 5U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB4;

LAB7:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5744U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t4 = (t0 + 5760U);
    t7 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t15, t3, t2, t6, t4);
    t9 = (t15 + 12U);
    t29 = *((unsigned int *)t9);
    t30 = (1U * t29);
    t31 = (5U != t30);
    if (t31 == 1)
        goto LAB15;

LAB16:    t10 = (t0 + 4040);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 5U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB8:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 5744U);
    t4 = (t0 + 1352U);
    t6 = *((char **)t4);
    t4 = (t0 + 5760U);
    t7 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t15, t3, t2, t6, t4);
    t9 = (t15 + 12U);
    t29 = *((unsigned int *)t9);
    t30 = (1U * t29);
    t31 = (5U != t30);
    if (t31 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 4040);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 5U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB4;

LAB14:;
LAB15:    xsi_size_not_matching(5U, t30, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(5U, t30, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(5U, t30, 0);
    goto LAB20;

LAB21:    t3 = (t0 + 3896);
    *((int *)t3) = 0;
    goto LAB2;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

}


extern void work_a_2004365598_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2004365598_3212880686_p_0,(void *)work_a_2004365598_3212880686_p_1};
	xsi_register_didat("work_a_2004365598_3212880686", "isim/project_isim_beh.exe.sim/work/a_2004365598_3212880686.didat");
	xsi_register_executes(pe);
}
