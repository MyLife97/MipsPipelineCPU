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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/P6/mod_dmtender.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {65535U, 0U};
static int ng8[] = {31, 0};
static unsigned int ng9[] = {3U, 0U};
static int ng10[] = {1, 0};
static unsigned int ng11[] = {4U, 0U};
static int ng12[] = {7, 0};
static unsigned int ng13[] = {16777215U, 0U};
static int ng14[] = {23, 0};



static void Always_28_0(char *t0)
{
    char t9[8];
    char t29[8];
    char t30[8];
    char t58[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);

LAB18:    xsi_set_current_line(31, ng0);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(34, ng0);

LAB19:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB23;

LAB20:    if (t19 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB31;

LAB28:    if (t19 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t9) = 1;

LAB31:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB26:    goto LAB17;

LAB11:    xsi_set_current_line(44, ng0);

LAB36:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB40;

LAB37:    if (t19 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t9) = 1;

LAB40:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB55;

LAB52:    if (t19 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t9) = 1;

LAB55:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB56;

LAB57:
LAB58:
LAB43:    goto LAB17;

LAB13:    xsi_set_current_line(60, ng0);

LAB67:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB71;

LAB68:    if (t19 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t9) = 1;

LAB71:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB79;

LAB76:    if (t19 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t9) = 1;

LAB79:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB87;

LAB84:    if (t19 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t9) = 1;

LAB87:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(73, ng0);

LAB92:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB90:
LAB82:
LAB74:    goto LAB17;

LAB15:    xsi_set_current_line(78, ng0);

LAB93:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB97;

LAB94:    if (t19 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t9) = 1;

LAB97:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB112;

LAB109:    if (t19 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t9) = 1;

LAB112:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB113;

LAB114:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB127;

LAB124:    if (t19 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t9) = 1;

LAB127:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB128;

LAB129:    xsi_set_current_line(100, ng0);

LAB139:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t9, 32, t3, t7, 2, t8, 32, 1);
    t22 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t23 = (t9 + 4);
    t31 = (t22 + 4);
    t10 = *((unsigned int *)t9);
    t11 = *((unsigned int *)t22);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t23);
    t14 = *((unsigned int *)t31);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t23);
    t18 = *((unsigned int *)t31);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB143;

LAB140:    if (t19 != 0)
        goto LAB142;

LAB141:    *((unsigned int *)t29) = 1;

LAB143:    t33 = (t29 + 4);
    t24 = *((unsigned int *)t33);
    t25 = (~(t24));
    t26 = *((unsigned int *)t29);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB144;

LAB145:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 24);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 24);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng13)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB146:
LAB130:
LAB115:
LAB100:    goto LAB17;

LAB22:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(35, ng0);

LAB27:    xsi_set_current_line(36, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 65535U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 16, t30, 16);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 32);
    goto LAB26;

LAB30:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(39, ng0);

LAB35:    xsi_set_current_line(40, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 65535U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 65535U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 16, t30, 16);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB34;

LAB39:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(45, ng0);

LAB44:    xsi_set_current_line(46, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    t31 = (t0 + 1168U);
    t33 = (t31 + 72U);
    t40 = *((char **)t33);
    t41 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t32, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t43 = (t29 + 4);
    t44 = (t42 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t42);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t37 ^ t38);
    t45 = (t36 | t39);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB48;

LAB45:    if (t48 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t30) = 1;

LAB48:    t52 = (t30 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t29, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB51:    goto LAB43;

LAB47:    t51 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(47, ng0);
    t60 = (t0 + 1208U);
    t61 = *((char **)t60);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t62 = (t61 + 4);
    t63 = *((unsigned int *)t61);
    t64 = (t63 >> 0);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 0);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 65535U);
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 65535U);
    t69 = ((char*)((ng1)));
    xsi_vlogtype_concat(t58, 32, 32, 2U, t69, 16, t59, 16);
    t70 = (t0 + 1768);
    xsi_vlogvar_assign_value(t70, t58, 0, 0, 32);
    goto LAB51;

LAB54:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(52, ng0);

LAB59:    xsi_set_current_line(53, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    t23 = (t0 + 1168U);
    t32 = (t23 + 72U);
    t33 = *((char **)t32);
    t40 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t31, t33, 2, t40, 32, 1);
    t41 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t42 = (t29 + 4);
    t43 = (t41 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t41);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t45 = (t36 | t39);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t43);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB63;

LAB60:    if (t48 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t30) = 1;

LAB63:    t51 = (t30 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng7)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 16, t29, 16);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB66:    goto LAB58;

LAB62:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(54, ng0);
    t52 = (t0 + 1208U);
    t60 = *((char **)t52);
    memset(t59, 0, 8);
    t52 = (t59 + 4);
    t61 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 16);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 16);
    *((unsigned int *)t52) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 65535U);
    t68 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t68 & 65535U);
    t62 = ((char*)((ng1)));
    xsi_vlogtype_concat(t58, 32, 32, 2U, t62, 16, t59, 16);
    t69 = (t0 + 1768);
    xsi_vlogvar_assign_value(t69, t58, 0, 0, 32);
    goto LAB66;

LAB70:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(61, ng0);

LAB75:    xsi_set_current_line(62, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t33 = (t32 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (t34 >> 0);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t33);
    t37 = (t36 >> 0);
    *((unsigned int *)t31) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t39 & 255U);
    t40 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t40, 24, t30, 8);
    t41 = (t0 + 1768);
    xsi_vlogvar_assign_value(t41, t29, 0, 0, 32);
    goto LAB74;

LAB78:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(65, ng0);

LAB83:    xsi_set_current_line(66, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 8);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 8);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB82;

LAB86:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(69, ng0);

LAB91:    xsi_set_current_line(70, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    memset(t30, 0, 8);
    t23 = (t30 + 4);
    t32 = (t31 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 16);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 16);
    *((unsigned int *)t23) = t37;
    t38 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t38 & 255U);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & 255U);
    t33 = ((char*)((ng1)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t33, 24, t30, 8);
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t29, 0, 0, 32);
    goto LAB90;

LAB96:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(79, ng0);

LAB101:    xsi_set_current_line(80, ng0);
    t31 = (t0 + 1208U);
    t32 = *((char **)t31);
    t31 = (t0 + 1168U);
    t33 = (t31 + 72U);
    t40 = *((char **)t33);
    t41 = ((char*)((ng12)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t32, t40, 2, t41, 32, 1);
    t42 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t43 = (t29 + 4);
    t44 = (t42 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t42);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t43);
    t38 = *((unsigned int *)t44);
    t39 = (t37 ^ t38);
    t45 = (t36 | t39);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB105;

LAB102:    if (t48 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t30) = 1;

LAB105:    t52 = (t30 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng13)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB108:    goto LAB100;

LAB104:    t51 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(81, ng0);
    t60 = (t0 + 1208U);
    t61 = *((char **)t60);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t62 = (t61 + 4);
    t63 = *((unsigned int *)t61);
    t64 = (t63 >> 0);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t62);
    t66 = (t65 >> 0);
    *((unsigned int *)t60) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 255U);
    t68 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t68 & 255U);
    t69 = ((char*)((ng1)));
    xsi_vlogtype_concat(t58, 32, 32, 2U, t69, 24, t59, 8);
    t70 = (t0 + 1768);
    xsi_vlogvar_assign_value(t70, t58, 0, 0, 32);
    goto LAB108;

LAB111:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(86, ng0);

LAB116:    xsi_set_current_line(87, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    t23 = (t0 + 1168U);
    t32 = (t23 + 72U);
    t33 = *((char **)t32);
    t40 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t31, t33, 2, t40, 32, 1);
    t41 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t42 = (t29 + 4);
    t43 = (t41 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t41);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t45 = (t36 | t39);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t43);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB120;

LAB117:    if (t48 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t30) = 1;

LAB120:    t51 = (t30 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB121;

LAB122:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 8);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 8);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng13)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB123:    goto LAB115;

LAB119:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(88, ng0);
    t52 = (t0 + 1208U);
    t60 = *((char **)t52);
    memset(t59, 0, 8);
    t52 = (t59 + 4);
    t61 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 8);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 8);
    *((unsigned int *)t52) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 255U);
    t68 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t68 & 255U);
    t62 = ((char*)((ng1)));
    xsi_vlogtype_concat(t58, 32, 32, 2U, t62, 24, t59, 8);
    t69 = (t0 + 1768);
    xsi_vlogvar_assign_value(t69, t58, 0, 0, 32);
    goto LAB123;

LAB126:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB127;

LAB128:    xsi_set_current_line(93, ng0);

LAB131:    xsi_set_current_line(94, ng0);
    t23 = (t0 + 1208U);
    t31 = *((char **)t23);
    t23 = (t0 + 1168U);
    t32 = (t23 + 72U);
    t33 = *((char **)t32);
    t40 = ((char*)((ng14)));
    xsi_vlog_generic_get_index_select_value(t29, 32, t31, t33, 2, t40, 32, 1);
    t41 = ((char*)((ng3)));
    memset(t30, 0, 8);
    t42 = (t29 + 4);
    t43 = (t41 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t41);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t45 = (t36 | t39);
    t46 = *((unsigned int *)t42);
    t47 = *((unsigned int *)t43);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB135;

LAB132:    if (t48 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t30) = 1;

LAB135:    t51 = (t30 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t30);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t29, 0, 8);
    t2 = (t29 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 16);
    *((unsigned int *)t29) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 16);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t7 = ((char*)((ng13)));
    xsi_vlogtype_concat(t9, 32, 32, 2U, t7, 24, t29, 8);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);

LAB138:    goto LAB130;

LAB134:    t44 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB135;

LAB136:    xsi_set_current_line(95, ng0);
    t52 = (t0 + 1208U);
    t60 = *((char **)t52);
    memset(t59, 0, 8);
    t52 = (t59 + 4);
    t61 = (t60 + 4);
    t63 = *((unsigned int *)t60);
    t64 = (t63 >> 16);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 16);
    *((unsigned int *)t52) = t66;
    t67 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t67 & 255U);
    t68 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t68 & 255U);
    t62 = ((char*)((ng1)));
    xsi_vlogtype_concat(t58, 32, 32, 2U, t62, 24, t59, 8);
    t69 = (t0 + 1768);
    xsi_vlogvar_assign_value(t69, t58, 0, 0, 32);
    goto LAB138;

LAB142:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB143;

LAB144:    xsi_set_current_line(102, ng0);
    t40 = (t0 + 1208U);
    t41 = *((char **)t40);
    memset(t58, 0, 8);
    t40 = (t58 + 4);
    t42 = (t41 + 4);
    t34 = *((unsigned int *)t41);
    t35 = (t34 >> 24);
    *((unsigned int *)t58) = t35;
    t36 = *((unsigned int *)t42);
    t37 = (t36 >> 24);
    *((unsigned int *)t40) = t37;
    t38 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t38 & 255U);
    t39 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t39 & 255U);
    t43 = ((char*)((ng1)));
    xsi_vlogtype_concat(t30, 32, 32, 2U, t43, 24, t58, 8);
    t44 = (t0 + 1768);
    xsi_vlogvar_assign_value(t44, t30, 0, 0, 32);
    goto LAB146;

}


extern void work_m_00000000004268501591_1211838596_init()
{
	static char *pe[] = {(void *)Always_28_0};
	xsi_register_didat("work_m_00000000004268501591_1211838596", "isim/P6_test_isim_beh.exe.sim/work/m_00000000004268501591_1211838596.didat");
	xsi_register_executes(pe);
}
