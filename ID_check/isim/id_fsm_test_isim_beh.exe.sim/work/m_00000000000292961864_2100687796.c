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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/ID_check/id_fsm.v";
static int ng1[] = {0, 0};
static int ng2[] = {97, 0};
static int ng3[] = {122, 0};
static int ng4[] = {65, 0};
static int ng5[] = {90, 0};
static int ng6[] = {1, 0};
static int ng7[] = {48, 0};
static int ng8[] = {57, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Cont_36_1(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 3824);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_38_2(char *t0)
{
    char t6[8];
    char t10[8];
    char t26[8];
    char t30[8];
    char t38[8];
    char t70[8];
    char t87[8];
    char t91[8];
    char t107[8];
    char t111[8];
    char t119[8];
    char t151[8];
    char t159[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 3840);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t11) != 0)
        goto LAB13;

LAB14:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB15;

LAB16:    memcpy(t38, t10, 8);

LAB17:    memset(t70, 0, 8);
    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t71) != 0)
        goto LAB32;

LAB33:    t78 = (t70 + 4);
    t79 = *((unsigned int *)t70);
    t80 = (!(t79));
    t81 = *((unsigned int *)t78);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB34;

LAB35:    memcpy(t159, t70, 8);

LAB36:    t187 = (t159 + 4);
    t188 = *((unsigned int *)t187);
    t189 = (~(t188));
    t190 = *((unsigned int *)t159);
    t191 = (t190 & t189);
    t192 = (t191 != 0);
    if (t192 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB73;

LAB72:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB73;

LAB76:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB75;

LAB74:    *((unsigned int *)t6) = 1;

LAB75:    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t6);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t11) != 0)
        goto LAB79;

LAB80:    t18 = (t10 + 4);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB81;

LAB82:    memcpy(t38, t10, 8);

LAB83:    t71 = (t38 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t38);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(52, ng0);

LAB126:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB98:
LAB70:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t10) = 1;
    goto LAB14;

LAB13:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB15:    t22 = (t0 + 1768);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng3)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB19;

LAB18:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB21;

LAB20:    *((unsigned int *)t26) = 1;

LAB21:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t31) != 0)
        goto LAB25;

LAB26:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t30) = 1;
    goto LAB26;

LAB25:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB27:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB29;

LAB30:    *((unsigned int *)t70) = 1;
    goto LAB33;

LAB32:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB33;

LAB34:    t83 = (t0 + 1768);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = ((char*)((ng4)));
    memset(t87, 0, 8);
    t88 = (t85 + 4);
    if (*((unsigned int *)t88) != 0)
        goto LAB38;

LAB37:    t89 = (t86 + 4);
    if (*((unsigned int *)t89) != 0)
        goto LAB38;

LAB41:    if (*((unsigned int *)t85) < *((unsigned int *)t86))
        goto LAB40;

LAB39:    *((unsigned int *)t87) = 1;

LAB40:    memset(t91, 0, 8);
    t92 = (t87 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t87);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t92) != 0)
        goto LAB44;

LAB45:    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB46;

LAB47:    memcpy(t119, t91, 8);

LAB48:    memset(t151, 0, 8);
    t152 = (t119 + 4);
    t153 = *((unsigned int *)t152);
    t154 = (~(t153));
    t155 = *((unsigned int *)t119);
    t156 = (t155 & t154);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t152) != 0)
        goto LAB63;

LAB64:    t160 = *((unsigned int *)t70);
    t161 = *((unsigned int *)t151);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = (t70 + 4);
    t164 = (t151 + 4);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t163);
    t167 = *((unsigned int *)t164);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t169 = *((unsigned int *)t165);
    t170 = (t169 != 0);
    if (t170 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB36;

LAB38:    t90 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB40;

LAB42:    *((unsigned int *)t91) = 1;
    goto LAB45;

LAB44:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB45;

LAB46:    t103 = (t0 + 1768);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = ((char*)((ng5)));
    memset(t107, 0, 8);
    t108 = (t105 + 4);
    if (*((unsigned int *)t108) != 0)
        goto LAB50;

LAB49:    t109 = (t106 + 4);
    if (*((unsigned int *)t109) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t105) > *((unsigned int *)t106))
        goto LAB52;

LAB51:    *((unsigned int *)t107) = 1;

LAB52:    memset(t111, 0, 8);
    t112 = (t107 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t107);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t112) != 0)
        goto LAB56;

LAB57:    t120 = *((unsigned int *)t91);
    t121 = *((unsigned int *)t111);
    t122 = (t120 & t121);
    *((unsigned int *)t119) = t122;
    t123 = (t91 + 4);
    t124 = (t111 + 4);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t123);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB48;

LAB50:    t110 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB52;

LAB54:    *((unsigned int *)t111) = 1;
    goto LAB57;

LAB56:    t118 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB57;

LAB58:    t131 = *((unsigned int *)t119);
    t132 = *((unsigned int *)t125);
    *((unsigned int *)t119) = (t131 | t132);
    t133 = (t91 + 4);
    t134 = (t111 + 4);
    t135 = *((unsigned int *)t91);
    t136 = (~(t135));
    t137 = *((unsigned int *)t133);
    t138 = (~(t137));
    t139 = *((unsigned int *)t111);
    t140 = (~(t139));
    t141 = *((unsigned int *)t134);
    t142 = (~(t141));
    t143 = (t136 & t138);
    t144 = (t140 & t142);
    t145 = (~(t143));
    t146 = (~(t144));
    t147 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t147 & t145);
    t148 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t148 & t146);
    t149 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t149 & t145);
    t150 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t150 & t146);
    goto LAB60;

LAB61:    *((unsigned int *)t151) = 1;
    goto LAB64;

LAB63:    t158 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB64;

LAB65:    t171 = *((unsigned int *)t159);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t159) = (t171 | t172);
    t173 = (t70 + 4);
    t174 = (t151 + 4);
    t175 = *((unsigned int *)t173);
    t176 = (~(t175));
    t177 = *((unsigned int *)t70);
    t178 = (t177 & t176);
    t179 = *((unsigned int *)t174);
    t180 = (~(t179));
    t181 = *((unsigned int *)t151);
    t182 = (t181 & t180);
    t183 = (~(t178));
    t184 = (~(t182));
    t185 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t185 & t183);
    t186 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t186 & t184);
    goto LAB67;

LAB68:    xsi_set_current_line(40, ng0);

LAB71:    xsi_set_current_line(41, ng0);
    t193 = ((char*)((ng6)));
    t194 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t194, t193, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB70;

LAB73:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB75;

LAB77:    *((unsigned int *)t10) = 1;
    goto LAB80;

LAB79:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB80;

LAB81:    t22 = (t0 + 1768);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng8)));
    memset(t26, 0, 8);
    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB85;

LAB84:    t28 = (t25 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB85;

LAB88:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB87;

LAB86:    *((unsigned int *)t26) = 1;

LAB87:    memset(t30, 0, 8);
    t31 = (t26 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t26);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t31) != 0)
        goto LAB91;

LAB92:    t39 = *((unsigned int *)t10);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t10 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB83;

LAB85:    t29 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB87;

LAB89:    *((unsigned int *)t30) = 1;
    goto LAB92;

LAB91:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB92;

LAB93:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t10 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t10);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB95;

LAB96:    xsi_set_current_line(45, ng0);

LAB99:    xsi_set_current_line(46, ng0);
    t77 = (t0 + 1928);
    t78 = (t77 + 56U);
    t83 = *((char **)t78);
    t84 = ((char*)((ng6)));
    memset(t70, 0, 8);
    t85 = (t83 + 4);
    t86 = (t84 + 4);
    t79 = *((unsigned int *)t83);
    t80 = *((unsigned int *)t84);
    t81 = (t79 ^ t80);
    t82 = *((unsigned int *)t85);
    t93 = *((unsigned int *)t86);
    t94 = (t82 ^ t93);
    t95 = (t81 | t94);
    t96 = *((unsigned int *)t85);
    t97 = *((unsigned int *)t86);
    t100 = (t96 | t97);
    t101 = (~(t100));
    t102 = (t95 & t101);
    if (t102 != 0)
        goto LAB103;

LAB100:    if (t100 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t70) = 1;

LAB103:    memset(t87, 0, 8);
    t89 = (t70 + 4);
    t113 = *((unsigned int *)t89);
    t114 = (~(t113));
    t115 = *((unsigned int *)t70);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t89) != 0)
        goto LAB106;

LAB107:    t92 = (t87 + 4);
    t120 = *((unsigned int *)t87);
    t121 = (!(t120));
    t122 = *((unsigned int *)t92);
    t126 = (t121 || t122);
    if (t126 > 0)
        goto LAB108;

LAB109:    memcpy(t111, t87, 8);

LAB110:    t133 = (t111 + 4);
    t177 = *((unsigned int *)t133);
    t179 = (~(t177));
    t180 = *((unsigned int *)t111);
    t181 = (t180 & t179);
    t183 = (t181 != 0);
    if (t183 > 0)
        goto LAB122;

LAB123:
LAB124:    goto LAB98;

LAB102:    t88 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t87) = 1;
    goto LAB107;

LAB106:    t90 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB107;

LAB108:    t98 = (t0 + 2088);
    t99 = (t98 + 56U);
    t103 = *((char **)t99);
    t104 = ((char*)((ng6)));
    memset(t91, 0, 8);
    t105 = (t103 + 4);
    t106 = (t104 + 4);
    t127 = *((unsigned int *)t103);
    t128 = *((unsigned int *)t104);
    t129 = (t127 ^ t128);
    t130 = *((unsigned int *)t105);
    t131 = *((unsigned int *)t106);
    t132 = (t130 ^ t131);
    t135 = (t129 | t132);
    t136 = *((unsigned int *)t105);
    t137 = *((unsigned int *)t106);
    t138 = (t136 | t137);
    t139 = (~(t138));
    t140 = (t135 & t139);
    if (t140 != 0)
        goto LAB114;

LAB111:    if (t138 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t91) = 1;

LAB114:    memset(t107, 0, 8);
    t109 = (t91 + 4);
    t141 = *((unsigned int *)t109);
    t142 = (~(t141));
    t145 = *((unsigned int *)t91);
    t146 = (t145 & t142);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t109) != 0)
        goto LAB117;

LAB118:    t148 = *((unsigned int *)t87);
    t149 = *((unsigned int *)t107);
    t150 = (t148 | t149);
    *((unsigned int *)t111) = t150;
    t112 = (t87 + 4);
    t118 = (t107 + 4);
    t123 = (t111 + 4);
    t153 = *((unsigned int *)t112);
    t154 = *((unsigned int *)t118);
    t155 = (t153 | t154);
    *((unsigned int *)t123) = t155;
    t156 = *((unsigned int *)t123);
    t157 = (t156 != 0);
    if (t157 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB113:    t108 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t108) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t107) = 1;
    goto LAB118;

LAB117:    t110 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t110) = 1;
    goto LAB118;

LAB119:    t160 = *((unsigned int *)t111);
    t161 = *((unsigned int *)t123);
    *((unsigned int *)t111) = (t160 | t161);
    t124 = (t87 + 4);
    t125 = (t107 + 4);
    t162 = *((unsigned int *)t124);
    t166 = (~(t162));
    t167 = *((unsigned int *)t87);
    t143 = (t167 & t166);
    t168 = *((unsigned int *)t125);
    t169 = (~(t168));
    t170 = *((unsigned int *)t107);
    t144 = (t170 & t169);
    t171 = (~(t143));
    t172 = (~(t144));
    t175 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t175 & t171);
    t176 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t176 & t172);
    goto LAB121;

LAB122:    xsi_set_current_line(46, ng0);

LAB125:    xsi_set_current_line(47, ng0);
    t134 = ((char*)((ng1)));
    t152 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t152, t134, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB124;

}


extern void work_m_00000000000292961864_2100687796_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Cont_36_1,(void *)Always_38_2};
	xsi_register_didat("work_m_00000000000292961864_2100687796", "isim/id_fsm_test_isim_beh.exe.sim/work/m_00000000000292961864_2100687796.didat");
	xsi_register_executes(pe);
}
