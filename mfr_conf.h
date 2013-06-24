
/* 
 * 
 * Copyright (C) 2013 hckjsnzf@gmail.com
 *
 */

#ifndef __MFR_CONF_H__
#define __MFR_CONF_H__

#define ACCLENG 20
#define BUFLENG 200
#define TIMLENG 15
/* 20130506153000 */
#define AMTLENG 2
#define TAGLENG 10


#define POSITIVE '0'
#define NEGATIVE '1'

typedef struct mfrst_acc 
{
	char accno   [ACCLENG];
	char accdesc [BUFLENG];
	char credt   [TIMLENG];
	char upddt   [TIMLENG];
	char depamt  [AMTLENG];
	char depdesc ; /* POSITIVE , NEGATIVE */
	
}MFR_ACC, *PMFR_ACC;


#define T_SPENT     '0'
#define T_EARNED    '1'
#define T_BLACKCASH '2'
#define T_RIGHTCASH '3'
#define T_TRANSFER  '4'


#define U_EATING    '0'
#define U_CLOTHES   '1'
#define U_HOUSE     '2'
#define U_BOOK      '3'
#define U_PUBBILL   '4'
#define U_TRAFIC    '5'
#define U_IT3C      '6'
#define U_SPORTS    '7'
#define U_OTHER     '8'


#define TA_EBREAKF   '1'
#define TA_ELUNCH    '2'
#define TA_EDINNER   '3'
#define TA_CJACKET   '4'
#define TA_CPANTS    '5'
#define TA_CSHOOES   '6'
#define TA_BPROGRAM  '7'
#define TA_BSINOLOGY '8'
#define TA_HBILLS    '9'
#define TA_HTHING    'a'
#define TA_PWATER    'b'
#define TA_PELECT    'c'  
#define TA_PGAS      'd'
#define TA_TBUS      'e'
#define TA_TTAXI     'f'
#define TA_TSUBW     'g'
#define TA_ICOMPU    'h'
#define TA_IKEYBO    'i'
#define TA_IMOUSE    'j'
#define TA_IHADRD    'k'
#define TA_IOTHER    'l'
#define TA_SBUY      'm'
#define TA_SYARD     'n'
#define TA_OTHER     'o'


typedef struct mfrst_move
{
	char mvdt    [TIMLENG];
	int  dayindex;
	char mvtype  ; /* SPENT, EARNED , BLACKCASH , RIGHTCASH, TRANSFER */
	char mvfacc  [ACCLENG];
	char mvtacc  [ACCLENG];
	
	char mvuse   ; /* EATING, CLOTHES, HOUSE, BOOK, PUBBILL, TRAFIC, IT3C, SPORTS, OTHER */
	char mvtags  [TAGLENG];
	int  tagnum  ;
	char inbuf   [BUFLENG];
	char indate  [TIMLENG];
}MFR_MOV, *PMFR_MOV;



	
	
	
	


#endif

