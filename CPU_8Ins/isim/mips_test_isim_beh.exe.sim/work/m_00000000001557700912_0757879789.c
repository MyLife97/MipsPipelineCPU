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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/CPU_8Ins/NPC.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};



static void Cont_41_0(char *t0)
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

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5016);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_43_1(char *t0)
{
    char t4[8];
    char t8[8];
    char t18[8];
    char t51[8];
    char t59[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 5032);
    *((int *)t2) = 1;
    t3 = (t0 + 4728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = (t0 + 1208U);
    t9 = *((char **)t6);
    memset(t8, 0, 8);
    t6 = (t8 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 28);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 28);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 15U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t8, 4, t7, 26, t5, 2);
    t17 = (t0 + 3048);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t8, 0, 8);
    t3 = (t8 + 4);
    t6 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t8) = t12;
    t13 = *((unsigned int *)t6);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 1073741823U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 1073741823U);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t8, 30, t2, 2);
    t7 = (t0 + 3528);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 32, t10, 32);
    t17 = (t0 + 3208);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 32);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t4) = 1;

LAB9:    t9 = (t4 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB17;

LAB14:    if (t22 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t9) != 0)
        goto LAB20;

LAB21:    t17 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t33 = (!(t32));
    t34 = *((unsigned int *)t17);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB22;

LAB23:    memcpy(t59, t8, 8);

LAB24:    t87 = (t59 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t59);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 ^ t15);
    t19 = (t13 | t16);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB43;

LAB40:    if (t22 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t4) = 1;

LAB43:    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t9) != 0)
        goto LAB46;

LAB47:    t17 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t33 = *((unsigned int *)t17);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB48;

LAB49:    memcpy(t59, t8, 8);

LAB50:    t87 = (t59 + 4);
    t91 = *((unsigned int *)t87);
    t92 = (~(t91));
    t97 = *((unsigned int *)t59);
    t98 = (t97 & t92);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(61, ng0);

LAB66:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB64:
LAB38:
LAB12:    goto LAB2;

LAB8:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);

LAB13:    xsi_set_current_line(50, ng0);
    t10 = (t0 + 3368);
    t17 = (t10 + 56U);
    t30 = *((char **)t17);
    t31 = (t0 + 2888);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 32);
    goto LAB12;

LAB16:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB20:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB21;

LAB22:    t30 = (t0 + 2168U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t36 = (t31 + 4);
    t37 = (t30 + 4);
    t38 = *((unsigned int *)t31);
    t39 = *((unsigned int *)t30);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB28;

LAB25:    if (t47 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t18) = 1;

LAB28:    memset(t51, 0, 8);
    t52 = (t18 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t18);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t52) != 0)
        goto LAB31;

LAB32:    t60 = *((unsigned int *)t8);
    t61 = *((unsigned int *)t51);
    t62 = (t60 | t61);
    *((unsigned int *)t59) = t62;
    t63 = (t8 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t66 = *((unsigned int *)t63);
    t67 = *((unsigned int *)t64);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t50 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t51) = 1;
    goto LAB32;

LAB31:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB32;

LAB33:    t71 = *((unsigned int *)t59);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t71 | t72);
    t73 = (t8 + 4);
    t74 = (t51 + 4);
    t75 = *((unsigned int *)t73);
    t76 = (~(t75));
    t77 = *((unsigned int *)t8);
    t78 = (t77 & t76);
    t79 = *((unsigned int *)t74);
    t80 = (~(t79));
    t81 = *((unsigned int *)t51);
    t82 = (t81 & t80);
    t83 = (~(t78));
    t84 = (~(t82));
    t85 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t85 & t83);
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    goto LAB35;

LAB36:    xsi_set_current_line(53, ng0);

LAB39:    xsi_set_current_line(54, ng0);
    t93 = (t0 + 3048);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t96 = (t0 + 2888);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 32);
    goto LAB38;

LAB42:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB43;

LAB44:    *((unsigned int *)t8) = 1;
    goto LAB47;

LAB46:    t10 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB48:    t30 = (t0 + 1688U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng3)));
    memset(t18, 0, 8);
    t36 = (t31 + 4);
    t37 = (t30 + 4);
    t35 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t30);
    t39 = (t35 ^ t38);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t37);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t37);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB54;

LAB51:    if (t46 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t18) = 1;

LAB54:    memset(t51, 0, 8);
    t52 = (t18 + 4);
    t49 = *((unsigned int *)t52);
    t53 = (~(t49));
    t54 = *((unsigned int *)t18);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t52) != 0)
        goto LAB57;

LAB58:    t57 = *((unsigned int *)t8);
    t60 = *((unsigned int *)t51);
    t61 = (t57 & t60);
    *((unsigned int *)t59) = t61;
    t63 = (t8 + 4);
    t64 = (t51 + 4);
    t65 = (t59 + 4);
    t62 = *((unsigned int *)t63);
    t66 = *((unsigned int *)t64);
    t67 = (t62 | t66);
    *((unsigned int *)t65) = t67;
    t68 = *((unsigned int *)t65);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t50 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t51) = 1;
    goto LAB58;

LAB57:    t58 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB58;

LAB59:    t70 = *((unsigned int *)t59);
    t71 = *((unsigned int *)t65);
    *((unsigned int *)t59) = (t70 | t71);
    t73 = (t8 + 4);
    t74 = (t51 + 4);
    t72 = *((unsigned int *)t8);
    t75 = (~(t72));
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t79 = *((unsigned int *)t51);
    t80 = (~(t79));
    t81 = *((unsigned int *)t74);
    t83 = (~(t81));
    t78 = (t75 & t77);
    t82 = (t80 & t83);
    t84 = (~(t78));
    t85 = (~(t82));
    t86 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t86 & t84);
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t85);
    t89 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t89 & t84);
    t90 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t90 & t85);
    goto LAB61;

LAB62:    xsi_set_current_line(57, ng0);

LAB65:    xsi_set_current_line(58, ng0);
    t93 = (t0 + 3208);
    t94 = (t93 + 56U);
    t95 = *((char **)t94);
    t96 = (t0 + 2888);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 32);
    goto LAB64;

}


extern void work_m_00000000001557700912_0757879789_init()
{
	static char *pe[] = {(void *)Cont_41_0,(void *)Always_43_1};
	xsi_register_didat("work_m_00000000001557700912_0757879789", "isim/mips_test_isim_beh.exe.sim/work/m_00000000001557700912_0757879789.didat");
	xsi_register_executes(pe);
}
