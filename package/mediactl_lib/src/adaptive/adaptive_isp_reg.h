/* Copyright (c) 2022, Canaan Bright Sight Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/
#ifndef _ADAPTIVE_ISP_CORE_REG_H_
#define _ADAPTIVE_ISP_CORE_REG_H_

//itc
#define  ISP_CORE_ITC_CTL               		(0x0000)
#define  ISP_CORE_ITC_TTL_V              		(0x0004) // *
#define  ISP_CORE_ITC_TTL_H             		(0x0008)
#define  ISP_CORE_IMAGE_V_START         		(0x000C)
#define  ISP_CORE_IMAGE_H_START         		(0x0010)
#define  ISP_CORE_IMAGE_ACTIVE_WIDTH    		(0x0014)
#define  ISP_CORE_IMAGE_ACTIVE_HEIGHT   		(0x0018)
//tpg	
#define  ISP_CORE_TEST_CTL              		(0x001C)
//blc		
#define  ISP_CORE_BLC_CTL               		(0x0020)
#define  ISP_CORE_BLC_OFFSET            		(0x0024)
#define  ISP_CORE_BLC_RATIO             		(0x0028)
//lsc		
#define  ISP_CORE_LSC_CTL               		(0x002C)
#define  ISP_CORE_LSC_H_CENTER          		(0x0030)
#define  ISP_CORE_LSC_V_CENTER          		(0x0034)
#define  ISP_CORE_LSC_R_RATIO           		(0x0038)
#define  ISP_CORE_LSC_G_RATIO           		(0x003C)
#define  ISP_CORE_LSC_B_RATIO           		(0x0040)
#define  ISP_CORE_LSC_IR_RATIO          		(0x0044)
//ae		
#define  ISP_CORE_AE_CTL                		(0x0050)
#define  ISP_CORE_AE_WIN_H_START        		(0x0054)
#define  ISP_CORE_AE_WIN_V_START        		(0x0058)
#define  ISP_CORE_AE_WIN_H_END          		(0x005C)
#define  ISP_CORE_AE_WIN_V_END          		(0x0060)
#define  ISP_CORE_AE_TAR_BR             		(0x0064)
#define  ISP_CORE_AE_TAR_BR_RANGE       		(0x0068)
#define  ISP_CORE_AE_L_EX_TIME          		(0x006C)
#define  ISP_CORE_AE_M_EX_TIME          		(0x0070)
#define  ISP_CORE_AE_S_EX_TIME          		(0x0074)
#define  ISP_CORE_AE_AGC                		(0x0078)
#define  ISP_CORE_AE_ADJUST_CTL         		(0x007C)
#define  ISP_CORE_AE_ADJUST_STEP_MAX    		(0x0080)
#define  ISP_CORE_AE_EX_VALUE_MAX       		(0x0084)
#define  ISP_CORE_AE_EX_VALUE_MID       		(0x0088)
#define  ISP_CORE_AE_EX_VALUE_MIN       		(0x008C)
#define  ISP_CORE_AE_GAIN_MAX           		(0x0090)
#define  ISP_CORE_AE_GAIN_MID           		(0x0094)
#define  ISP_CORE_AE_GAIN_MIN           		(0x0098)
#define  ISP_CORE_AE_DN_SWITCH_ADJUST_STEP_MAX  (0x009C)
#define  ISP_CORE_AE_DN_SWITCH_WAIT_TIME        (0x00A0)

#define  ISP_CORE_APE_DIFF_MAX                  (0x00AC)
#define  ISP_CORE_APE_DRV_SIGNAL_MAX            (0x00B0)
#define  ISP_CORE_APE_COEFF_DIS                 (0x00B4)
#define  ISP_CORE_APE_COEFF_SPEED               (0x00B8)
#define  ISP_CORE_APE_COEFF_ACCE                (0x00BC)
#define  ISP_CORE_APE_DRV_MANUAL_VALUE          (0x00C0)
#define  ISP_CORE_APE_DAMP_MANUAL_VALUE         (0x00C4)

#define  ISP_CORE_AE_VALUE_READY                (0x00D4)
#define  ISP_CORE_AE_LONG_CUR_EX                (0x00D8)
#define  ISP_CORE_AE_MID_CUR_EX                 (0x00DC)
#define  ISP_CORE_AE_SHORT_CUR_EX               (0x00E0)
#define  ISP_CORE_AE_CUR_DIGITAL_GAIN           (0x00E4)
#define  ISP_CORE_AE_CUR_AVE_BRIGHTNESS         (0x00E8)
#define  ISP_CORE_AE_CUR_DN_STATUS              (0x00EC)
#define  ISP_CORE_AE_EX_STATUS                  (0x00F0)
#define  ISP_CORE_AE_SUM                        (0x00F4)
#define  ISP_CORE_AE_PIXEL_SUM                  (0x00F8)
//awb
#define  ISP_CORE_AWB_CTL                       (0x0104)
#define  ISP_CORE_AWB_D65_RED_GAIN              (0x0108)
#define  ISP_CORE_AWB_D65_BLUE_GAIN             (0x010C)
#define  ISP_CORE_CCM_RR_COFF                   (0x0110)
#define  ISP_CORE_CCM_RG_COFF                   (0x0114)
#define  ISP_CORE_CCM_RB_COFF                   (0x0118)
#define  ISP_CORE_CCM_GR_COFF                   (0x011C)
#define  ISP_CORE_CCM_GG_COFF                   (0x0120)
#define  ISP_CORE_CCM_GB_COFF                   (0x0124)
#define  ISP_CORE_CCM_BR_COFF                   (0x0128)
#define  ISP_CORE_CCM_BG_COFF                   (0x012C)
#define  ISP_CORE_CCM_BB_COFF                   (0x0130)
#define  ISP_CORE_CCM_CORRECT_COFF              (0x0134)
#define  ISP_CORE_AWB_WIN_H_START               (0x0138)
#define  ISP_CORE_AWB_WIN_V_START               (0x013C)
#define  ISP_CORE_AWB_WIN_H_END                 (0x0140)
#define  ISP_CORE_AWB_WIN_V_END                 (0x0144)
#define  ISP_CORE_AWB_CORRECT_DIFF_TH           (0x0148)
#define  ISP_CORE_AWB_RES_TIME                  (0x014C)
#define  ISP_CORE_AWB_HIST_TH                   (0x0150)
#define  ISP_CORE_AWB_RED_GAIN_ADJUST           (0x0154)
#define  ISP_CORE_AWB_GREEN_GAIN_ADJUST         (0x0158)
#define  ISP_CORE_AWB_BLUE_GAIN_ADJUST          (0x015C)
#define  ISP_CORE_AWB_RED_MAX_VALUE             (0x0160)
#define  ISP_CORE_AWB_BLUE_MAX_VALUE            (0x0164)
#define  ISP_CORE_AWB_RED_MIN_VALUE             (0x0168)
#define  ISP_CORE_AWB_BLUE_MIN_VALUE            (0x016C)
#define  ISP_CORE_AWB_RED_OBJ_VALUE             (0x0170)
#define  ISP_CORE_AWB_BLUE_OBJ_VALUE            (0x0174)
#define  ISP_CORE_AWB_BLUE_HIST_VALUE           (0x017C)
#define  ISP_CORE_AWB_BLUE_HIST_PIXEL           (0x0180)
#define  ISP_CORE_AWB_RED_HIST_VALUE            (0x0184)
#define  ISP_CORE_AWB_RED_HIST_PIXEL            (0x0188)
#define  ISP_CORE_AWB_BYPASS_BLUE_HIST_VALUE    (0x018C)
#define  ISP_CORE_AWB_BYPASS_BLUE_HIST_PIXEL    (0x0190)
#define  ISP_CORE_AWB_BYPASS_RED_HIST_VALUE     (0x0194)
#define  ISP_CORE_AWB_BYPASS_RED_HIST_PIXEL     (0x0198)
#define  ISP_CORE_AWB_RED_VALUE                 (0x019C)
#define  ISP_CORE_AWB_GREEN_VALUE               (0x01A0)
#define  ISP_CORE_AWB_BLUE_VALUE                (0x01A4)
#define  ISP_CORE_AWB_ORG_RED_VALUE             (0x01A8)
#define  ISP_CORE_AWB_ORG_GREEN_VALUE           (0x01AC)
#define  ISP_CORE_AWB_ORG_BLUE_VALUE            (0x01B0)
//wdr
#define  ISP_CORE_WDR_CTL                       (0x01B8)
#define  ISP_CORE_WDR_OVER_EX_RATIO_TH1         (0x01BC)
#define  ISP_CORE_WDR_OVER_EX_RATIO_TH2         (0x01C0)
#define  ISP_CORE_WDR_FUSION_RATIO_TH           (0x01C4)
#define  ISP_CORE_WDR_FUSION_VALUE1             (0x01C8)
#define  ISP_CORE_WDR_FUSION_VALUE2             (0x01CC)
//csc
#define  ISP_CORE_CSC_R2Y_00                    (0x01D8)
#define  ISP_CORE_CSC_R2Y_01                    (0x01DC)
#define  ISP_CORE_CSC_R2Y_02                    (0x01E0)
#define  ISP_CORE_CSC_R2Y_10                    (0x01E4)
#define  ISP_CORE_CSC_R2Y_11                    (0x01E8)
#define  ISP_CORE_CSC_R2Y_12                    (0x01EC)
#define  ISP_CORE_CSC_R2Y_20                    (0x01F0)
#define  ISP_CORE_CSC_R2Y_21                    (0x01F4)
#define  ISP_CORE_CSC_R2Y_22                    (0x01F8)
//ada
#define  ISP_CORE_ADA_CTL                       (0x0204)
#define  ISP_CORE_ADA_STAT_MAX_VALUE            (0x0208)
#define  ISP_CORE_ADA_AD_STREN_MAX_VALUE        (0x020C)
#define  ISP_CORE_ADA_WIN_H_START               (0x0210)
#define  ISP_CORE_ADA_WIN_V_START               (0x0214)
#define  ISP_CORE_ADA_WIN_H_END                 (0x0218)
#define  ISP_CORE_ADA_WIN_V_END                 (0x021C)
//rgbir
#define  ISP_CORE_RGBIR_CTL                     (0x0230)
#define  ISP_CORE_RGBIR_RPC_MAX_VALUE           (0x0234)
#define  ISP_CORE_RGBIR_RPC_COLOR_COFF          (0x0238)
#define  ISP_CORE_RGBIR_RPC_LUMA_COFF           (0x023C)
#define  ISP_CORE_RGBIR_RPC_TH                  (0x0240)
#define  ISP_CORE_RGBIR_RPC_TH1                 (0x0244)
//2dnr
#define  ISP_CORE_2DNR_CTL                      (0x0258)
#define  ISP_CORE_2DNR_RAW_INTENSITY            (0x025C)
#define  ISP_CORE_2DNR_BAP_INTENSITY            (0x0260)
#define  ISP_CORE_2DNR_EDGE_INTENSITY           (0x0264)
#define  ISP_CORE_2DNR_LUMA_INTENSITY           (0x0268)
#define  ISP_CORE_2DNR_CHROMA_INTENSITY         (0x026C)
//3dnr
#define  ISP_CORE_3DNR_CTL                      (0x0278)
#define  ISP_CORE_3DNR_PRE_LUMA_TH              (0x027C)
#define  ISP_CORE_3DNR_PRE_LUMA_INTENSITY       (0x0280)
#define  ISP_CORE_3DNR_PRE_CHROMA_INTENSITY     (0x0284)
#define  ISP_CORE_3DNR_MID_FILTER_TH            (0x0288)
#define  ISP_CORE_3DNR_PRE_MID_FILTER_TH        (0x028C)
#define  ISP_CORE_3DNR_CUR_FILTER_TH            (0x0290)
#define  ISP_CORE_3DNR_LOW_PASS_FILTER_TH       (0x0294)
#define  ISP_CORE_3DNR_LUMA_TH                  (0x0298)
#define  ISP_CORE_3DNR_MIN_VALUE                (0x029C)
#define  ISP_CORE_3DNR_LUMA_INTENSITY           (0x02A0)
#define  ISP_CORE_3DNR_CHROMA_INTENSITY         (0x02A4)
#define  ISP_CORE_3DNR_POST_EDGE_TH             (0x02A8)
#define  ISP_CORE_3DNR_POST_LUMA_INTENSITY      (0x02AC)
#define  ISP_CORE_3DNR_POST_CHROMA_INTENSITY    (0x02B0)
//enh
#define  ISP_CORE_ENH_CTL                       (0x02BC)
#define  ISP_CORE_LTM_GAIN                      (0x02C0)
#define  ISP_CORE_LTM_TH                        (0x02C4)
#define  ISP_CORE_ENH_NR_TH                     (0x02C8)
#define  ISP_CORE_ENH_TH1                       (0x02CC)
#define  ISP_CORE_ENH_TH2                       (0x02D0)
#define  ISP_CORE_SHARP_GAIN                    (0x02D4)
//post
#define  ISP_CORE_POST_CTL                      (0x02E4)
#define  ISP_CORE_CONT_GAIN                     (0x02E8)
#define  ISP_CORE_LUMA_GAIN                     (0x02EC)
#define  ISP_CORE_SATU_GAIN                     (0x02F0)
//otc                                                
#define  ISP_CORE_OTC_STT_VR                    (0x02F4)
#define  ISP_CORE_OTC_STT_HR                    (0x02F8)
#define  ISP_CORE_OTC_HEIGHT                    (0x02FC)
#define  ISP_CORE_OTC_WIDTH                     (0x0300)
//ldc
#define  ISP_CORE_LDC_CTL                       (0x0304)
#define  ISP_CORE_LDC_REQ_FREQ                  (0x0308)
#define  ISP_CORE_LDC_H_CENTER_POS              (0x030C)
#define  ISP_CORE_LDC_V_CENTER_POS              (0x0310)
#define  ISP_CORE_LDC_RECTIFY_CR                (0x0314)
#define  ISP_CORE_LDC_RECTIFY_CZ                (0x0318)
//ram table
#define  ISP_CORE_RAM_WR_STATUS                 (0x0320)
#define  ISP_CORE_RAM_RD_STATUS                 (0x0324)
#define  ISP_CORE_RAM_READ_LOCK                 (0x0328)
//af
#define  ISP_CORE_AF_CTL                        (0x0340)
#define  ISP_CORE_AF_STAT_WIN_H_START           (0x0344)
#define  ISP_CORE_AF_STAT_WIN_V_START           (0x0348)
#define  ISP_CORE_AF_STAT_WIN_H_END             (0x034C)
#define  ISP_CORE_AF_STAT_WIN_V_END             (0x0350)
#define  ISP_CORE_AF_MID_FRQ_DATA               (0x035C)
#define  ISP_CORE_AF_HIGH_FRQ_DATA              (0x0360)
#define  ISP_CORE_AF_STAT_PIXEL_NUM             (0x0364)
#define  ISP_CORE_RGB_GAMMA_HEAD_ADDR           (0x0400)
#endif /*_ISP_CORE_REG_H_*/