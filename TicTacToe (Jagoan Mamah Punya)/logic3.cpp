#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char TTTLogic_3(char TTTBoard3[9],int *resultCyc, int score1, int score2,int *selection,int *matchCyc){
	if(
	(TTTBoard3[0]=='x'&&TTTBoard3[1]=='x'&&TTTBoard3[2]=='x')||
	(TTTBoard3[3]=='x'&&TTTBoard3[4]=='x'&&TTTBoard3[5]=='x')||
	(TTTBoard3[6]=='x'&&TTTBoard3[7]=='x'&&TTTBoard3[8]=='x')
	){
		*selection=2;
		*matchCyc = 0;
		*resultCyc=1;
		return 'x';
	}else
	if(
	(TTTBoard3[0]=='x' &&TTTBoard3[3]=='x' &&TTTBoard3[6]=='x')||
	(TTTBoard3[1]=='x' &&TTTBoard3[4]=='x' &&TTTBoard3[7]=='x')||
	(TTTBoard3[2]=='x' &&TTTBoard3[5]=='x' &&TTTBoard3[8]=='x')
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'x';
	}else
	if(
	(TTTBoard3[0]=='x' &&TTTBoard3[4]=='x' &&TTTBoard3[8]=='x')||
	(TTTBoard3[6]=='x' &&TTTBoard3[4]=='x' &&TTTBoard3[2]=='x')
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'x';
	}else
	if(
	(TTTBoard3[0]=='o'&&TTTBoard3[1]=='o'&&TTTBoard3[2]=='o')||
	(TTTBoard3[3]=='o'&&TTTBoard3[4]=='o'&&TTTBoard3[5]=='o')||
	(TTTBoard3[6]=='o'&&TTTBoard3[7]=='o'&&TTTBoard3[8]=='o')
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'o';
	}else
	if(
	(TTTBoard3[0]=='o' &&TTTBoard3[3]=='o' &&TTTBoard3[6]=='o')||
	(TTTBoard3[1]=='o' &&TTTBoard3[4]=='o' &&TTTBoard3[7]=='o')||
	(TTTBoard3[2]=='o' &&TTTBoard3[5]=='o' &&TTTBoard3[8]=='o')
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'o';
	}else
	if(
	(TTTBoard3[0]=='o'&&TTTBoard3[4]=='o'&&TTTBoard3[8]=='o')||
	(TTTBoard3[6]=='o'&&TTTBoard3[4]=='o'&&TTTBoard3[2]=='o')
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'o';
	}else if (
	TTTBoard3[0]!='0'&&TTTBoard3[1]!='0'&&TTTBoard3[2]!='0'&&
	TTTBoard3[3]!='0'&&TTTBoard3[4]!='0'&&TTTBoard3[5]!='0'&&
	TTTBoard3[6]!='0'&&TTTBoard3[7]!='0'&&TTTBoard3[8]!='0'
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'd';
	}else if (score1==10){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'x';
	}else if (score2==10){
		*selection=2;
		*resultCyc=1;
		*matchCyc = 0;
		return 'o';
	}
	return '0';
}
