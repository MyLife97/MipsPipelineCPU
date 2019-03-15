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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/DM.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1023, 0};
static const char *ng4 = "@%h:*%h <= %h";



static void Cont_36_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5688);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5528);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_38_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    t3 = (t0 + 4248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(45, ng0);

LAB20:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB24;

LAB21:    if (t18 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;

LAB24:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:
LAB27:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    xsi_set_current_line(40, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2728);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB15;

LAB16:    goto LAB12;

LAB15:    xsi_set_current_line(40, ng0);

LAB17:    xsi_set_current_line(41, ng0);
    t8 = ((char*)((ng2)));
    t21 = (t0 + 2408);
    t22 = (t0 + 2408);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2408);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    xsi_vlog_generic_convert_array_indices(t30, t31, t29, t34, 2, 1, t37, 32, 1);
    t38 = (t30 + 4);
    t14 = *((unsigned int *)t38);
    t39 = (!(t14));
    t40 = (t31 + 4);
    t15 = *((unsigned int *)t40);
    t41 = (!(t15));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2728);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB14;

LAB18:    t16 = *((unsigned int *)t30);
    t17 = *((unsigned int *)t31);
    t43 = (t16 - t17);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t21, t8, 0, *((unsigned int *)t31), t44);
    goto LAB19;

LAB23:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(46, ng0);

LAB28:    xsi_set_current_line(47, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 2408);
    t28 = (t0 + 2408);
    t29 = (t28 + 72U);
    t32 = *((char **)t29);
    t33 = (t0 + 2408);
    t34 = (t33 + 64U);
    t35 = *((char **)t34);
    t36 = (t0 + 1048U);
    t37 = *((char **)t36);
    memset(t45, 0, 8);
    t36 = (t45 + 4);
    t38 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = (t46 >> 2);
    *((unsigned int *)t45) = t47;
    t48 = *((unsigned int *)t38);
    t49 = (t48 >> 2);
    *((unsigned int *)t36) = t49;
    t50 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t50 & 1023U);
    t51 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t51 & 1023U);
    xsi_vlog_generic_convert_array_indices(t30, t31, t32, t35, 2, 1, t45, 10, 2);
    t40 = (t30 + 4);
    t52 = *((unsigned int *)t40);
    t39 = (!(t52));
    t53 = (t31 + 4);
    t54 = *((unsigned int *)t53);
    t41 = (!(t54));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB29;

LAB30:    goto LAB27;

LAB29:    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t31);
    t43 = (t55 - t56);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t21, t22, 0, *((unsigned int *)t31), t44);
    goto LAB30;

}

static void Always_52_2(char *t0)
{
    char t7[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    t3 = (t0 + 4496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2408);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 2);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1023U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 1023U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 10, 2);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t7, 0, 0, 32);
    goto LAB2;

}

static void Always_56_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5576);
    *((int *)t2) = 1;
    t3 = (t0 + 4744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(57, ng0);

LAB13:    xsi_set_current_line(58, ng0);
    t28 = (t0 + 1368U);
    t29 = *((char **)t28);
    t28 = (t0 + 1048U);
    t30 = *((char **)t28);
    t28 = (t0 + 1208U);
    t31 = *((char **)t28);
    xsi_vlogfile_write(1, 0, 0, ng4, 4, t0, (char)118, t29, 32, (char)118, t30, 32, (char)118, t31, 32);
    goto LAB12;

}

static void impl1_execute(char *t0)
{
    char t7[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    t1 = (t0 + 4960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5592);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 2888);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2408);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1048U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 2);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 1023U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 1023U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 10, 2);
    xsi_vlogimplicitvar_assign_value(t3, t7, 32);
    goto LAB2;

}

static void impl2_execute(char *t0)
{
    char t6[8];
    char t19[8];
    char t35[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;

LAB0:    t1 = (t0 + 5208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 3048);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB8:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB9;

LAB10:    memcpy(t43, t6, 8);

LAB11:    xsi_vlogimplicitvar_assign_value(t3, t43, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB7:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB8;

LAB9:    t17 = (t0 + 1688U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng1)));
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = (t17 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t20);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB13;

LAB12:    if (t31 != 0)
        goto LAB14;

LAB15:    memset(t35, 0, 8);
    t36 = (t19 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t19);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t36) != 0)
        goto LAB18;

LAB19:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t6 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB20;

LAB21:
LAB22:    goto LAB11;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB15;

LAB14:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t35) = 1;
    goto LAB19;

LAB18:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB19;

LAB20:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB22;

}


extern void work_m_00000000003090503548_2924402094_init()
{
	static char *pe[] = {(void *)Cont_36_0,(void *)Always_38_1,(void *)Always_52_2,(void *)Always_56_3,(void *)impl1_execute,(void *)impl2_execute};
	xsi_register_didat("work_m_00000000003090503548_2924402094", "isim/mips_test_isim_beh.exe.sim/work/m_00000000003090503548_2924402094.didat");
	xsi_register_executes(pe);
}
