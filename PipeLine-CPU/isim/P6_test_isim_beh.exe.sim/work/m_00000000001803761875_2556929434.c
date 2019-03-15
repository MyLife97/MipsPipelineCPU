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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/P6/mod_dm.v";
static int ng1[] = {0, 0};
static int ng2[] = {4096, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {15U, 0U};
static const char *ng5 = "%d@%h: *%h <= %h";
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {15, 0};
static unsigned int ng9[] = {12U, 0U};
static int ng10[] = {31, 0};
static int ng11[] = {16, 0};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {2U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {4U, 0U};
static int ng17[] = {23, 0};
static unsigned int ng18[] = {8U, 0U};
static int ng19[] = {24, 0};



static void Initial_43_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(43, ng0);

LAB2:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(45, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2728);
    t16 = (t0 + 2728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2728);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2888);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2888);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_49_1(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t62[8];
    char t65[8];
    char t81[16];
    char t82[8];
    char t83[8];
    char t84[8];
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
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t63;
    char *t64;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t85;
    char *t86;
    char *t87;
    int t88;
    int t89;
    char *t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(56, ng0);

LAB20:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
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

LAB10:    xsi_set_current_line(50, ng0);

LAB13:    xsi_set_current_line(51, ng0);
    xsi_set_current_line(51, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2888);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 32);

LAB14:    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
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

LAB15:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t8 = ((char*)((ng1)));
    t21 = (t0 + 2728);
    t22 = (t0 + 2728);
    t28 = (t22 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 2728);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = (t0 + 2888);
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

LAB19:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2888);
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

LAB25:    xsi_set_current_line(58, ng0);

LAB28:    xsi_set_current_line(60, ng0);
    t21 = (t0 + 2008U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t30, 0, 8);
    t28 = (t22 + 4);
    t29 = (t21 + 4);
    t45 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t21);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t29);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB32;

LAB29:    if (t54 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t30) = 1;

LAB32:    t33 = (t30 + 4);
    t57 = *((unsigned int *)t33);
    t58 = (~(t57));
    t59 = *((unsigned int *)t30);
    t60 = (t59 & t58);
    t61 = (t60 != 0);
    if (t61 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
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
        goto LAB42;

LAB39:    if (t18 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t6) = 1;

LAB42:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
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
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t6) = 1;

LAB52:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
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
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng14)));
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
        goto LAB72;

LAB69:    if (t18 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t6) = 1;

LAB72:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng16)));
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
        goto LAB82;

LAB79:    if (t18 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t6) = 1;

LAB82:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng18)));
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
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t6) = 1;

LAB92:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB85:
LAB75:
LAB65:
LAB55:
LAB45:
LAB35:    goto LAB27;

LAB31:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    t34 = (t0 + 1528U);
    t35 = *((char **)t34);
    t34 = (t0 + 2728);
    t36 = (t0 + 2728);
    t37 = (t36 + 72U);
    t38 = *((char **)t37);
    t40 = (t0 + 2728);
    t63 = (t40 + 64U);
    t64 = *((char **)t63);
    t66 = (t0 + 1368U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 2);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 2);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 4095U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t38, t64, 2, 1, t65, 12, 2);
    t75 = (t31 + 4);
    t76 = *((unsigned int *)t75);
    t39 = (!(t76));
    t77 = (t62 + 4);
    t78 = *((unsigned int *)t77);
    t41 = (!(t78));
    t42 = (t39 && t41);
    if (t42 == 1)
        goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB35;

LAB37:    t79 = *((unsigned int *)t31);
    t80 = *((unsigned int *)t62);
    t43 = (t79 - t80);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t34, t35, 0, *((unsigned int *)t62), t44);
    goto LAB38;

LAB41:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(65, ng0);

LAB46:    xsi_set_current_line(66, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 65535U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 65535U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng8)));
    t75 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(67, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB45;

LAB47:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB48;

LAB51:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(70, ng0);

LAB56:    xsi_set_current_line(71, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 65535U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 65535U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng10)));
    t75 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(72, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB55;

LAB57:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB58;

LAB61:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(75, ng0);

LAB66:    xsi_set_current_line(76, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 255U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 255U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng13)));
    t75 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(77, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB65;

LAB67:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB68;

LAB71:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(80, ng0);

LAB76:    xsi_set_current_line(81, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 255U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 255U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng8)));
    t75 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(82, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB75;

LAB77:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB78;

LAB81:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(85, ng0);

LAB86:    xsi_set_current_line(86, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 255U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 255U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng17)));
    t75 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(87, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB85;

LAB87:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB88;

LAB91:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(90, ng0);

LAB96:    xsi_set_current_line(91, ng0);
    t21 = (t0 + 1528U);
    t22 = *((char **)t21);
    memset(t30, 0, 8);
    t21 = (t30 + 4);
    t28 = (t22 + 4);
    t45 = *((unsigned int *)t22);
    t46 = (t45 >> 0);
    *((unsigned int *)t30) = t46;
    t47 = *((unsigned int *)t28);
    t48 = (t47 >> 0);
    *((unsigned int *)t21) = t48;
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & 255U);
    t50 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t50 & 255U);
    t29 = (t0 + 2728);
    t32 = (t0 + 2728);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2728);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1368U);
    t40 = *((char **)t38);
    memset(t65, 0, 8);
    t38 = (t65 + 4);
    t63 = (t40 + 4);
    t51 = *((unsigned int *)t40);
    t52 = (t51 >> 2);
    *((unsigned int *)t65) = t52;
    t53 = *((unsigned int *)t63);
    t54 = (t53 >> 2);
    *((unsigned int *)t38) = t54;
    t55 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t55 & 4095U);
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & 4095U);
    xsi_vlog_generic_convert_array_indices(t31, t62, t34, t37, 2, 1, t65, 12, 2);
    t64 = (t0 + 2728);
    t66 = (t64 + 72U);
    t67 = *((char **)t66);
    t68 = ((char*)((ng10)));
    t75 = ((char*)((ng19)));
    xsi_vlog_convert_partindices(t82, t83, t84, ((int*)(t67)), 2, t68, 32, 1, t75, 32, 1);
    t77 = (t31 + 4);
    t57 = *((unsigned int *)t77);
    t39 = (!(t57));
    t85 = (t62 + 4);
    t58 = *((unsigned int *)t85);
    t41 = (!(t58));
    t42 = (t39 && t41);
    t86 = (t82 + 4);
    t59 = *((unsigned int *)t86);
    t43 = (!(t59));
    t44 = (t42 && t43);
    t87 = (t83 + 4);
    t60 = *((unsigned int *)t87);
    t88 = (!(t60));
    t89 = (t44 && t88);
    t90 = (t84 + 4);
    t61 = *((unsigned int *)t90);
    t91 = (!(t61));
    t92 = (t89 && t91);
    if (t92 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(92, ng0);
    t2 = xsi_vlog_time(t81, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 2);
    *((unsigned int *)t30) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 2);
    *((unsigned int *)t5) = t12;
    t13 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t13 & 1073741823U);
    t14 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t14 & 1073741823U);
    xsi_vlogtype_concat(t6, 32, 32, 2U, t30, 30, t3, 2);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = (t0 + 2728);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = (t0 + 2728);
    t35 = (t34 + 64U);
    t36 = *((char **)t35);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    memset(t62, 0, 8);
    t37 = (t62 + 4);
    t40 = (t38 + 4);
    t15 = *((unsigned int *)t38);
    t16 = (t15 >> 2);
    *((unsigned int *)t62) = t16;
    t17 = *((unsigned int *)t40);
    t18 = (t17 >> 2);
    *((unsigned int *)t37) = t18;
    t19 = *((unsigned int *)t62);
    *((unsigned int *)t62) = (t19 & 4095U);
    t20 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t20 & 4095U);
    xsi_vlog_generic_get_array_select_value(t31, 32, t28, t33, t36, 2, 1, t62, 12, 2);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t81, 64, (char)118, t4, 32, (char)118, t6, 32, (char)118, t31, 32);
    goto LAB95;

LAB97:    t69 = *((unsigned int *)t84);
    t93 = (t69 + 0);
    t70 = *((unsigned int *)t62);
    t71 = *((unsigned int *)t83);
    t94 = (t70 + t71);
    t72 = *((unsigned int *)t82);
    t73 = *((unsigned int *)t83);
    t95 = (t72 - t73);
    t96 = (t95 + 1);
    xsi_vlogvar_assign_value(t29, t30, t93, t94, t96);
    goto LAB98;

}

static void Always_102_2(char *t0)
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

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);

LAB5:    xsi_set_current_line(103, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2728);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2728);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 1368U);
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
    *((unsigned int *)t14) = (t22 & 4095U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 4095U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 12, 2);
    t24 = (t0 + 2568);
    xsi_vlogvar_assign_value(t24, t7, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000001803761875_2556929434_init()
{
	static char *pe[] = {(void *)Initial_43_0,(void *)Always_49_1,(void *)Always_102_2};
	xsi_register_didat("work_m_00000000001803761875_2556929434", "isim/P6_test_isim_beh.exe.sim/work/m_00000000001803761875_2556929434.didat");
	xsi_register_executes(pe);
}
