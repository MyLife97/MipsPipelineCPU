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
static const char *ng0 = "C:/Users/yang/Desktop/ForJiZu/P6/mod_npc.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {8, 0};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static int ng5[] = {0, 0};



static void Cont_51_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 67108863U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 67108863U);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 28);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 28);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 15U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 15U);
    xsi_vlogtype_concat(t3, 32, 32, 3U, t14, 4, t4, 26, t2, 2);
    t24 = (t0 + 6920);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t3, 8);
    xsi_driver_vfirst_trans(t24, 0, 31);
    t29 = (t0 + 6792);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Cont_52_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 5976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 6984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 6808);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_53_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t6 = ((char*)((ng1)));
    t8 = (t0 + 1368U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t6, 2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 32, t5, 32);
    t18 = (t0 + 7048);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t23 = (t0 + 6824);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Always_56_3(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char t56[8];
    char t71[8];
    char t84[8];
    char t91[8];
    char t123[8];
    char t131[8];
    char t159[8];
    char t174[8];
    char t187[8];
    char t194[8];
    char t226[8];
    char t234[8];
    char t262[8];
    char t277[8];
    char t290[8];
    char t297[8];
    char t329[8];
    char t337[8];
    char t365[8];
    char t380[8];
    char t393[8];
    char t400[8];
    char t432[8];
    char t440[8];
    char t468[8];
    char t483[8];
    char t496[8];
    char t503[8];
    char t535[8];
    char t543[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
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
    char *t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    char *t199;
    char *t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    int t218;
    int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    char *t269;
    char *t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    char *t276;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    char *t283;
    char *t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    char *t288;
    char *t289;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    char *t302;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t311;
    char *t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    int t321;
    int t322;
    unsigned int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    char *t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    char *t336;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    char *t341;
    char *t342;
    char *t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    char *t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    int t356;
    unsigned int t357;
    unsigned int t358;
    unsigned int t359;
    int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    char *t372;
    char *t373;
    unsigned int t374;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    char *t378;
    char *t379;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    char *t386;
    char *t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    char *t392;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    char *t399;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    char *t404;
    char *t405;
    char *t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    unsigned int t413;
    char *t414;
    char *t415;
    unsigned int t416;
    unsigned int t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    int t424;
    int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    unsigned int t431;
    char *t433;
    unsigned int t434;
    unsigned int t435;
    unsigned int t436;
    unsigned int t437;
    unsigned int t438;
    char *t439;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    char *t444;
    char *t445;
    char *t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    unsigned int t452;
    unsigned int t453;
    char *t454;
    char *t455;
    unsigned int t456;
    unsigned int t457;
    unsigned int t458;
    int t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    int t463;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    unsigned int t467;
    char *t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    char *t475;
    char *t476;
    unsigned int t477;
    unsigned int t478;
    unsigned int t479;
    unsigned int t480;
    char *t481;
    char *t482;
    unsigned int t484;
    unsigned int t485;
    unsigned int t486;
    unsigned int t487;
    unsigned int t488;
    char *t489;
    char *t490;
    unsigned int t491;
    unsigned int t492;
    unsigned int t493;
    char *t494;
    char *t495;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    char *t502;
    unsigned int t504;
    unsigned int t505;
    unsigned int t506;
    char *t507;
    char *t508;
    char *t509;
    unsigned int t510;
    unsigned int t511;
    unsigned int t512;
    unsigned int t513;
    unsigned int t514;
    unsigned int t515;
    unsigned int t516;
    char *t517;
    char *t518;
    unsigned int t519;
    unsigned int t520;
    unsigned int t521;
    unsigned int t522;
    unsigned int t523;
    unsigned int t524;
    unsigned int t525;
    unsigned int t526;
    int t527;
    int t528;
    unsigned int t529;
    unsigned int t530;
    unsigned int t531;
    unsigned int t532;
    unsigned int t533;
    unsigned int t534;
    char *t536;
    unsigned int t537;
    unsigned int t538;
    unsigned int t539;
    unsigned int t540;
    unsigned int t541;
    char *t542;
    unsigned int t544;
    unsigned int t545;
    unsigned int t546;
    char *t547;
    char *t548;
    char *t549;
    unsigned int t550;
    unsigned int t551;
    unsigned int t552;
    unsigned int t553;
    unsigned int t554;
    unsigned int t555;
    unsigned int t556;
    char *t557;
    char *t558;
    unsigned int t559;
    unsigned int t560;
    unsigned int t561;
    int t562;
    unsigned int t563;
    unsigned int t564;
    unsigned int t565;
    int t566;
    unsigned int t567;
    unsigned int t568;
    unsigned int t569;
    unsigned int t570;
    char *t571;
    unsigned int t572;
    unsigned int t573;
    unsigned int t574;
    unsigned int t575;
    unsigned int t576;
    char *t577;
    char *t578;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6840);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
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

LAB11:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
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
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t2) != 0)
        goto LAB24;

LAB25:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB26;

LAB27:    memcpy(t31, t6, 8);

LAB28:    memset(t56, 0, 8);
    t57 = (t31 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t31);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t57) != 0)
        goto LAB38;

LAB39:    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = (!(t65));
    t67 = *((unsigned int *)t64);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB40;

LAB41:    memcpy(t131, t56, 8);

LAB42:    memset(t159, 0, 8);
    t160 = (t131 + 4);
    t161 = *((unsigned int *)t160);
    t162 = (~(t161));
    t163 = *((unsigned int *)t131);
    t164 = (t163 & t162);
    t165 = (t164 & 1U);
    if (t165 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t160) != 0)
        goto LAB66;

LAB67:    t167 = (t159 + 4);
    t168 = *((unsigned int *)t159);
    t169 = (!(t168));
    t170 = *((unsigned int *)t167);
    t171 = (t169 || t170);
    if (t171 > 0)
        goto LAB68;

LAB69:    memcpy(t234, t159, 8);

LAB70:    memset(t262, 0, 8);
    t263 = (t234 + 4);
    t264 = *((unsigned int *)t263);
    t265 = (~(t264));
    t266 = *((unsigned int *)t234);
    t267 = (t266 & t265);
    t268 = (t267 & 1U);
    if (t268 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t263) != 0)
        goto LAB94;

LAB95:    t270 = (t262 + 4);
    t271 = *((unsigned int *)t262);
    t272 = (!(t271));
    t273 = *((unsigned int *)t270);
    t274 = (t272 || t273);
    if (t274 > 0)
        goto LAB96;

LAB97:    memcpy(t337, t262, 8);

LAB98:    memset(t365, 0, 8);
    t366 = (t337 + 4);
    t367 = *((unsigned int *)t366);
    t368 = (~(t367));
    t369 = *((unsigned int *)t337);
    t370 = (t369 & t368);
    t371 = (t370 & 1U);
    if (t371 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t366) != 0)
        goto LAB122;

LAB123:    t373 = (t365 + 4);
    t374 = *((unsigned int *)t365);
    t375 = (!(t374));
    t376 = *((unsigned int *)t373);
    t377 = (t375 || t376);
    if (t377 > 0)
        goto LAB124;

LAB125:    memcpy(t440, t365, 8);

LAB126:    memset(t468, 0, 8);
    t469 = (t440 + 4);
    t470 = *((unsigned int *)t469);
    t471 = (~(t470));
    t472 = *((unsigned int *)t440);
    t473 = (t472 & t471);
    t474 = (t473 & 1U);
    if (t474 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t469) != 0)
        goto LAB150;

LAB151:    t476 = (t468 + 4);
    t477 = *((unsigned int *)t468);
    t478 = (!(t477));
    t479 = *((unsigned int *)t476);
    t480 = (t478 || t479);
    if (t480 > 0)
        goto LAB152;

LAB153:    memcpy(t543, t468, 8);

LAB154:    t571 = (t543 + 4);
    t572 = *((unsigned int *)t571);
    t573 = (~(t572));
    t574 = *((unsigned int *)t543);
    t575 = (t574 & t573);
    t576 = (t575 != 0);
    if (t576 > 0)
        goto LAB176;

LAB177:    xsi_set_current_line(74, ng0);

LAB180:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4648);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB178:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(58, ng0);

LAB13:    xsi_set_current_line(59, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4808);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(63, ng0);

LAB21:    xsi_set_current_line(64, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 4808);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB20;

LAB22:    *((unsigned int *)t6) = 1;
    goto LAB25;

LAB24:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB26:    t7 = (t0 + 2168U);
    t8 = *((char **)t7);
    memset(t30, 0, 8);
    t7 = (t8 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t8);
    t20 = (t19 & t18);
    t23 = (t20 & 1U);
    if (t23 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t7) != 0)
        goto LAB31;

LAB32:    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t30);
    t26 = (t24 & t25);
    *((unsigned int *)t31) = t26;
    t22 = (t6 + 4);
    t28 = (t30 + 4);
    t29 = (t31 + 4);
    t27 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t28);
    t33 = (t27 | t32);
    *((unsigned int *)t29) = t33;
    t34 = *((unsigned int *)t29);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB28;

LAB29:    *((unsigned int *)t30) = 1;
    goto LAB32;

LAB31:    t21 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB32;

LAB33:    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t36 | t37);
    t38 = (t6 + 4);
    t39 = (t30 + 4);
    t40 = *((unsigned int *)t6);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t30);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t50);
    t55 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t55 & t51);
    goto LAB35;

LAB36:    *((unsigned int *)t56) = 1;
    goto LAB39;

LAB38:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB39;

LAB40:    t69 = (t0 + 3128U);
    t70 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t70 + 4);
    t72 = *((unsigned int *)t69);
    t73 = (~(t72));
    t74 = *((unsigned int *)t70);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t69) != 0)
        goto LAB45;

LAB46:    t78 = (t71 + 4);
    t79 = *((unsigned int *)t71);
    t80 = *((unsigned int *)t78);
    t81 = (t79 || t80);
    if (t81 > 0)
        goto LAB47;

LAB48:    memcpy(t91, t71, 8);

LAB49:    memset(t123, 0, 8);
    t124 = (t91 + 4);
    t125 = *((unsigned int *)t124);
    t126 = (~(t125));
    t127 = *((unsigned int *)t91);
    t128 = (t127 & t126);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t124) != 0)
        goto LAB59;

LAB60:    t132 = *((unsigned int *)t56);
    t133 = *((unsigned int *)t123);
    t134 = (t132 | t133);
    *((unsigned int *)t131) = t134;
    t135 = (t56 + 4);
    t136 = (t123 + 4);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t135);
    t139 = *((unsigned int *)t136);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t137);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB42;

LAB43:    *((unsigned int *)t71) = 1;
    goto LAB46;

LAB45:    t77 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB46;

LAB47:    t82 = (t0 + 2328U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    t82 = (t83 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (~(t85));
    t87 = *((unsigned int *)t83);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t82) != 0)
        goto LAB52;

LAB53:    t92 = *((unsigned int *)t71);
    t93 = *((unsigned int *)t84);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t71 + 4);
    t96 = (t84 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t84) = 1;
    goto LAB53;

LAB52:    t90 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB53;

LAB54:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t71 + 4);
    t106 = (t84 + 4);
    t107 = *((unsigned int *)t71);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t84);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB56;

LAB57:    *((unsigned int *)t123) = 1;
    goto LAB60;

LAB59:    t130 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB60;

LAB61:    t143 = *((unsigned int *)t131);
    t144 = *((unsigned int *)t137);
    *((unsigned int *)t131) = (t143 | t144);
    t145 = (t56 + 4);
    t146 = (t123 + 4);
    t147 = *((unsigned int *)t145);
    t148 = (~(t147));
    t149 = *((unsigned int *)t56);
    t150 = (t149 & t148);
    t151 = *((unsigned int *)t146);
    t152 = (~(t151));
    t153 = *((unsigned int *)t123);
    t154 = (t153 & t152);
    t155 = (~(t150));
    t156 = (~(t154));
    t157 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t157 & t155);
    t158 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t158 & t156);
    goto LAB63;

LAB64:    *((unsigned int *)t159) = 1;
    goto LAB67;

LAB66:    t166 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t166) = 1;
    goto LAB67;

LAB68:    t172 = (t0 + 3288U);
    t173 = *((char **)t172);
    memset(t174, 0, 8);
    t172 = (t173 + 4);
    t175 = *((unsigned int *)t172);
    t176 = (~(t175));
    t177 = *((unsigned int *)t173);
    t178 = (t177 & t176);
    t179 = (t178 & 1U);
    if (t179 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t172) != 0)
        goto LAB73;

LAB74:    t181 = (t174 + 4);
    t182 = *((unsigned int *)t174);
    t183 = *((unsigned int *)t181);
    t184 = (t182 || t183);
    if (t184 > 0)
        goto LAB75;

LAB76:    memcpy(t194, t174, 8);

LAB77:    memset(t226, 0, 8);
    t227 = (t194 + 4);
    t228 = *((unsigned int *)t227);
    t229 = (~(t228));
    t230 = *((unsigned int *)t194);
    t231 = (t230 & t229);
    t232 = (t231 & 1U);
    if (t232 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t227) != 0)
        goto LAB87;

LAB88:    t235 = *((unsigned int *)t159);
    t236 = *((unsigned int *)t226);
    t237 = (t235 | t236);
    *((unsigned int *)t234) = t237;
    t238 = (t159 + 4);
    t239 = (t226 + 4);
    t240 = (t234 + 4);
    t241 = *((unsigned int *)t238);
    t242 = *((unsigned int *)t239);
    t243 = (t241 | t242);
    *((unsigned int *)t240) = t243;
    t244 = *((unsigned int *)t240);
    t245 = (t244 != 0);
    if (t245 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB70;

LAB71:    *((unsigned int *)t174) = 1;
    goto LAB74;

LAB73:    t180 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t180) = 1;
    goto LAB74;

LAB75:    t185 = (t0 + 2648U);
    t186 = *((char **)t185);
    memset(t187, 0, 8);
    t185 = (t186 + 4);
    t188 = *((unsigned int *)t185);
    t189 = (~(t188));
    t190 = *((unsigned int *)t186);
    t191 = (t190 & t189);
    t192 = (t191 & 1U);
    if (t192 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t185) != 0)
        goto LAB80;

LAB81:    t195 = *((unsigned int *)t174);
    t196 = *((unsigned int *)t187);
    t197 = (t195 & t196);
    *((unsigned int *)t194) = t197;
    t198 = (t174 + 4);
    t199 = (t187 + 4);
    t200 = (t194 + 4);
    t201 = *((unsigned int *)t198);
    t202 = *((unsigned int *)t199);
    t203 = (t201 | t202);
    *((unsigned int *)t200) = t203;
    t204 = *((unsigned int *)t200);
    t205 = (t204 != 0);
    if (t205 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB77;

LAB78:    *((unsigned int *)t187) = 1;
    goto LAB81;

LAB80:    t193 = (t187 + 4);
    *((unsigned int *)t187) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB81;

LAB82:    t206 = *((unsigned int *)t194);
    t207 = *((unsigned int *)t200);
    *((unsigned int *)t194) = (t206 | t207);
    t208 = (t174 + 4);
    t209 = (t187 + 4);
    t210 = *((unsigned int *)t174);
    t211 = (~(t210));
    t212 = *((unsigned int *)t208);
    t213 = (~(t212));
    t214 = *((unsigned int *)t187);
    t215 = (~(t214));
    t216 = *((unsigned int *)t209);
    t217 = (~(t216));
    t218 = (t211 & t213);
    t219 = (t215 & t217);
    t220 = (~(t218));
    t221 = (~(t219));
    t222 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t222 & t220);
    t223 = *((unsigned int *)t200);
    *((unsigned int *)t200) = (t223 & t221);
    t224 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t224 & t220);
    t225 = *((unsigned int *)t194);
    *((unsigned int *)t194) = (t225 & t221);
    goto LAB84;

LAB85:    *((unsigned int *)t226) = 1;
    goto LAB88;

LAB87:    t233 = (t226 + 4);
    *((unsigned int *)t226) = 1;
    *((unsigned int *)t233) = 1;
    goto LAB88;

LAB89:    t246 = *((unsigned int *)t234);
    t247 = *((unsigned int *)t240);
    *((unsigned int *)t234) = (t246 | t247);
    t248 = (t159 + 4);
    t249 = (t226 + 4);
    t250 = *((unsigned int *)t248);
    t251 = (~(t250));
    t252 = *((unsigned int *)t159);
    t253 = (t252 & t251);
    t254 = *((unsigned int *)t249);
    t255 = (~(t254));
    t256 = *((unsigned int *)t226);
    t257 = (t256 & t255);
    t258 = (~(t253));
    t259 = (~(t257));
    t260 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t260 & t258);
    t261 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t261 & t259);
    goto LAB91;

LAB92:    *((unsigned int *)t262) = 1;
    goto LAB95;

LAB94:    t269 = (t262 + 4);
    *((unsigned int *)t262) = 1;
    *((unsigned int *)t269) = 1;
    goto LAB95;

LAB96:    t275 = (t0 + 3448U);
    t276 = *((char **)t275);
    memset(t277, 0, 8);
    t275 = (t276 + 4);
    t278 = *((unsigned int *)t275);
    t279 = (~(t278));
    t280 = *((unsigned int *)t276);
    t281 = (t280 & t279);
    t282 = (t281 & 1U);
    if (t282 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t275) != 0)
        goto LAB101;

LAB102:    t284 = (t277 + 4);
    t285 = *((unsigned int *)t277);
    t286 = *((unsigned int *)t284);
    t287 = (t285 || t286);
    if (t287 > 0)
        goto LAB103;

LAB104:    memcpy(t297, t277, 8);

LAB105:    memset(t329, 0, 8);
    t330 = (t297 + 4);
    t331 = *((unsigned int *)t330);
    t332 = (~(t331));
    t333 = *((unsigned int *)t297);
    t334 = (t333 & t332);
    t335 = (t334 & 1U);
    if (t335 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t330) != 0)
        goto LAB115;

LAB116:    t338 = *((unsigned int *)t262);
    t339 = *((unsigned int *)t329);
    t340 = (t338 | t339);
    *((unsigned int *)t337) = t340;
    t341 = (t262 + 4);
    t342 = (t329 + 4);
    t343 = (t337 + 4);
    t344 = *((unsigned int *)t341);
    t345 = *((unsigned int *)t342);
    t346 = (t344 | t345);
    *((unsigned int *)t343) = t346;
    t347 = *((unsigned int *)t343);
    t348 = (t347 != 0);
    if (t348 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB98;

LAB99:    *((unsigned int *)t277) = 1;
    goto LAB102;

LAB101:    t283 = (t277 + 4);
    *((unsigned int *)t277) = 1;
    *((unsigned int *)t283) = 1;
    goto LAB102;

LAB103:    t288 = (t0 + 2488U);
    t289 = *((char **)t288);
    memset(t290, 0, 8);
    t288 = (t289 + 4);
    t291 = *((unsigned int *)t288);
    t292 = (~(t291));
    t293 = *((unsigned int *)t289);
    t294 = (t293 & t292);
    t295 = (t294 & 1U);
    if (t295 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t288) != 0)
        goto LAB108;

LAB109:    t298 = *((unsigned int *)t277);
    t299 = *((unsigned int *)t290);
    t300 = (t298 & t299);
    *((unsigned int *)t297) = t300;
    t301 = (t277 + 4);
    t302 = (t290 + 4);
    t303 = (t297 + 4);
    t304 = *((unsigned int *)t301);
    t305 = *((unsigned int *)t302);
    t306 = (t304 | t305);
    *((unsigned int *)t303) = t306;
    t307 = *((unsigned int *)t303);
    t308 = (t307 != 0);
    if (t308 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB105;

LAB106:    *((unsigned int *)t290) = 1;
    goto LAB109;

LAB108:    t296 = (t290 + 4);
    *((unsigned int *)t290) = 1;
    *((unsigned int *)t296) = 1;
    goto LAB109;

LAB110:    t309 = *((unsigned int *)t297);
    t310 = *((unsigned int *)t303);
    *((unsigned int *)t297) = (t309 | t310);
    t311 = (t277 + 4);
    t312 = (t290 + 4);
    t313 = *((unsigned int *)t277);
    t314 = (~(t313));
    t315 = *((unsigned int *)t311);
    t316 = (~(t315));
    t317 = *((unsigned int *)t290);
    t318 = (~(t317));
    t319 = *((unsigned int *)t312);
    t320 = (~(t319));
    t321 = (t314 & t316);
    t322 = (t318 & t320);
    t323 = (~(t321));
    t324 = (~(t322));
    t325 = *((unsigned int *)t303);
    *((unsigned int *)t303) = (t325 & t323);
    t326 = *((unsigned int *)t303);
    *((unsigned int *)t303) = (t326 & t324);
    t327 = *((unsigned int *)t297);
    *((unsigned int *)t297) = (t327 & t323);
    t328 = *((unsigned int *)t297);
    *((unsigned int *)t297) = (t328 & t324);
    goto LAB112;

LAB113:    *((unsigned int *)t329) = 1;
    goto LAB116;

LAB115:    t336 = (t329 + 4);
    *((unsigned int *)t329) = 1;
    *((unsigned int *)t336) = 1;
    goto LAB116;

LAB117:    t349 = *((unsigned int *)t337);
    t350 = *((unsigned int *)t343);
    *((unsigned int *)t337) = (t349 | t350);
    t351 = (t262 + 4);
    t352 = (t329 + 4);
    t353 = *((unsigned int *)t351);
    t354 = (~(t353));
    t355 = *((unsigned int *)t262);
    t356 = (t355 & t354);
    t357 = *((unsigned int *)t352);
    t358 = (~(t357));
    t359 = *((unsigned int *)t329);
    t360 = (t359 & t358);
    t361 = (~(t356));
    t362 = (~(t360));
    t363 = *((unsigned int *)t343);
    *((unsigned int *)t343) = (t363 & t361);
    t364 = *((unsigned int *)t343);
    *((unsigned int *)t343) = (t364 & t362);
    goto LAB119;

LAB120:    *((unsigned int *)t365) = 1;
    goto LAB123;

LAB122:    t372 = (t365 + 4);
    *((unsigned int *)t365) = 1;
    *((unsigned int *)t372) = 1;
    goto LAB123;

LAB124:    t378 = (t0 + 3608U);
    t379 = *((char **)t378);
    memset(t380, 0, 8);
    t378 = (t379 + 4);
    t381 = *((unsigned int *)t378);
    t382 = (~(t381));
    t383 = *((unsigned int *)t379);
    t384 = (t383 & t382);
    t385 = (t384 & 1U);
    if (t385 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t378) != 0)
        goto LAB129;

LAB130:    t387 = (t380 + 4);
    t388 = *((unsigned int *)t380);
    t389 = *((unsigned int *)t387);
    t390 = (t388 || t389);
    if (t390 > 0)
        goto LAB131;

LAB132:    memcpy(t400, t380, 8);

LAB133:    memset(t432, 0, 8);
    t433 = (t400 + 4);
    t434 = *((unsigned int *)t433);
    t435 = (~(t434));
    t436 = *((unsigned int *)t400);
    t437 = (t436 & t435);
    t438 = (t437 & 1U);
    if (t438 != 0)
        goto LAB141;

LAB142:    if (*((unsigned int *)t433) != 0)
        goto LAB143;

LAB144:    t441 = *((unsigned int *)t365);
    t442 = *((unsigned int *)t432);
    t443 = (t441 | t442);
    *((unsigned int *)t440) = t443;
    t444 = (t365 + 4);
    t445 = (t432 + 4);
    t446 = (t440 + 4);
    t447 = *((unsigned int *)t444);
    t448 = *((unsigned int *)t445);
    t449 = (t447 | t448);
    *((unsigned int *)t446) = t449;
    t450 = *((unsigned int *)t446);
    t451 = (t450 != 0);
    if (t451 == 1)
        goto LAB145;

LAB146:
LAB147:    goto LAB126;

LAB127:    *((unsigned int *)t380) = 1;
    goto LAB130;

LAB129:    t386 = (t380 + 4);
    *((unsigned int *)t380) = 1;
    *((unsigned int *)t386) = 1;
    goto LAB130;

LAB131:    t391 = (t0 + 2808U);
    t392 = *((char **)t391);
    memset(t393, 0, 8);
    t391 = (t392 + 4);
    t394 = *((unsigned int *)t391);
    t395 = (~(t394));
    t396 = *((unsigned int *)t392);
    t397 = (t396 & t395);
    t398 = (t397 & 1U);
    if (t398 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t391) != 0)
        goto LAB136;

LAB137:    t401 = *((unsigned int *)t380);
    t402 = *((unsigned int *)t393);
    t403 = (t401 & t402);
    *((unsigned int *)t400) = t403;
    t404 = (t380 + 4);
    t405 = (t393 + 4);
    t406 = (t400 + 4);
    t407 = *((unsigned int *)t404);
    t408 = *((unsigned int *)t405);
    t409 = (t407 | t408);
    *((unsigned int *)t406) = t409;
    t410 = *((unsigned int *)t406);
    t411 = (t410 != 0);
    if (t411 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB133;

LAB134:    *((unsigned int *)t393) = 1;
    goto LAB137;

LAB136:    t399 = (t393 + 4);
    *((unsigned int *)t393) = 1;
    *((unsigned int *)t399) = 1;
    goto LAB137;

LAB138:    t412 = *((unsigned int *)t400);
    t413 = *((unsigned int *)t406);
    *((unsigned int *)t400) = (t412 | t413);
    t414 = (t380 + 4);
    t415 = (t393 + 4);
    t416 = *((unsigned int *)t380);
    t417 = (~(t416));
    t418 = *((unsigned int *)t414);
    t419 = (~(t418));
    t420 = *((unsigned int *)t393);
    t421 = (~(t420));
    t422 = *((unsigned int *)t415);
    t423 = (~(t422));
    t424 = (t417 & t419);
    t425 = (t421 & t423);
    t426 = (~(t424));
    t427 = (~(t425));
    t428 = *((unsigned int *)t406);
    *((unsigned int *)t406) = (t428 & t426);
    t429 = *((unsigned int *)t406);
    *((unsigned int *)t406) = (t429 & t427);
    t430 = *((unsigned int *)t400);
    *((unsigned int *)t400) = (t430 & t426);
    t431 = *((unsigned int *)t400);
    *((unsigned int *)t400) = (t431 & t427);
    goto LAB140;

LAB141:    *((unsigned int *)t432) = 1;
    goto LAB144;

LAB143:    t439 = (t432 + 4);
    *((unsigned int *)t432) = 1;
    *((unsigned int *)t439) = 1;
    goto LAB144;

LAB145:    t452 = *((unsigned int *)t440);
    t453 = *((unsigned int *)t446);
    *((unsigned int *)t440) = (t452 | t453);
    t454 = (t365 + 4);
    t455 = (t432 + 4);
    t456 = *((unsigned int *)t454);
    t457 = (~(t456));
    t458 = *((unsigned int *)t365);
    t459 = (t458 & t457);
    t460 = *((unsigned int *)t455);
    t461 = (~(t460));
    t462 = *((unsigned int *)t432);
    t463 = (t462 & t461);
    t464 = (~(t459));
    t465 = (~(t463));
    t466 = *((unsigned int *)t446);
    *((unsigned int *)t446) = (t466 & t464);
    t467 = *((unsigned int *)t446);
    *((unsigned int *)t446) = (t467 & t465);
    goto LAB147;

LAB148:    *((unsigned int *)t468) = 1;
    goto LAB151;

LAB150:    t475 = (t468 + 4);
    *((unsigned int *)t468) = 1;
    *((unsigned int *)t475) = 1;
    goto LAB151;

LAB152:    t481 = (t0 + 3768U);
    t482 = *((char **)t481);
    memset(t483, 0, 8);
    t481 = (t482 + 4);
    t484 = *((unsigned int *)t481);
    t485 = (~(t484));
    t486 = *((unsigned int *)t482);
    t487 = (t486 & t485);
    t488 = (t487 & 1U);
    if (t488 != 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t481) != 0)
        goto LAB157;

LAB158:    t490 = (t483 + 4);
    t491 = *((unsigned int *)t483);
    t492 = *((unsigned int *)t490);
    t493 = (t491 || t492);
    if (t493 > 0)
        goto LAB159;

LAB160:    memcpy(t503, t483, 8);

LAB161:    memset(t535, 0, 8);
    t536 = (t503 + 4);
    t537 = *((unsigned int *)t536);
    t538 = (~(t537));
    t539 = *((unsigned int *)t503);
    t540 = (t539 & t538);
    t541 = (t540 & 1U);
    if (t541 != 0)
        goto LAB169;

LAB170:    if (*((unsigned int *)t536) != 0)
        goto LAB171;

LAB172:    t544 = *((unsigned int *)t468);
    t545 = *((unsigned int *)t535);
    t546 = (t544 | t545);
    *((unsigned int *)t543) = t546;
    t547 = (t468 + 4);
    t548 = (t535 + 4);
    t549 = (t543 + 4);
    t550 = *((unsigned int *)t547);
    t551 = *((unsigned int *)t548);
    t552 = (t550 | t551);
    *((unsigned int *)t549) = t552;
    t553 = *((unsigned int *)t549);
    t554 = (t553 != 0);
    if (t554 == 1)
        goto LAB173;

LAB174:
LAB175:    goto LAB154;

LAB155:    *((unsigned int *)t483) = 1;
    goto LAB158;

LAB157:    t489 = (t483 + 4);
    *((unsigned int *)t483) = 1;
    *((unsigned int *)t489) = 1;
    goto LAB158;

LAB159:    t494 = (t0 + 2968U);
    t495 = *((char **)t494);
    memset(t496, 0, 8);
    t494 = (t495 + 4);
    t497 = *((unsigned int *)t494);
    t498 = (~(t497));
    t499 = *((unsigned int *)t495);
    t500 = (t499 & t498);
    t501 = (t500 & 1U);
    if (t501 != 0)
        goto LAB162;

LAB163:    if (*((unsigned int *)t494) != 0)
        goto LAB164;

LAB165:    t504 = *((unsigned int *)t483);
    t505 = *((unsigned int *)t496);
    t506 = (t504 & t505);
    *((unsigned int *)t503) = t506;
    t507 = (t483 + 4);
    t508 = (t496 + 4);
    t509 = (t503 + 4);
    t510 = *((unsigned int *)t507);
    t511 = *((unsigned int *)t508);
    t512 = (t510 | t511);
    *((unsigned int *)t509) = t512;
    t513 = *((unsigned int *)t509);
    t514 = (t513 != 0);
    if (t514 == 1)
        goto LAB166;

LAB167:
LAB168:    goto LAB161;

LAB162:    *((unsigned int *)t496) = 1;
    goto LAB165;

LAB164:    t502 = (t496 + 4);
    *((unsigned int *)t496) = 1;
    *((unsigned int *)t502) = 1;
    goto LAB165;

LAB166:    t515 = *((unsigned int *)t503);
    t516 = *((unsigned int *)t509);
    *((unsigned int *)t503) = (t515 | t516);
    t517 = (t483 + 4);
    t518 = (t496 + 4);
    t519 = *((unsigned int *)t483);
    t520 = (~(t519));
    t521 = *((unsigned int *)t517);
    t522 = (~(t521));
    t523 = *((unsigned int *)t496);
    t524 = (~(t523));
    t525 = *((unsigned int *)t518);
    t526 = (~(t525));
    t527 = (t520 & t522);
    t528 = (t524 & t526);
    t529 = (~(t527));
    t530 = (~(t528));
    t531 = *((unsigned int *)t509);
    *((unsigned int *)t509) = (t531 & t529);
    t532 = *((unsigned int *)t509);
    *((unsigned int *)t509) = (t532 & t530);
    t533 = *((unsigned int *)t503);
    *((unsigned int *)t503) = (t533 & t529);
    t534 = *((unsigned int *)t503);
    *((unsigned int *)t503) = (t534 & t530);
    goto LAB168;

LAB169:    *((unsigned int *)t535) = 1;
    goto LAB172;

LAB171:    t542 = (t535 + 4);
    *((unsigned int *)t535) = 1;
    *((unsigned int *)t542) = 1;
    goto LAB172;

LAB173:    t555 = *((unsigned int *)t543);
    t556 = *((unsigned int *)t549);
    *((unsigned int *)t543) = (t555 | t556);
    t557 = (t468 + 4);
    t558 = (t535 + 4);
    t559 = *((unsigned int *)t557);
    t560 = (~(t559));
    t561 = *((unsigned int *)t468);
    t562 = (t561 & t560);
    t563 = *((unsigned int *)t558);
    t564 = (~(t563));
    t565 = *((unsigned int *)t535);
    t566 = (t565 & t564);
    t567 = (~(t562));
    t568 = (~(t566));
    t569 = *((unsigned int *)t549);
    *((unsigned int *)t549) = (t569 & t567);
    t570 = *((unsigned int *)t549);
    *((unsigned int *)t549) = (t570 & t568);
    goto LAB175;

LAB176:    xsi_set_current_line(69, ng0);

LAB179:    xsi_set_current_line(70, ng0);
    t577 = ((char*)((ng4)));
    t578 = (t0 + 4808);
    xsi_vlogvar_assign_value(t578, t577, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB178;

}


extern void work_m_00000000001948932273_2423639907_init()
{
	static char *pe[] = {(void *)Cont_51_0,(void *)Cont_52_1,(void *)Cont_53_2,(void *)Always_56_3};
	xsi_register_didat("work_m_00000000001948932273_2423639907", "isim/P6_test_isim_beh.exe.sim/work/m_00000000001948932273_2423639907.didat");
	xsi_register_executes(pe);
}
