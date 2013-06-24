
/* 
 * 
 * Copyright (C) 2013 hckjsnzf@gmail.com
 *
 */

#ifndef __MFR_CONF_H__
#define __MFR_CONF_H__

#define ACCLENG 20
#define BUFLENG 100
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


#define SPENT '0'
#define EARNED '1'
#define BLACKCASH '2'
#define TRANSFER  '3'



typedef struct mfrst_move
{
	char mvdt    [TIMLENG];
	char mvtype  ; /* SPENT, EARNED , BLACKCASH , TRANSFER */
	char mvfacc  [ACCLENG];
	char mvtacc  [ACCLENG];
	
	char mvuse   ; /* EATING, BOOK, PUBBILL, TRAFIC,  */
	char mvtags  [TAGLENG];
	int  tagnum  ;
	
	
	


#endif

