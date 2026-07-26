/* Recovered pseudocode
 * Objective-C: -[WCLGColorPickerViewController viewDidLoad]
 * Address: 0x252424; original size: 14780 bytes
 * Backend: angr CFGFast + Decompiler; elapsed: 16.259s
 */

unsigned long long sub_252424(long long len)
{
    long long v91;  // x0
    void* v92;  // x2
    long long v101;  // x21
    long long v190;  // x0
    long long count;  // x0
    long long v192;  // x0
    long long count1;  // x0
    long long v194;  // x0
    long long count2;  // x0
    long long len1;  // x21
    long long v197;  // x0
    long long v198;  // x0
    long long len2;  // x21
    long long v102;  // x0
    long long v200;  // x0
    long long v201;  // x0
    long long v202;  // w0
    long long v203;  // x0
    long long v204;  // x21
    long long v205;  // x0
    long long v206;  // x0
    long long v207;  // x0
    long long v208;  // x0
    long long v209;  // x0
    long long v103;  // x22
    long long v210;  // x0
    long long v211;  // x0
    long long v212;  // x0
    long long v213;  // x0
    long long v214;  // x21
    long long v215;  // x0
    long long v216;  // x0
    long long v217;  // x0
    long long v218;  // x0
    long long v219;  // x0
    long long v104;  // x22
    long long v220;  // x0
    long long v221;  // x21
    long long v222;  // x0
    long long v223;  // x22
    long long v224;  // x21
    long long v225;  // x0
    long long v226;  // x0
    long long v227;  // x0
    long long v228;  // x0
    long long v229;  // x0
    long long v105;  // x0
    long long v230;  // x0
    long long v231;  // x0
    long long v232;  // x0
    long long v233;  // x0
    long long v234;  // x0
    long long v235;  // x0
    long long v236;  // x0
    long long v237;  // x22
    long long v238;  // x0
    long long v239;  // x21
    long long v106;  // x0
    long long v240;  // x21
    long long v241;  // x21
    long long v242;  // x0
    long long v243;  // x22
    long long v244;  // x0
    long long v245;  // x0
    long long v246;  // x0
    long long v247;  // x0
    long long v248;  // x0
    long long v249;  // x0
    long long v107;  // x0
    long long v250;  // x23
    long long v251;  // x24
    long long v252;  // x0
    long long v253;  // x28
    long long v254;  // x0
    long long v255;  // x0
    long long v256;  // x0
    long long v257;  // x0
    long long v258;  // x0
    long long v259;  // x0
    long long v108;  // x0
    long long v260;  // x21
    long long v261;  // x0
    long long v262;  // x0
    long long v263;  // x21
    long long v264;  // x0
    long long v265;  // x0
    long long v266;  // x0
    long long v267;  // x0
    long long v268;  // x0
    long long v269;  // x0
    long long v109;  // x0
    long long v270;  // x0
    long long v271;  // x0
    long long v272;  // x0
    long long v273;  // x0
    long long v274;  // x0
    long long v275;  // x0
    long long v276;  // x0
    long long v277;  // x0
    long long v278;  // x0
    long long v279;  // x0
    long long v110;  // x0
    long long v280;  // x0
    long long v281;  // x0
    long long v282;  // x0
    long long v283;  // x0
    long long v284;  // x0
    long long v285;  // x0
    long long v286;  // x0
    long long v287;  // x0
    long long v288;  // x0
    long long v289;  // x0
    long long v93;  // x0
    long long v111;  // x0
    long long v290;  // x23
    long long v291;  // x0
    long long v292;  // x22
    long long v293;  // x22
    long long v294;  // x0
    long long v295;  // x0
    long long v296;  // x23
    long long v297;  // x0
    long long v298;  // x0
    long long v299;  // x0
    long long v112;  // x23
    long long v300;  // x0
    long long v301;  // x0
    long long v302;  // x0
    long long v303;  // x0
    long long v304;  // x0
    long long v305;  // x0
    long long v306;  // x0
    long long v307;  // x0
    long long v308;  // x0
    long long v309;  // x0
    long long v113;  // x0
    long long v310;  // x0
    long long v311;  // x0
    long long v312;  // x0
    long long v313;  // x0
    long long v314;  // x0
    long long v315;  // x0
    long long v316;  // x0
    long long v317;  // x0
    long long v318;  // x0
    long long v319;  // x0
    long long v114;  // x0
    long long v320;  // x0
    long long v321;  // x0
    long long v322;  // x21
    long long v323;  // x0
    long long v324;  // x22
    long long v325;  // x0
    void* index;  // x2
    long long v327;  // x0
    long long v328;  // x0
    long long v329;  // x0
    unsigned int v115;  // w8
    long long v330;  // x0
    long long v331;  // x0
    long long v332;  // x0
    long long v333;  // x0
    long long v334;  // x0
    long long v335;  // x0
    long long v336;  // x21
    long long v337;  // x0
    long long v338;  // x22
    long long v339;  // x0
    long long v116;  // x21
    long long v340;  // x24
    long long v341;  // x23
    long long v342;  // x23
    long long v343;  // x0
    long long v344;  // x8
    unsigned int v345;  // w8
    unsigned int v346;  // w8
    long long v347;  // x21
    long long v348;  // x0
    long long v349;  // x0
    long long v117;  // x0
    long long v350;  // x0
    long long v351;  // x0
    long long v352;  // x0
    long long v353;  // x0
    long long v354;  // x0
    long long v355;  // x0
    long long v356;  // x0
    long long v357;  // x0
    long long v358;  // x0
    long long v359;  // x22
    long long v118;  // x22
    long long v360;  // x0
    long long v361;  // x21
    long long v362;  // x21
    long long v363;  // x0
    long long v364;  // x0
    long long v365;  // x22
    long long v366;  // x0
    long long v367;  // x0
    long long v368;  // x22
    long long v369;  // x0
    long long v119;  // x0
    long long v370;  // x0
    long long v371;  // x22
    long long v372;  // x0
    long long v373;  // x21
    long long v374;  // x21
    long long v375;  // x22
    long long v376;  // x0
    long long v377;  // x0
    long long v378;  // x22
    long long v379;  // x0
    long long v120;  // x24
    long long v380;  // x0
    long long v381;  // x0
    long long v382;  // x0
    long long v383;  // x22
    long long v384;  // x0
    long long v385;  // x21
    long long v386;  // x21
    long long v387;  // x21
    long long v388;  // x0
    long long v389;  // x0
    long long v94;  // x22
    long long v121;  // x23
    long long v390;  // x0
    long long v391;  // x0
    long long v392;  // x21
    long long v393;  // x22
    long long v394;  // x0
    long long v395;  // x21
    long long v396;  // x0
    long long v397;  // x0
    long long v398;  // x0
    long long v399;  // x0
    long long v122;  // x23
    unsigned int v400;  // w9
    unsigned long v401;  // 4108
    long long v402;  // x22
    long long v403;  // x21
    long long v404;  // x23
    long long v405;  // x23
    long long v406;  // x23
    long long v407;  // x0
    long long v408;  // x28
    long long v409;  // x23
    long long v123;  // x0
    long long v410;  // x22
    long long v411;  // x0
    long long v412;  // x22
    long long v413;  // x0
    unsigned int v414;  // w9
    long long v415;  // x0
    long long v416;  // x21
    long long v417;  // x0
    long long v418;  // x0
    long long v419;  // x0
    long long v124;  // x0
    long long v420;  // x0
    unsigned int v421;  // w8
    long long v422;  // x0
    void* v423;  // x2
    long long v424;  // x0
    long long v425;  // x22
    long long v426;  // x21
    unsigned int v427;  // w0
    long long v428;  // x0
    long long v429;  // x0
    long long v430;  // x0
    long long v431;  // x0
    long long v432;  // x21
    long long v433;  // x0
    long long v434;  // x22
    unsigned int v435;  // w9
    unsigned long v436;  // 4108
    void* v437;  // x8
    void* v438;  // x0
    long long v439;  // x0
    unsigned int v125;  // w9
    long long v440;  // x21
    long long v441;  // x0
    long long v442;  // x21
    long long v443;  // x0
    long long v444;  // x0
    long long v445;  // x0
    long long v446;  // x22
    long long v447;  // x0
    long long v448;  // x0
    long long v449;  // x0
    unsigned long v126;  // 4108
    long long v450;  // x0
    long long v451;  // x0
    long long v452;  // x23
    long long v453;  // x0
    long long v454;  // x0
    long long v455;  // x0
    long long v456;  // x24
    long long v457;  // x0
    long long v458;  // x28
    long long v459;  // x0
    long long v127;  // x0
    long long v460;  // x0
    long long v461;  // x0
    long long v462;  // x22
    long long v463;  // x0
    long long v464;  // x0
    long long v465;  // x0
    long long v466;  // x0
    long long v467;  // x0
    long long v468;  // x0
    long long v469;  // x23
    long long v128;  // x22
    long long v470;  // x0
    long long v471;  // x0
    long long v472;  // x0
    long long v473;  // x21
    long long v474;  // x0
    long long v475;  // x23
    long long v476;  // x0
    long long v477;  // x21
    long long v478;  // x0
    long long v479;  // x21
    long long v129;  // x0
    long long v480;  // x0
    long long v481;  // x22
    unsigned int v482;  // w8
    unsigned long v483;  // 4108
    unsigned long long v484;  // x0
    long long v95;  // x21
    long long v130;  // x22
    long long v131;  // x0
    long long v132;  // x21
    long long v133;  // x21
    long long v134;  // x0
    long long v135;  // x22
    long long v136;  // x21
    long long v137;  // x0
    long long v138;  // x22
    long long v139;  // x21
    unsigned int v96;  // w0
    long long v140;  // x0
    long long v141;  // x22
    long long v142;  // x0
    long long v143;  // x22
    long long v144;  // x0
    long long v145;  // x22
    long long v146;  // x0
    long long v147;  // x21
    long long v148;  // x21
    long long v149;  // x0
    long long v97;  // x0
    long long v150;  // x22
    long long v151;  // x21
    long long v152;  // x0
    long long v153;  // x22
    long long v154;  // x21
    long long v155;  // x0
    long long v156;  // x22
    long long v157;  // x21
    long long v158;  // x0
    long long v159;  // x0
    long long v98;  // x0
    long long v160;  // x0
    long long v161;  // x22
    long long v162;  // x0
    long long v163;  // x0
    long long v164;  // x0
    long long v165;  // x22
    long long v166;  // x0
    long long v167;  // x0
    long long v168;  // x22
    long long v169;  // x0
    long long v99;  // x0
    long long v170;  // x21
    long long v171;  // x21
    long long v172;  // x0
    long long v173;  // x0
    long long v174;  // x22
    long long v175;  // x0
    long long v176;  // x0
    long long v177;  // x0
    long long v178;  // x22
    long long v179;  // x0
    long long v100;  // x0
    long long v180;  // x0
    long long v181;  // x22
    long long v182;  // x0
    long long v183;  // x21
    long long v184;  // x21
    long long v185;  // x0
    long long v186;  // x0
    long long v187;  // x0
    long long v188;  // x0
    long long v189;  // x0
    int v0;  // [bp-0x3a0]
    char v1;  // [bp-0x360]
    unsigned int v2;  // [bp-0x354]
    unsigned int v3;  // [bp-0x350]
    unsigned int v4;  // [bp-0x34c]
    char *v5;  // [bp-0x348]
    unsigned int v6;  // [bp-0x33c]
    long long v7;  // [bp-0x338]
    long long v8;  // [bp-0x330]
    long long v9;  // [bp-0x328]
    long long v10;  // [bp-0x320]
    long long v11;  // [bp-0x318]
    long long v12;  // [bp-0x310]
    long long v13;  // [bp-0x301]
    long long v14;  // [bp-0x300]
    long long v15;  // [bp-0x2f8]
    long long v16;  // [bp-0x2f0]
    long long v17;  // [bp-0x2e8]
    long long v18;  // [bp-0x2e0]
    long long v19;  // [bp-0x2d8]
    long long v20;  // [bp-0x2d0]
    long long v21;  // [bp-0x2c8]
    long long v22;  // [bp-0x2c0]
    long long v23;  // [bp-0x2b8]
    long long v24;  // [bp-0x2b0]
    long long v25;  // [bp-0x2a8]
    long long v26;  // [bp-0x2a0]
    long long v27;  // [bp-0x298]
    long long v28;  // [bp-0x290]
    long long v29;  // [bp-0x288]
    long long v30;  // [bp-0x280]
    long long v31;  // [bp-0x278]
    unsigned long v32;  // [bp-0x270]
    long long v33;  // [bp-0x268]
    long long v34;  // [bp-0x260]
    long long v35;  // [bp-0x258]
    long long v36;  // [bp-0x250]
    long long v37;  // [bp-0x248]
    long long v38;  // [bp-0x240]
    long long v39;  // [bp-0x238]
    long long v40;  // [bp-0x230]
    long long v41;  // [bp-0x228]
    long long v42;  // [bp-0x220]
    long long v43;  // [bp-0x218]
    long long v44;  // [bp-0x210]
    long long v45;  // [bp-0x208]
    long long v46;  // [bp-0x200]
    long long v47;  // [bp-0x1f8]
    long long v48;  // [bp-0x1f0]
    long long v49;  // [bp-0x1e8]
    long long v50;  // [bp-0x1e0]
    long long v51;  // [bp-0x1d8]
    long long v52;  // [bp-0x1d0]
    long long v53;  // [bp-0x1c8]
    long long v54;  // [bp-0x1c0]
    long long v55;  // [bp-0x1b8]
    long long v56;  // [bp-0x1b0]
    long long v57;  // [bp-0x1a8]
    long long v58;  // [bp-0x1a0]
    long long v59;  // [bp-0x198]
    long long v60;  // [bp-0x190]
    long long v61;  // [bp-0x188]
    long long v62;  // [bp-0x180]
    long long v63;  // [bp-0x178]
    unsigned long v64;  // [bp-0x170]
    long long v65;  // [bp-0x168]
    long long v66;  // [bp-0x160]
    long long v67;  // [bp-0x158]
    long long v68;  // [bp-0x150]
    long long v69;  // [bp-0x148]
    unsigned long v70;  // [bp-0x140]
    long long v71;  // [bp-0x138]
    long long v72;  // [bp-0x130]
    long long v73;  // [bp-0x128]
    long long v74;  // [bp-0x120]
    long long v75;  // [bp-0x118]
    long long v76;  // [bp-0x110]
    long long v77;  // [bp-0x108]
    long long v78;  // [bp-0x100]
    long long v79;  // [bp-0xf8]
    long long idx[4];  // [bp-0xf0]
    void* v81;  // [bp-0xe8]
    void* v82;  // [bp-0xe0]
    unsigned int v83;  // [bp-0xd4]
    unsigned long v84;  // [bp-0xd0]
    unsigned long v85;  // [bp-0xc8]
    unsigned long v86;  // [bp-0xc0]
    unsigned long v87;  // [bp-0xb8]
    unsigned long v88;  // [bp-0xb0]
    char *v89;  // [bp-0x10]
    char v90;  // [bp+0x0]

    v89 = &v90;
    /* unsupported instruction */ = (int)&v1;
    v88 = *((long long *)&g_600760);
    /* unsupported instruction */
    v83 = g_57f9f8;
    v6 = 3920571589;
    v5 = &v6;
    v4 = 1040522936;
    v3 = 1047904911;
    v2 = 1046562734;
    *((unsigned long long *)&(&v0)[64]) = 0x3fee666666666666;
    while (1)
    {
        while (1)
        {
            if (v6 > 1121229744)
            {
                if (2070436552 < v6)
                {
                    if (v6 > 2093955578)
                    {
                        if (v6 != 2093955579)
                        {
                            if (v6 == 0x7feaefec)
                            {
                                v127 = _objc_msgSend(len, SEL_sectionLabelWithText_, &g_522990);
                                v128 = _objc_retainAutoreleasedReturnValue(v127, SEL_sectionLabelWithText_, &g_522990);
                                _objc_msgSend(len, SEL_setPickerHeaderLabel_, v128);
                                _objc_release(v128);
                                v129 = _objc_msgSend(len, SEL_sectionLabelWithText_, &g_522790);
                                v130 = _objc_retainAutoreleasedReturnValue(v129, SEL_sectionLabelWithText_, &g_522790);
                                _objc_msgSend(len, SEL_setPaletteHeaderLabel_, v130);
                                _objc_release(v130);
                                v131 = _objc_msgSend(len, SEL_sectionLabelWithText_, &g_522850);
                                v132 = _objc_retainAutoreleasedReturnValue(v131, SEL_sectionLabelWithText_, &g_522850);
                                _objc_msgSend(len, SEL_setCommonHeaderLabel_, v132);
                                _objc_release(v132);
                                v133 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v134 = _objc_msgSend(len, SEL_pickerHeaderLabel);
                                v135 = _objc_retainAutoreleasedReturnValue(v134, SEL_pickerHeaderLabel);
                                _objc_msgSend(v133, v76, v135);
                                _objc_release(v135);
                                _objc_release(v133);
                                v136 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v137 = _objc_msgSend(len, SEL_paletteHeaderLabel);
                                v138 = _objc_retainAutoreleasedReturnValue(v137, SEL_paletteHeaderLabel);
                                _objc_msgSend(v136, v76, v138);
                                _objc_release(v138);
                                _objc_release(v136);
                                v139 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v140 = _objc_msgSend(len, SEL_commonHeaderLabel);
                                v141 = _objc_retainAutoreleasedReturnValue(v140, SEL_commonHeaderLabel);
                                _objc_msgSend(v139, v76, v141);
                                _objc_release(v141);
                                _objc_release(v139);
                                v142 = _objc_msgSend(len, SEL_makeCard);
                                v143 = _objc_retainAutoreleasedReturnValue(v142, SEL_makeCard);
                                _objc_msgSend(len, SEL_setControlCard_, v143);
                                _objc_release(v143);
                                v144 = _objc_msgSend(len, SEL_makeCard);
                                v145 = _objc_retainAutoreleasedReturnValue(v144, SEL_makeCard);
                                _objc_msgSend(len, SEL_setPaletteCard_, v145);
                                _objc_release(v145);
                                v146 = _objc_msgSend(len, SEL_makeCard);
                                v147 = _objc_retainAutoreleasedReturnValue(v146, SEL_makeCard);
                                _objc_msgSend(len, SEL_setCommonCard_, v147);
                                _objc_release(v147);
                                v148 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v74 = SEL_controlCard;
                                v149 = _objc_msgSend(len, SEL_controlCard);
                                v150 = _objc_retainAutoreleasedReturnValue(v149, SEL_controlCard);
                                _objc_msgSend(v148, v76, v150);
                                _objc_release(v150);
                                _objc_release(v148);
                                v151 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v73 = SEL_paletteCard;
                                v152 = _objc_msgSend(len, SEL_paletteCard);
                                v153 = _objc_retainAutoreleasedReturnValue(v152, SEL_paletteCard);
                                _objc_msgSend(v151, v76, v153);
                                _objc_release(v153);
                                _objc_release(v151);
                                v154 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v72 = SEL_commonCard;
                                v155 = _objc_msgSend(len, SEL_commonCard);
                                v156 = _objc_retainAutoreleasedReturnValue(v155, SEL_commonCard);
                                _objc_msgSend(v154, v76, v156);
                                _objc_release(v156);
                                _objc_release(v154);
                                v157 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                                _objc_msgSend(len, SEL_setHexLabel_, v157);
                                _objc_release(v157);
                                v158 = _objc_msgSend(len, SEL_hexLabel);
                                v159 = _objc_retainAutoreleasedReturnValue(v158, SEL_hexLabel);
                                v71 = SEL_setText_;
                                _objc_msgSend(v159, SEL_setText_, &g_5227d0);
                                _objc_release(v159);
                                v70 = *((long long *)&g_600360);
                                v69 = SEL_systemFontOfSize_weight_;
                                v160 = _objc_msgSend(g_4c4218, SEL_systemFontOfSize_weight_);
                                v161 = _objc_retainAutoreleasedReturnValue(v160, SEL_systemFontOfSize_weight_);
                                v162 = _objc_msgSend(len, SEL_hexLabel);
                                v163 = _objc_retainAutoreleasedReturnValue(v162, SEL_hexLabel);
                                v68 = SEL_setFont_;
                                _objc_msgSend(v163, SEL_setFont_, v161);
                                _objc_release(v163);
                                _objc_release(v161);
                                v67 = SEL_primaryTextColor;
                                v164 = _objc_msgSend(len, SEL_primaryTextColor);
                                v165 = _objc_retainAutoreleasedReturnValue(v164, SEL_primaryTextColor);
                                v166 = _objc_msgSend(len, SEL_hexLabel);
                                v167 = _objc_retainAutoreleasedReturnValue(v166, SEL_hexLabel);
                                v66 = SEL_setTextColor_;
                                _objc_msgSend(v167, SEL_setTextColor_, v165);
                                _objc_release(v167);
                                _objc_release(v165);
                                v168 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v169 = _objc_msgSend(len, SEL_hexLabel);
                                v170 = _objc_retainAutoreleasedReturnValue(v169, SEL_hexLabel);
                                _objc_msgSend(v168, v76, v170);
                                _objc_release(v170);
                                _objc_release(v168);
                                v171 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                                _objc_msgSend(len, SEL_setHexHintLabel_, v171);
                                _objc_release(v171);
                                v172 = _objc_msgSend(len, SEL_hexHintLabel);
                                v173 = _objc_retainAutoreleasedReturnValue(v172, SEL_hexHintLabel);
                                _objc_msgSend(v173, v71, &g_522a10);
                                _objc_release(v173);
                                v174 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v69), v69);
                                v175 = _objc_msgSend(len, SEL_hexHintLabel);
                                v176 = _objc_retainAutoreleasedReturnValue(v175, SEL_hexHintLabel);
                                _objc_msgSend(v176, v68, v174);
                                _objc_release(v176);
                                _objc_release(v174);
                                v65 = SEL_secondaryTextColor;
                                v177 = _objc_msgSend(len, SEL_secondaryTextColor);
                                v178 = _objc_retainAutoreleasedReturnValue(v177, SEL_secondaryTextColor);
                                v179 = _objc_msgSend(len, SEL_hexHintLabel);
                                v180 = _objc_retainAutoreleasedReturnValue(v179, SEL_hexHintLabel);
                                _objc_msgSend(v180, v66, v178);
                                _objc_release(v180);
                                _objc_release(v178);
                                v181 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v182 = _objc_msgSend(len, SEL_hexHintLabel);
                                v183 = _objc_retainAutoreleasedReturnValue(v182, SEL_hexHintLabel);
                                _objc_msgSend(v181, v76, v183);
                                _objc_release(v183);
                                _objc_release(v181);
                                v184 = _objc_msgSend(_objc_alloc(g_4c4100), v77);
                                _objc_msgSend(len, SEL_setHexField_, v184);
                                _objc_release(v184);
                                v185 = _objc_msgSend(len, SEL_hexField);
                                v186 = _objc_retainAutoreleasedReturnValue(v185, SEL_hexField);
                                _objc_msgSend(v186, SEL_setDelegate_, len);
                                _objc_release(v186);
                                v187 = _objc_msgSend(len, SEL_hexField);
                                v188 = _objc_retainAutoreleasedReturnValue(v187, SEL_hexField);
                                _objc_msgSend(v188, SEL_setAutocapitalizationType_, 3);
                                _objc_release(v188);
                                v189 = _objc_msgSend(len, SEL_hexField);
                                v190 = _objc_retainAutoreleasedReturnValue(v189, SEL_hexField);
                                _objc_msgSend(v190, SEL_setAutocorrectionType_, 1);
                                _objc_release(v190);
                                count = _objc_msgSend(len, SEL_hexField);
                                v192 = _objc_retainAutoreleasedReturnValue(count, SEL_hexField);
                                _objc_msgSend(v192, SEL_setClearButtonMode_, 1);
                                _objc_release(v192);
                                count1 = _objc_msgSend(len, SEL_hexField);
                                v194 = _objc_retainAutoreleasedReturnValue(count1, SEL_hexField);
                                _objc_msgSend(v194, SEL_setReturnKeyType_, 9);
                                _objc_release(v194);
                                v64 = *((long long *)&g_600378);
                                v63 = SEL_monospacedDigitSystemFontOfSize_weight_;
                                count2 = _objc_msgSend(g_4c4218, SEL_monospacedDigitSystemFontOfSize_weight_);
                                len1 = _objc_retainAutoreleasedReturnValue(count2, SEL_monospacedDigitSystemFontOfSize_weight_);
                                v197 = _objc_msgSend(len, SEL_hexField);
                                v198 = _objc_retainAutoreleasedReturnValue(v197, SEL_hexField);
                                _objc_msgSend(v198, v68, len1);
                                _objc_release(v198);
                                _objc_release(len1);
                                len2 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v67), v67);
                                v200 = _objc_msgSend(len, SEL_hexField);
                                v201 = _objc_retainAutoreleasedReturnValue(v200, SEL_hexField);
                                _objc_msgSend(v201, v66, len2);
                                _objc_release(v201);
                                _objc_release(len2);
                                v202 = (unsigned int)_objc_msgSend(len, SEL_isDarkMode);
                                v62 = SEL_colorWithWhite_alpha_;
                                v203 = _objc_msgSend();
                                v204 = _objc_retainAutoreleasedReturnValue(v203, SEL_colorWithWhite_alpha_);
                                v205 = _objc_msgSend(len, SEL_hexField);
                                v206 = _objc_retainAutoreleasedReturnValue(v205, SEL_hexField);
                                _objc_msgSend(v206, v78, v204);
                                _objc_release(v206);
                                _objc_release(v204);
                                v207 = _objc_msgSend(len, SEL_hexField);
                                v208 = _objc_retainAutoreleasedReturnValue(v207, SEL_hexField);
                                v61 = SEL_layer;
                                v209 = _objc_msgSend(v208, SEL_layer);
                                v210 = _objc_retainAutoreleasedReturnValue(v209, SEL_layer);
                                v60 = SEL_setCornerRadius_;
                                _objc_msgSend(v210, SEL_setCornerRadius_);
                                _objc_release(v210);
                                _objc_release(v208);
                                v211 = _objc_msgSend(len, SEL_hexField);
                                v212 = _objc_retainAutoreleasedReturnValue(v211, SEL_hexField);
                                v213 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v212, v61), v61);
                                _objc_msgSend(v213, SEL_setMasksToBounds_, 1);
                                _objc_release(v213);
                                _objc_release(v212);
                                v214 = _objc_msgSend(_objc_alloc(g_4c4078), v77);
                                v215 = _objc_msgSend(len, SEL_hexField);
                                v216 = _objc_retainAutoreleasedReturnValue(v215, SEL_hexField);
                                _objc_msgSend(v216, SEL_setLeftView_, v214);
                                _objc_release(v216);
                                _objc_release(v214);
                                v217 = _objc_msgSend(len, SEL_hexField);
                                v218 = _objc_retainAutoreleasedReturnValue(v217, SEL_hexField);
                                _objc_msgSend(v218, SEL_setLeftViewMode_, 3);
                                _objc_release(v218);
                                v219 = _objc_msgSend(len, SEL_hexField);
                                v220 = _objc_retainAutoreleasedReturnValue(v219, SEL_hexField);
                                v59 = SEL_addTarget_action_forControlEvents_;
                                _objc_msgSend(v220, SEL_addTarget_action_forControlEvents_, len, SEL_hexEditingDidEnd_, 0x40000);
                                _objc_release(v220);
                                v221 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v222 = _objc_msgSend(len, SEL_hexField);
                                v223 = _objc_retainAutoreleasedReturnValue(v222, SEL_hexField);
                                _objc_msgSend(v221, v76, v223);
                                _objc_release(v223);
                                _objc_release(v221);
                                v224 = _objc_msgSend(_objc_alloc(g_4c4078), v77);
                                _objc_msgSend(len, SEL_setPreviewView_, v224);
                                _objc_release(v224);
                                v225 = _objc_msgSend(len, SEL_previewView);
                                v226 = _objc_retainAutoreleasedReturnValue(v225, SEL_previewView);
                                v227 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v226, v61), v61);
                                _objc_msgSend(v227, v60);
                                _objc_release(v227);
                                _objc_release(v226);
                                v228 = _objc_msgSend(len, SEL_previewView);
                                v229 = _objc_retainAutoreleasedReturnValue(v228, SEL_previewView);
                                v230 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v229, v61), v61);
                                v58 = SEL_setBorderWidth_;
                                _objc_msgSend(v230, SEL_setBorderWidth_);
                                _objc_release(v230);
                                _objc_release(v229);
                                v231 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v62), v62);
                                v232 = _objc_retainAutorelease(v231);
                                v57 = SEL_CGColor;
                                v233 = _objc_msgSend(v232, SEL_CGColor);
                                v234 = _objc_msgSend(len, SEL_previewView);
                                v235 = _objc_retainAutoreleasedReturnValue(v234, SEL_previewView);
                                v236 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v235, v61), v61);
                                v56 = SEL_setBorderColor_;
                                _objc_msgSend(v236, SEL_setBorderColor_, v233);
                                _objc_release(v236);
                                _objc_release(v235);
                                _objc_release(v231);
                                v237 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v238 = _objc_msgSend(len, SEL_previewView);
                                v239 = _objc_retainAutoreleasedReturnValue(v238, SEL_previewView);
                                _objc_msgSend(v237, v76, v239);
                                _objc_release(v239);
                                _objc_release(v237);
                                v240 = _objc_msgSend(_objc_alloc(g_4c4470), v77);
                                _objc_msgSend(len, SEL_setCanvasView_, v240);
                                _objc_release(v240);
                                v241 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v242 = _objc_msgSend(len, SEL_canvasView);
                                v243 = _objc_retainAutoreleasedReturnValue(v242, SEL_canvasView);
                                _objc_msgSend(v241, v76, v243);
                                _objc_release(v243);
                                _objc_release(v241);
                                v244 = _objc_alloc(g_4c43f8);
                                v55 = _objc_msgSend(v244, SEL_initWithTarget_action_, len, SEL_canvasGestureChanged_);
                                v245 = _objc_alloc(g_4c41d8);
                                v54 = _objc_msgSend(v245, SEL_initWithTarget_action_, len, SEL_canvasGestureChanged_);
                                v246 = _objc_msgSend(len, SEL_canvasView);
                                v247 = _objc_retainAutoreleasedReturnValue(v246, SEL_canvasView);
                                _objc_msgSend(v247, SEL_addGestureRecognizer_, v55);
                                _objc_release(v247);
                                v248 = _objc_msgSend(len, SEL_canvasView);
                                v249 = _objc_retainAutoreleasedReturnValue(v248, SEL_canvasView);
                                _objc_msgSend(v249, SEL_addGestureRecognizer_, v54);
                                _objc_release(v249);
                                v250 = _objc_msgSend(_objc_alloc(g_4c4478), v77);
                                _objc_msgSend(len, SEL_setHueBarView_, v250);
                                _objc_release(v250);
                                v251 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v252 = _objc_msgSend(len, SEL_hueBarView);
                                v253 = _objc_retainAutoreleasedReturnValue(v252, SEL_hueBarView);
                                _objc_msgSend(v251, v76, v253);
                                _objc_release(v253);
                                _objc_release(v251);
                                v254 = _objc_alloc(g_4c43f8);
                                v53 = _objc_msgSend(v254, SEL_initWithTarget_action_, len, SEL_hueGestureChanged_);
                                v255 = _objc_alloc(g_4c41d8);
                                v52 = _objc_msgSend(v255, SEL_initWithTarget_action_, len, SEL_hueGestureChanged_);
                                v256 = _objc_msgSend(len, SEL_hueBarView);
                                v257 = _objc_retainAutoreleasedReturnValue(v256, SEL_hueBarView);
                                _objc_msgSend(v257, SEL_addGestureRecognizer_, v53);
                                _objc_release(v257);
                                v258 = _objc_msgSend(len, SEL_hueBarView);
                                v259 = _objc_retainAutoreleasedReturnValue(v258, SEL_hueBarView);
                                _objc_msgSend(v259, SEL_addGestureRecognizer_, v52);
                                _objc_release(v259);
                                v260 = _objc_msgSend(_objc_alloc(g_4c4078), v77);
                                _objc_msgSend(len, SEL_setCanvasKnob_, v260);
                                _objc_release(v260);
                                v261 = _objc_msgSend(len, SEL_canvasKnob);
                                v262 = _objc_retainAutoreleasedReturnValue(v261, SEL_canvasKnob);
                                _objc_msgSend(v262, SEL_setUserInteractionEnabled_, 0);
                                _objc_release(v262);
                                v263 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v79), v79);
                                v264 = _objc_msgSend(len, SEL_canvasKnob);
                                v265 = _objc_retainAutoreleasedReturnValue(v264, SEL_canvasKnob);
                                _objc_msgSend(v265, v78, v263);
                                _objc_release(v265);
                                _objc_release(v263);
                                v266 = _objc_msgSend(len, SEL_canvasKnob);
                                v267 = _objc_retainAutoreleasedReturnValue(v266, SEL_canvasKnob);
                                v268 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v267, v61), v61);
                                _objc_msgSend(v268, v58);
                                _objc_release(v268);
                                _objc_release(v267);
                                v269 = _objc_msgSend(g_4c4090, SEL_whiteColor);
                                v270 = _objc_retainAutoreleasedReturnValue(v269, SEL_whiteColor);
                                v271 = _objc_msgSend(_objc_retainAutorelease(v270), v57);
                                v272 = _objc_msgSend(len, SEL_canvasKnob);
                                v273 = _objc_retainAutoreleasedReturnValue(v272, SEL_canvasKnob);
                                v274 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v273, v61), v61);
                                _objc_msgSend(v274, v56, v271);
                                _objc_release(v274);
                                _objc_release(v273);
                                _objc_release(v270);
                                v51 = SEL_blackColor;
                                v275 = _objc_msgSend(g_4c4090, SEL_blackColor);
                                v276 = _objc_retainAutoreleasedReturnValue(v275, SEL_blackColor);
                                v277 = _objc_msgSend(_objc_retainAutorelease(v276), v57);
                                v278 = _objc_msgSend(len, SEL_canvasKnob);
                                v279 = _objc_retainAutoreleasedReturnValue(v278, SEL_canvasKnob);
                                v280 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v279, v61), v61);
                                v50 = SEL_setShadowColor_;
                                _objc_msgSend(v280, SEL_setShadowColor_, v277);
                                _objc_release(v280);
                                _objc_release(v279);
                                _objc_release(v276);
                                v281 = _objc_msgSend(len, SEL_canvasKnob);
                                v282 = _objc_retainAutoreleasedReturnValue(v281, SEL_canvasKnob);
                                v283 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v282, v61), v61);
                                v49 = SEL_setShadowOpacity_;
                                _objc_msgSend(v283, SEL_setShadowOpacity_);
                                _objc_release(v283);
                                _objc_release(v282);
                                v284 = _objc_msgSend(len, SEL_canvasKnob);
                                v285 = _objc_retainAutoreleasedReturnValue(v284, SEL_canvasKnob);
                                v286 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v285, v61), v61);
                                v48 = SEL_setShadowRadius_;
                                _objc_msgSend(v286, SEL_setShadowRadius_);
                                _objc_release(v286);
                                _objc_release(v285);
                                v287 = _objc_msgSend(len, SEL_canvasKnob);
                                v288 = _objc_retainAutoreleasedReturnValue(v287, SEL_canvasKnob);
                                v289 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v288, v61), v61);
                                v47 = SEL_setShadowOffset_;
                                _objc_msgSend(v289, SEL_setShadowOffset_);
                                _objc_release(v289);
                                _objc_release(v288);
                                v290 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v291 = _objc_msgSend(len, SEL_canvasKnob);
                                v292 = _objc_retainAutoreleasedReturnValue(v291, SEL_canvasKnob);
                                _objc_msgSend(v290, v76, v292);
                                _objc_release(v292);
                                _objc_release(v290);
                                v293 = _objc_msgSend(_objc_alloc(g_4c4078), v77);
                                _objc_msgSend(len, SEL_setHueKnob_, v293);
                                _objc_release(v293);
                                v294 = _objc_msgSend(len, SEL_hueKnob);
                                v295 = _objc_retainAutoreleasedReturnValue(v294, SEL_hueKnob);
                                _objc_msgSend(v295, SEL_setUserInteractionEnabled_, 0);
                                _objc_release(v295);
                                v296 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v79), v79);
                                v297 = _objc_msgSend(len, SEL_hueKnob);
                                v298 = _objc_retainAutoreleasedReturnValue(v297, SEL_hueKnob);
                                _objc_msgSend(v298, v78, v296);
                                _objc_release(v298);
                                _objc_release(v296);
                                v299 = _objc_msgSend(len, SEL_hueKnob);
                                v300 = _objc_retainAutoreleasedReturnValue(v299, SEL_hueKnob);
                                v301 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v300, v61), v61);
                                _objc_msgSend(v301, v58);
                                _objc_release(v301);
                                _objc_release(v300);
                                v302 = _objc_msgSend(g_4c4090, SEL_whiteColor);
                                v303 = _objc_retainAutoreleasedReturnValue(v302, SEL_whiteColor);
                                v304 = _objc_msgSend(_objc_retainAutorelease(v303), v57);
                                v305 = _objc_msgSend(len, SEL_hueKnob);
                                v306 = _objc_retainAutoreleasedReturnValue(v305, SEL_hueKnob);
                                v307 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v306, v61), v61);
                                _objc_msgSend(v307, v56, v304);
                                _objc_release(v307);
                                _objc_release(v306);
                                _objc_release(v303);
                                v308 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v51), v51);
                                v309 = _objc_msgSend(_objc_retainAutorelease(v308), v57);
                                v310 = _objc_msgSend(len, SEL_hueKnob);
                                v311 = _objc_retainAutoreleasedReturnValue(v310, SEL_hueKnob);
                                v312 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v311, v61), v61);
                                _objc_msgSend(v312, v50, v309);
                                _objc_release(v312);
                                _objc_release(v311);
                                _objc_release(v308);
                                v313 = _objc_msgSend(len, SEL_hueKnob);
                                v314 = _objc_retainAutoreleasedReturnValue(v313, SEL_hueKnob);
                                v315 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v314, v61), v61);
                                _objc_msgSend(v315, v49);
                                _objc_release(v315);
                                _objc_release(v314);
                                v316 = _objc_msgSend(len, SEL_hueKnob);
                                v317 = _objc_retainAutoreleasedReturnValue(v316, SEL_hueKnob);
                                v318 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v317, v61), v61);
                                _objc_msgSend(v318, v48);
                                _objc_release(v318);
                                _objc_release(v317);
                                v319 = _objc_msgSend(len, SEL_hueKnob);
                                v320 = _objc_retainAutoreleasedReturnValue(v319, SEL_hueKnob);
                                v321 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v320, v61), v61);
                                _objc_msgSend(v321, v47);
                                _objc_release(v321);
                                _objc_release(v320);
                                v322 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                                v323 = _objc_msgSend(len, SEL_hueKnob);
                                v324 = _objc_retainAutoreleasedReturnValue(v323, SEL_hueKnob);
                                _objc_msgSend(v322, v76, v324);
                                _objc_release(v324);
                                _objc_release(v322);
                                v46 = SEL_array;
                                v325 = _objc_msgSend(g_4c4110, SEL_array);
                                v45 = _objc_retainAutoreleasedReturnValue(v325, SEL_array);
                                v44 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4110, v46), v46);
                                v43 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4110, v46), v46);
                                index = v81;
                                *((char **)index) = " \t`";
                                *((char **)&index[8]) = " \t`";
                                *((char **)&index[16]) = " \t`";
                                *((char **)&index[24]) = " \t`";
                                v327 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, index, 4);
                                v42 = _objc_retainAutoreleasedReturnValue(v327, SEL_arrayWithObjects_count_, index, 4);
                                v328 = _objc_msgSend(g_4c4090, SEL_colorWithRed_green_blue_alpha_);
                                v329 = _objc_retainAutoreleasedReturnValue(v328, SEL_colorWithRed_green_blue_alpha_);
                                idx[0] = v329;
                                v330 = _objc_msgSend(g_4c4090, SEL_colorWithRed_green_blue_alpha_);
                                v331 = _objc_retainAutoreleasedReturnValue(v330, SEL_colorWithRed_green_blue_alpha_);
                                idx[1] = v331;
                                v332 = _objc_msgSend(g_4c4090, SEL_colorWithRed_green_blue_alpha_);
                                v333 = _objc_retainAutoreleasedReturnValue(v332, SEL_colorWithRed_green_blue_alpha_);
                                idx[2] = v333;
                                v334 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v62), v62);
                                idx[3] = v334;
                                v335 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, idx, 4);
                                v41 = _objc_retainAutoreleasedReturnValue(v335, SEL_arrayWithObjects_count_, idx, 4);
                                _objc_release(v334);
                                _objc_release(v333);
                                _objc_release(v331);
                                _objc_release(v329);
                                v39 = SEL_addObject_;
                                v40 = SEL_objectAtIndexedSubscript_;
                                v37 = SEL_setMaximumValue_;
                                v38 = SEL_setMinimumValue_;
                                v35 = SEL_setMinimumTrackTintColor_;
                                v36 = SEL_setTag_;
                                v33 = SEL_numberFieldWithTag_;
                                v34 = SEL_channelSliderChanged_;
                                v6 = 3753711891;
                                v12 = 0;
                                continue;
                            }
                            else
                            {
                                if (v6 == 0x7fa3ba7d)
                                {
                                    _objc_msgSend(len, SEL_setCommonButtons_, v23);
                                    _objc_msgSend(len, SEL_setCommonLabels_, v22);
                                    _objc_msgSend(len, SEL_loadCurrentColor);
                                    _objc_msgSend(len, SEL_updateUI);
                                    _objc_release(v22);
                                    _objc_release(v23);
                                    _objc_release(v30);
                                    _objc_release(v41);
                                    _objc_release(v42);
                                    _objc_release(v43);
                                    _objc_release(v44);
                                    _objc_release(v45);
                                    _objc_release(v52);
                                    _objc_release(v53);
                                    _objc_release(v54);
                                    v484 = _objc_release(v55);
                                    if (*((long long *)&g_600760) == v88)
                                        return v484;
                                    ___stack_chk_fail();
                                }
                                continue;
                            }
                        }
                        else
                        {
                            v27 = SEL_setTag_;
                            v28 = SEL_buttonWithType_;
                            v25 = SEL_addObject_;
                            v26 = SEL_paletteButtonTapped_;
                            v24 = SEL_count;
                            v6 = 1642354295;
                            v10 = 0;
                            continue;
                        }
                    }
                    else
                    {
                        if (v6 != 2070436553)
                        {
                            if (v6 != 2075350168)
                                continue;
                            v336 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4168, v20, 0), v20, 0);
                            _objc_msgSend(v336, v19, v7);
                            _objc_msgSend(v336, v59, len, v18, 64);
                            v337 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v72), v72);
                            _objc_msgSend(v337, v76, v336);
                            _objc_release(v337);
                            _objc_msgSend(v23, v17, v336);
                            v338 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                            v339 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v16), v16);
                            v340 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v339, v15, v7), v15, v7);
                            _objc_msgSend(v338, v71, v340);
                            _objc_release(v340);
                            _objc_release(v339);
                            v341 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v69), v69);
                            _objc_msgSend(v338, v68, v341);
                            _objc_release(v341);
                            v342 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v67), v67);
                            _objc_msgSend(v338, v66, v342);
                            _objc_release(v342);
                            v343 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v72), v72);
                            _objc_msgSend(v343, v76, v338);
                            _objc_release(v343);
                            _objc_msgSend(v22, v17, v338);
                            _objc_release(v338);
                            _objc_release(v336);
                            v14 = v7 + 1;
                            if (_objc_msgSend(_objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v21), v21), v8) <= v14)
                                v344 = 0;
                            else
                                v344 = 1;
                            v13 = v344;
                            _objc_release();
                            if (((g_522d28 - g_522d2c | 164535012) + 0x99fdfe74 & 861714947) < 0x67f92e23)
                            {
                                v345 = 2070436553;
                                break;
                            }
                            else
                            {
                                v345 = 2075350168;
                                break;
                            }
                        }
                        else
                        {
                            if (v13)
                                v346 = 1170345228;
                            else
                                v346 = 0x7fa3ba7d;
                            v6 = v346;
                            v9 = v14;
                            continue;
                        }
                    }
                }
                if (v6 > 1318277365)
                {
                    if (v6 != 1318277366)
                    {
                        if (v6 != 1642354295)
                        {
                            if (v6 == 1961965889)
                            {
                                v91 = _objc_alloc(g_4c4468);
                                v92 = v82;
                                *((char **)v92) = " \t`";
                                *((char **)&v92[8]) = " \t`";
                                v93 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, v92, 2);
                                v94 = _objc_retainAutoreleasedReturnValue(v93, SEL_arrayWithObjects_count_, v92, 2);
                                v95 = _objc_msgSend(v91, SEL_initWithItems_, v94);
                                _objc_msgSend(len, SEL_setAppearanceControl_, v95);
                                _objc_release(v95);
                                _objc_release(v94);
                                v96 = _objc_msgSend(len, SEL_editingDarkAppearance);
                                v97 = _objc_msgSend(len, SEL_appearanceControl);
                                v98 = _objc_retainAutoreleasedReturnValue(v97, SEL_appearanceControl);
                                _objc_msgSend(v98, SEL_setSelectedSegmentIndex_, v96);
                                _objc_release(v98);
                                v99 = _objc_msgSend(len, SEL_appearanceControl);
                                v100 = _objc_retainAutoreleasedReturnValue(v99, SEL_appearanceControl);
                                _objc_msgSend(v100, SEL_addTarget_action_forControlEvents_, len, SEL_appearanceSegmentChanged_, 0x1000);
                                _objc_release(v100);
                                v101 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                                v102 = _objc_msgSend(len, SEL_appearanceControl);
                                v103 = _objc_retainAutoreleasedReturnValue(v102, SEL_appearanceControl);
                                _objc_msgSend(v101, v76, v103);
                                _objc_release(v103);
                                _objc_release(v101);
                                v6 = 3376254583;
                                continue;
                            }
                        }
                        else
                        {
                            v104 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4168, v28, 0), v28, 0);
                            _objc_msgSend(v104, v27, v10);
                            v105 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v51), v51);
                            v106 = _objc_msgSend(_objc_retainAutorelease(v105), v57);
                            v107 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v104, v61), v61);
                            _objc_msgSend(v107, v50, v106);
                            _objc_release(v107);
                            _objc_release(v105);
                            v108 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v104, v61), v61);
                            _objc_msgSend(v108, v49);
                            _objc_release(v108);
                            v109 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v104, v61), v61);
                            _objc_msgSend(v109, v48);
                            _objc_release(v109);
                            v110 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v104, v61), v61);
                            _objc_msgSend(v110, v47);
                            _objc_release(v110);
                            _objc_msgSend(v104, v59, len, v26, 64);
                            v111 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v31), v31);
                            _objc_msgSend(v111, v76, v104);
                            _objc_release(v111);
                            _objc_msgSend(v30, v25, v104);
                            _objc_release(v104);
                            v112 = v10 + 1;
                            v113 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v29), v29);
                            v114 = _objc_msgSend(v113, v24);
                            _objc_release(v113);
                            if (v112 < v114)
                                v115 = 1642354295;
                            else
                                v115 = 3435808695;
                            v6 = v115;
                            v10 = v112;
                            v11 = v24;
                            continue;
                        }
                    }
                    else
                    {
                        v116 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4168, v20, 0), v20, 0);
                        _objc_msgSend(v116, v19, v7);
                        _objc_msgSend(v116, v59, len, v18, 64);
                        v117 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v72), v72);
                        _objc_msgSend(v117, v76, v116);
                        _objc_release(v117);
                        _objc_msgSend(v23, v17, v116);
                        v118 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                        v119 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v16), v16);
                        v120 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v119, v15, v7), v15, v7);
                        _objc_msgSend(v118, v71, v120);
                        _objc_release(v120);
                        _objc_release(v119);
                        v121 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v69), v69);
                        _objc_msgSend(v118, v68, v121);
                        _objc_release(v121);
                        v122 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v67), v67);
                        _objc_msgSend(v118, v66, v122);
                        _objc_release(v122);
                        v123 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v72), v72);
                        _objc_msgSend(v123, v76, v118);
                        _objc_release(v123);
                        _objc_msgSend(v22, v17, v118);
                        _objc_release(v118);
                        _objc_release(v116);
                        v124 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v21), v21);
                        _objc_msgSend(v124, v8);
                        _objc_release(v124);
                        v6 = 2075350168;
                        continue;
                    }
                }
                if (v6 == 1121229745)
                {
                    v6 = 0x7feaefec;
                    continue;
                }
                if (v6 != 1170345228)
                    continue;
                v7 = v9;
                v345 = 2075350168;
                v125 = 1318277366;
                v126 = arm64g_calculate_condition(3, (unsigned long long)((g_522d20 | g_522d24) + 2933136866 & 4083876480), 3274912945, 0);
                if (!((char)v126))
                    goto LABEL_255452;
                goto LABEL_255451;
            }
            else if (v6 > 3376254582)
            {
                if (v6 <= 3753711890)
                {
                    if (v6 != 3376254583)
                    {
                        if (v6 != 3435808695)
                            continue;
                        v8 = v11;
                        _objc_msgSend(len, SEL_setPaletteButtons_, v30);
                        v415 = _objc_msgSend(len, SEL_commonColorModes);
                        v416 = _objc_retainAutoreleasedReturnValue(v415, SEL_commonColorModes);
                        _objc_msgSend(len, SEL_setCommonModes_, v416);
                        _objc_release(v416);
                        v23 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4110, v46), v46);
                        v417 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4110, v46), v46);
                        v21 = SEL_commonModes;
                        v22 = v417;
                        v418 = _objc_msgSend(len, SEL_commonModes);
                        v419 = _objc_retainAutoreleasedReturnValue(v418, SEL_commonModes);
                        v420 = _objc_msgSend(v419, v8);
                        _objc_release(v419);
                        if (0 < v420)
                            v345 = 2250692649;
                        else
                            v345 = 0x7fa3ba7d;
                        goto LABEL_2558b4;
                    }
                    v421 = g_522d18 / g_522d1c + 1352447303;
                    v422 = _objc_alloc(g_4c4468);
                    v423 = v82;
                    *((char **)v423) = " \t`";
                    *((char **)&v423[8]) = " \t`";
                    v424 = _objc_msgSend(g_4c4098, SEL_arrayWithObjects_count_, v423, 2);
                    v425 = _objc_retainAutoreleasedReturnValue(v424, SEL_arrayWithObjects_count_, v423, 2);
                    v426 = _objc_msgSend(v422, SEL_initWithItems_, v425);
                    _objc_msgSend(len, SEL_setAppearanceControl_, v426);
                    _objc_release(v426);
                    _objc_release(v425);
                    v427 = _objc_msgSend(len, SEL_editingDarkAppearance);
                    v428 = _objc_msgSend(len, SEL_appearanceControl);
                    v429 = _objc_retainAutoreleasedReturnValue(v428, SEL_appearanceControl);
                    _objc_msgSend(v429, SEL_setSelectedSegmentIndex_, v427);
                    _objc_release(v429);
                    v430 = _objc_msgSend(len, SEL_appearanceControl);
                    v431 = _objc_retainAutoreleasedReturnValue(v430, SEL_appearanceControl);
                    _objc_msgSend(v431, SEL_addTarget_action_forControlEvents_, len, SEL_appearanceSegmentChanged_, 0x1000);
                    _objc_release(v431);
                    v432 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v75), v75);
                    v433 = _objc_msgSend(len, SEL_appearanceControl);
                    v434 = _objc_retainAutoreleasedReturnValue(v433, SEL_appearanceControl);
                    _objc_msgSend(v432, v76, v434);
                    _objc_release(v434);
                    _objc_release(v432);
                    v345 = 3376254583;
                    v435 = 1121229745;
                    v436 = arm64g_calculate_condition(3, (unsigned long long)(v421 & 3147924554), 1596600875, 0);
                    if (!((char)v436))
                    {
LABEL_2558b2:
                        v345 = v435;
LABEL_2558b4:
                        v6 = v345;
                        goto LABEL_2558b4;
                    }
LABEL_2558b1:
                    goto LABEL_2558b4;
                }
                if (v6 == 3753711891)
                {
                    v402 = v12;
                    v403 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                    v404 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v42, v40, v402), v40, v402);
                    _objc_msgSend(v403, v71, v404);
                    _objc_release(v404);
                    v405 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v69), v69);
                    _objc_msgSend(v403, v68, v405);
                    _objc_release(v405);
                    v406 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v67), v67);
                    _objc_msgSend(v403, v66, v406);
                    _objc_release(v406);
                    v407 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    _objc_msgSend(v407, v76, v403);
                    _objc_release(v407);
                    _objc_msgSend(v45, v39, v403);
                    v408 = _objc_msgSend(_objc_alloc(g_4c4230), v77);
                    _objc_msgSend(v408, v38);
                    _objc_msgSend(v408, v37);
                    v409 = v402 + 1;
                    _objc_msgSend(v408, v36, v409);
                    v410 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v41, v40, v402), v40, v402);
                    _objc_msgSend(v408, v35, v410);
                    _objc_release(v410);
                    _objc_msgSend(v408, v59, len, v34, 0x1000);
                    v411 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    _objc_msgSend(v411, v76, v408);
                    _objc_release(v411);
                    _objc_msgSend(v44, v39, v408);
                    v412 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v33, v409), v33, v409);
                    v413 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    _objc_msgSend(v413, v76, v412);
                    _objc_release(v413);
                    _objc_msgSend(v43, v39, v412);
                    _objc_release(v412);
                    _objc_release(v408);
                    _objc_release(v403);
                    if (v409 == 4)
                        v414 = 995724253;
                    else
                        v414 = 3753711891;
                    v6 = v414;
                    v12 = v409;
                    continue;
                }
                if (v6 != 3920571589 && v6 == 995724253)
                {
                    _objc_msgSend(len, SEL_setChannelLabels_, v45);
                    _objc_msgSend(len, SEL_setChannelSliders_, v44);
                    _objc_msgSend(len, SEL_setChannelFields_, v43);
                    v347 = _objc_msgSend(_objc_alloc(g_4c4078), v77);
                    _objc_msgSend(len, SEL_setCurrentDot_, v347);
                    _objc_release(v347);
                    v348 = _objc_msgSend(len, SEL_currentDot);
                    v349 = _objc_retainAutoreleasedReturnValue(v348, SEL_currentDot);
                    v350 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v349, v61), v61);
                    _objc_msgSend(v350, v60);
                    _objc_release(v350);
                    _objc_release(v349);
                    v351 = _objc_msgSend(len, SEL_currentDot);
                    v352 = _objc_retainAutoreleasedReturnValue(v351, SEL_currentDot);
                    v353 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v352, v61), v61);
                    _objc_msgSend(v353, v58);
                    _objc_release(v353);
                    _objc_release(v352);
                    v354 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v62), v62);
                    v355 = _objc_msgSend(_objc_retainAutorelease(v354), v57);
                    v356 = _objc_msgSend(len, SEL_currentDot);
                    v357 = _objc_retainAutoreleasedReturnValue(v356, SEL_currentDot);
                    v358 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(v357, v61), v61);
                    _objc_msgSend(v358, v56, v355);
                    _objc_release(v358);
                    _objc_release(v357);
                    _objc_release(v354);
                    v359 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    v360 = _objc_msgSend(len, SEL_currentDot);
                    v361 = _objc_retainAutoreleasedReturnValue(v360, SEL_currentDot);
                    _objc_msgSend(v359, v76, v361);
                    _objc_release(v361);
                    _objc_release(v359);
                    v362 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                    _objc_msgSend(len, SEL_setCurrentTitleLabel_, v362);
                    _objc_release(v362);
                    v363 = _objc_msgSend(len, SEL_currentTitleLabel);
                    v364 = _objc_retainAutoreleasedReturnValue(v363, SEL_currentTitleLabel);
                    _objc_msgSend(v364, v71, &g_522710);
                    _objc_release(v364);
                    v32 = *((long long *)&g_600388);
                    v365 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v69), v69);
                    v366 = _objc_msgSend(len, SEL_currentTitleLabel);
                    v367 = _objc_retainAutoreleasedReturnValue(v366, SEL_currentTitleLabel);
                    _objc_msgSend(v367, v68, v365);
                    _objc_release(v367);
                    _objc_release(v365);
                    v368 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v67), v67);
                    v369 = _objc_msgSend(len, SEL_currentTitleLabel);
                    v370 = _objc_retainAutoreleasedReturnValue(v369, SEL_currentTitleLabel);
                    _objc_msgSend(v370, v66, v368);
                    _objc_release(v370);
                    _objc_release(v368);
                    v371 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    v372 = _objc_msgSend(len, SEL_currentTitleLabel);
                    v373 = _objc_retainAutoreleasedReturnValue(v372, SEL_currentTitleLabel);
                    _objc_msgSend(v371, v76, v373);
                    _objc_release(v373);
                    _objc_release(v371);
                    v374 = _objc_msgSend(_objc_alloc(g_4c4158), v77);
                    _objc_msgSend(len, SEL_setCurrentHexLabel_, v374);
                    _objc_release(v374);
                    v375 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4218, v63), v63);
                    v376 = _objc_msgSend(len, SEL_currentHexLabel);
                    v377 = _objc_retainAutoreleasedReturnValue(v376, SEL_currentHexLabel);
                    _objc_msgSend(v377, v68, v375);
                    _objc_release(v377);
                    _objc_release(v375);
                    v378 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v65), v65);
                    v379 = _objc_msgSend(len, SEL_currentHexLabel);
                    v380 = _objc_retainAutoreleasedReturnValue(v379, SEL_currentHexLabel);
                    _objc_msgSend(v380, v66, v378);
                    _objc_release(v380);
                    _objc_release(v378);
                    v381 = _objc_msgSend(len, SEL_currentHexLabel);
                    v382 = _objc_retainAutoreleasedReturnValue(v381, SEL_currentHexLabel);
                    _objc_msgSend(v382, SEL_setTextAlignment_, 2);
                    _objc_release(v382);
                    v383 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v74), v74);
                    v384 = _objc_msgSend(len, SEL_currentHexLabel);
                    v385 = _objc_retainAutoreleasedReturnValue(v384, SEL_currentHexLabel);
                    _objc_msgSend(v383, v76, v385);
                    _objc_release(v385);
                    _objc_release(v383);
                    v386 = _objc_msgSend(_objc_alloc(g_4c4188), v77);
                    _objc_msgSend(len, SEL_setPaletteScrollView_, v386);
                    _objc_release(v386);
                    v387 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v79), v79);
                    v31 = SEL_paletteScrollView;
                    v388 = _objc_msgSend(len, SEL_paletteScrollView);
                    v389 = _objc_retainAutoreleasedReturnValue(v388, SEL_paletteScrollView);
                    _objc_msgSend(v389, v78, v387);
                    _objc_release(v389);
                    _objc_release(v387);
                    v390 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v31), v31);
                    _objc_msgSend(v390, SEL_setAlwaysBounceHorizontal_, 1);
                    _objc_release(v390);
                    v391 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v31), v31);
                    _objc_msgSend(v391, SEL_setShowsHorizontalScrollIndicator_, 0);
                    _objc_release(v391);
                    v392 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v73), v73);
                    v393 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(len, v31), v31);
                    _objc_msgSend(v392, v76, v393);
                    _objc_release(v393);
                    _objc_release(v392);
                    v394 = _objc_msgSend(len, SEL_defaultPaletteModes);
                    v395 = _objc_retainAutoreleasedReturnValue(v394, SEL_defaultPaletteModes);
                    _objc_msgSend(len, SEL_setPaletteModes_, v395);
                    _objc_release(v395);
                    v396 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4110, v46), v46);
                    v29 = SEL_paletteModes;
                    v30 = v396;
                    v397 = _objc_msgSend(len, SEL_paletteModes);
                    v398 = _objc_retainAutoreleasedReturnValue(v397, SEL_paletteModes);
                    v399 = _objc_msgSend(v398, SEL_count);
                    _objc_release(v398);
                    if (0 < v399)
                        v400 = 2093955579;
                    else
                        v400 = 3435808695;
                    v6 = v400;
                    v11 = SEL_count;
                    continue;
                }
                v345 = 2371466723;
                v125 = 2611398581;
                v401 = arm64g_calculate_condition(3, (unsigned long long)v83, 0, 0);
                if (!((char)v401))
                {
LABEL_255452:
LABEL_255454:
                    goto LABEL_2558b4;
                }
LABEL_255451:
                v345 = v125;
                goto LABEL_255454;
            }
            else
            {
                if (2611398580 >= v6)
                {
                    if (v6 != 2250692649)
                    {
                        if (v6 != 2371466723)
                            continue;
                        /* unsupported instruction */
                        g_57f9f8 = 1;
                        v437 = (void*)/* unsupported instruction */;
                        v438 = v437 - 16;
                        v82 = v438 - 16;
                        v81 = v82 - 32;
                        /* unsupported instruction */ = (int)(v81 - 32);
                        idx = (long long [4])/* unsupported instruction */;
                        *((long long *)&v437[16]) = len;
                        *((unsigned long long *)&v437[8]) = g_4c4768;
                        _objc_msgSendSuper2(v438, SEL_viewDidLoad);
                        v439 = _objc_msgSend(len, SEL_titleForPurpose);
                        v440 = _objc_retainAutoreleasedReturnValue(v439, SEL_titleForPurpose);
                        _objc_msgSend(len, SEL_setTitle_, v440);
                        _objc_release(v440);
                        v441 = _objc_alloc(g_4c4328);
                        v442 = _objc_msgSend(v441, SEL_initWithTitle_style_target_action_, &g_522910, 2, len, SEL_confirmColor);
                        v443 = _objc_msgSend(len, SEL_navigationItem);
                        v444 = _objc_retainAutoreleasedReturnValue(v443, SEL_navigationItem);
                        _objc_msgSend(v444, SEL_setRightBarButtonItem_, v442);
                        _objc_release(v444);
                        _objc_release(v442);
                        v79 = SEL_clearColor;
                        v445 = _objc_msgSend(g_4c4090, SEL_clearColor);
                        v446 = _objc_retainAutoreleasedReturnValue(v445, SEL_clearColor);
                        v447 = _objc_msgSend(len, SEL_view);
                        v448 = _objc_retainAutoreleasedReturnValue(v447, SEL_view);
                        v78 = SEL_setBackgroundColor_;
                        _objc_msgSend(v448, SEL_setBackgroundColor_, v446);
                        _objc_release(v448);
                        _objc_release(v446);
                        v449 = _objc_alloc(g_4c4460);
                        v450 = _objc_msgSend(len, SEL_view);
                        v451 = _objc_retainAutoreleasedReturnValue(v450, SEL_view);
                        _objc_msgSend(v451, SEL_bounds);
                        v77 = SEL_initWithFrame_;
                        v452 = _objc_msgSend(v449, SEL_initWithFrame_);
                        _objc_msgSend(len, SEL_setBackgroundView_, v452);
                        _objc_release(v452);
                        _objc_release(v451);
                        v453 = _objc_msgSend(len, SEL_backgroundView);
                        v454 = _objc_retainAutoreleasedReturnValue(v453, SEL_backgroundView);
                        _objc_msgSend(v454, SEL_setAutoresizingMask_, 18);
                        _objc_release(v454);
                        v455 = _objc_msgSend(len, SEL_view);
                        v456 = _objc_retainAutoreleasedReturnValue(v455, SEL_view);
                        v457 = _objc_msgSend(len, SEL_backgroundView);
                        v458 = _objc_retainAutoreleasedReturnValue(v457, SEL_backgroundView);
                        v76 = SEL_addSubview_;
                        _objc_msgSend(v456, SEL_addSubview_, v458);
                        _objc_release(v458);
                        _objc_release(v456);
                        v459 = _objc_alloc(g_4c4188);
                        v460 = _objc_msgSend(len, SEL_view);
                        v461 = _objc_retainAutoreleasedReturnValue(v460, SEL_view);
                        _objc_msgSend(v461, SEL_bounds);
                        v462 = _objc_msgSend(v459, v77);
                        _objc_msgSend(len, SEL_setScrollView_, v462);
                        _objc_release(v462);
                        _objc_release(v461);
                        v463 = _objc_msgSend(len, SEL_scrollView);
                        v464 = _objc_retainAutoreleasedReturnValue(v463, SEL_scrollView);
                        _objc_msgSend(v464, SEL_setAutoresizingMask_, 18);
                        _objc_release(v464);
                        v465 = _objc_msgSend(len, SEL_scrollView);
                        v466 = _objc_retainAutoreleasedReturnValue(v465, SEL_scrollView);
                        _objc_msgSend(v466, SEL_setAlwaysBounceVertical_, 1);
                        _objc_release(v466);
                        v467 = _objc_msgSend(len, SEL_scrollView);
                        v468 = _objc_retainAutoreleasedReturnValue(v467, SEL_scrollView);
                        _objc_msgSend(v468, SEL_setKeyboardDismissMode_, 2);
                        _objc_release(v468);
                        v469 = _objc_retainAutoreleasedReturnValue(_objc_msgSend(g_4c4090, v79), v79);
                        v470 = _objc_msgSend(len, SEL_scrollView);
                        v471 = _objc_retainAutoreleasedReturnValue(v470, SEL_scrollView);
                        _objc_msgSend(v471, v78, v469);
                        _objc_release(v471);
                        _objc_release(v469);
                        v472 = _objc_msgSend(len, SEL_view);
                        v473 = _objc_retainAutoreleasedReturnValue(v472, SEL_view);
                        v474 = _objc_msgSend(len, SEL_scrollView);
                        v475 = _objc_retainAutoreleasedReturnValue(v474, SEL_scrollView);
                        _objc_msgSend(v473, v76, v475);
                        _objc_release(v475);
                        _objc_release(v473);
                        v476 = _objc_alloc(g_4c4078);
                        v84 = *((long long *)&g_600608);
                        v85 = *((long long *)&g_600610);
                        v86 = *((long long *)&g_600618);
                        v87 = *((long long *)&g_600620);
                        v477 = _objc_msgSend(v476, v77);
                        _objc_msgSend(len, SEL_setContentView_, v477);
                        _objc_release(v477);
                        v478 = _objc_msgSend(len, SEL_scrollView);
                        v479 = _objc_retainAutoreleasedReturnValue(v478, SEL_scrollView);
                        v75 = SEL_contentView;
                        v480 = _objc_msgSend(len, SEL_contentView);
                        v481 = _objc_retainAutoreleasedReturnValue(v480, SEL_contentView);
                        _objc_msgSend(v479, v76, v481);
                        _objc_release(v481);
                        _objc_release(v479);
                        if (_objc_msgSend(len, SEL_dualAppearanceMode))
                            v345 = 3039086523;
                        else
                            v345 = 0x7feaefec;
                        goto LABEL_2558b4;
                    }
                    else
                    {
                        v19 = SEL_setTag_;
                        v20 = SEL_buttonWithType_;
                        v17 = SEL_addObject_;
                        v18 = SEL_commonButtonTapped_;
                        v15 = SEL_objectAtIndexedSubscript_;
                        v16 = SEL_commonColorNames;
                        v6 = 1170345228;
                        v9 = 0;
                        continue;
                    }
                }
                if (v6 != 2611398581)
                {
                    if (v6 != 3039086523)
                        continue;
                    v482 = 3078678529 + 320708805 * (g_522d10 + g_522d14);
                    v345 = 1961965889;
                    v435 = 3376254583;
                    v483 = arm64g_calculate_condition(3, 500386891, (unsigned long long)((unsigned int)(__ROL__(v482 * 14081291, 32)) + (v482 - (unsigned int)(__ROL__(v482 * 14081291, 32)) >> 1) >> 31), 0);
                    if (!((char)v483))
                        goto LABEL_2558b2;
                    goto LABEL_2558b1;
                }
                else
                {
                    *((unsigned short *)&g_5226a0) = g_522670 ^ 44480;
                    *((unsigned short *)&g_5226a2) = g_522672 ^ 33690;
                    *((unsigned short *)&g_5226a4) = g_522674 ^ 48100;
                    *((unsigned short *)&g_5226a6) = g_522676 ^ 17065;
                    *((unsigned short *)&g_5226a8) = g_522678 ^ 492;
                    *((unsigned short *)&g_5226aa) = g_52267a ^ 37103;
                    *((unsigned short *)&g_5226ac) = g_52267c ^ 48540;
                    *((unsigned short *)&g_5226ae) = g_52267e ^ 50416;
                    *((unsigned short *)&g_5226b0) = g_522680 ^ 58471;
                    *((unsigned short *)&g_5226b2) = g_522682 ^ 55129;
                    *((unsigned short *)&g_5226b4) = g_522684 ^ 53982;
                    *((unsigned short *)&g_5226b6) = g_522686 ^ 0xe7fd;
                    *((unsigned short *)&g_5226b8) = g_522688 ^ 16813;
                    *((unsigned short *)&g_5226ba) = g_52268a ^ 25204;
                    *((unsigned short *)&g_5226bc) = g_52268c ^ 21958;
                    *((unsigned short *)&g_5226be) = g_52268e ^ 31552;
                    *((unsigned short *)&g_5226c0) = g_522690 ^ 3354;
                    *((unsigned short *)&g_5226c2) = g_522692 ^ 17821;
                    *((unsigned short *)&g_5226c4) = g_522694 ^ 3251;
                    *((unsigned short *)&g_5226c6) = g_522696 ^ 35048;
                    *((unsigned short *)&g_5226c8) = g_522698 ^ 45313;
                    *((unsigned short *)&g_5226ca) = g_52269a ^ 59263;
                    *((unsigned short *)&g_5226cc) = g_52269c ^ 0x17f8;
                    *((unsigned short *)&g_522652) = g_522648 ^ 20423;
                    *((unsigned short *)&g_522654) = g_52264a ^ 21519;
                    *((unsigned short *)&g_522656) = g_52264c ^ 2695;
                    *((unsigned short *)&g_522658) = g_52264e ^ 24764;
                    *((unsigned short *)&g_52265a) = g_522650 ^ 31212;
                    *((unsigned short *)&g_5226da) = g_5226ce ^ 10684;
                    *((unsigned short *)&g_5226dc) = g_5226d0 ^ 22084;
                    *((unsigned short *)&g_5226de) = g_5226d2 ^ 32353;
                    *((unsigned short *)&g_5226e0) = g_5226d4 ^ 39478;
                    *((unsigned short *)&g_5226e2) = g_5226d6 ^ 24674;
                    *((unsigned short *)&g_5226e4) = g_5226d8 ^ 57120;
                    g_52261e = g_52261c ^ 6;
                    g_52261f = g_52261d ^ 65;
                    *((unsigned short *)&g_522642) = g_52263c ^ 27310;
                    *((unsigned short *)&g_522644) = g_52263e ^ 52455;
                    *((unsigned short *)&g_522646) = g_522640 ^ 53147;
                    g_522632 = g_522630 ^ 249;
                    g_522633 = g_522631 ^ 103;
                    *((unsigned short *)&g_522664) = g_52265c ^ 0x4c4c;
                    *((unsigned short *)&g_522666) = g_52265e ^ 56989;
                    *((unsigned short *)&g_522668) = g_522660 ^ 43467;
                    *((unsigned short *)&g_52266a) = g_522662 ^ 36500;
                    *((unsigned short *)&g_52262a) = g_522624 ^ 7535;
                    *((unsigned short *)&g_52262c) = g_522626 ^ 58449;
                    *((unsigned short *)&g_52262e) = g_522628 ^ 41363;
                    g_52261a = g_522618 ^ 107;
                    g_52261b = g_522619 ^ 166;
                    g_522622 = g_522620 ^ 56;
                    g_522623 = g_522621 ^ 162;
                    *((unsigned short *)&g_52260e) = g_522604 ^ 3686;
                    *((unsigned short *)&g_522610) = g_522606 ^ 31322;
                    *((unsigned short *)&g_522612) = g_522608 ^ 14941;
                    *((unsigned short *)&g_522614) = g_52260a ^ 45297;
                    *((unsigned short *)&g_522616) = g_52260c ^ 5133;
                    g_522638 = g_522634 ^ 44;
                    g_522639 = g_522635 ^ 188;
                    g_52263a = g_522636 ^ 40;
                    g_52263b = g_522637 ^ 5;
                    *((unsigned short *)&g_5225fa) = g_5225f0 ^ 13760;
                    *((unsigned short *)&g_5225fc) = g_5225f2 ^ 31296;
                    *((unsigned short *)&g_5225fe) = g_5225f4 ^ 7667;
                    *((unsigned short *)&g_522600) = g_5225f6 ^ 50401;
                    *((unsigned short *)&g_522602) = g_5225f8 ^ 2742;
                    v6 = 2371466723;
                }
            }
        }
        goto LABEL_2558b4;
    }
}
