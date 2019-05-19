/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        emWin Font Converter (ST) version 5.40                      *
*        Compiled Mar 17 2017, 15:34:36                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: chinese25B.c                                          *
* Font:        Microsoft JhengHei UI                                 *
* Height:      25                                                    *
*                                                                    *
**********************************************************************
*                                                                    *
* Initial font height:  25                                           *
* Range disabled:       0000 - FFFF                                  *
* Read pattern file: C:\Users\bennacef\Desktop\chinese.txt           *
*                                                                    *
**********************************************************************
*/

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/* The following line needs to be included in any file selecting the
   font.
*/
extern GUI_CONST_STORAGE GUI_FONT GUI_Fontchinese25B;

/* Start of unicode area <CJK Unified Ideographs> */
GUI_CONST_STORAGE unsigned char acGUI_Fontchinese25B_6B22[ 51] = { /* code 6B22 */
  ________,__XX____,________,
  XXXXXXXX,__XX____,________,
  XXXXXXXX,__XXXXXX,XX______,
  _XX___XX,_XXXXXXX,XX______,
  _XX___XX,_XX_____,X_______,
  __XX__X_,XX__X__X,X_______,
  ___XXXX_,XX__X__X,X_______,
  ___XXXX_,X___XX_X,X_______,
  ____XX__,___XXX_X,________,
  ____XX__,___XXX__,________,
  ____XXX_,___XXX__,________,
  ___XXXX_,___XXXX_,________,
  __XX__XX,__XX_XX_,________,
  __XX__XX,__XX__XX,________,
  _XX_____,_XX___XX,________,
  XX______,XX_____X,X_______,
  _______X,X_______,XX______};

GUI_CONST_STORAGE unsigned char acGUI_Fontchinese25B_8FCE[ 57] = { /* code 8FCE */
  __X_____,__X_____,________,
  _XXXX___,XXX_____,________,
  ___X__XX,XX_XXXXX,X_______,
  ______XX,____XXXX,X_______,
  XXXXX_XX,____XX__,X_______,
  XXXXX_XX,____XX__,X_______,
  ___XX_XX,____XX__,X_______,
  __XX__XX,____XX__,X_______,
  __XX__XX,____XX__,X_______,
  _XX___XX,__X_XX__,X_______,
  _XXXX_XX,_XX_XX__,X_______,
  _XXXX_XX,XXX_XXXX,X_______,
  ___XX_XX,X___XXXX,X_______,
  ___XX_X_,____XX__,________,
  ___X____,________,________,
  __XXXX__,________,________,
  _XX_XXXX,XXXXXXXX,XX______,
  _XX___XX,XXXXXXXX,XX______,
  _X______,________,________};

GUI_CONST_STORAGE GUI_CHARINFO_EXT GUI_Fontchinese25B_CharInfo[2] = {
   {  18,  17,   1,   4,  20, acGUI_Fontchinese25B_6B22 } /* code 6B22 */
  ,{  18,  19,   1,   3,  20, acGUI_Fontchinese25B_8FCE } /* code 8FCE */
};

GUI_CONST_STORAGE GUI_FONT_PROP_EXT GUI_Fontchinese25B_Prop2 = {
   0x8FCE /* first character */
  ,0x8FCE /* last character  */
  ,&GUI_Fontchinese25B_CharInfo[  1] /* address of first character */
  ,(GUI_CONST_STORAGE GUI_FONT_PROP_EXT *)0 /* pointer to next GUI_FONT_PROP_EXT */
};

GUI_CONST_STORAGE GUI_FONT_PROP_EXT GUI_Fontchinese25B_Prop1 = {
   0x6B22 /* first character */
  ,0x6B22 /* last character  */
  ,&GUI_Fontchinese25B_CharInfo[  0] /* address of first character */
  ,&GUI_Fontchinese25B_Prop2 /* pointer to next GUI_FONT_PROP_EXT */
};

GUI_CONST_STORAGE GUI_FONT GUI_Fontchinese25B = {
   GUI_FONTTYPE_PROP_EXT /* type of font    */
  ,25 /* height of font  */
  ,25 /* space of font y */
  ,1 /* magnification x */
  ,1 /* magnification y */
  ,{&GUI_Fontchinese25B_Prop1}
  ,20 /* Baseline */
  ,11 /* Height of lowercase characters */
  ,15 /* Height of capital characters */
};

