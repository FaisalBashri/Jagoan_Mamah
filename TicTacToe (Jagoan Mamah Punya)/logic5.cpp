#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char TTTLogic_5(char TTTBoard5[25], int *matchCyc,int *resultCyc,int *selection){
	int i,j;
	/*HORIZONTAL LOGIC*/
	i=0;
	while (i<=20){
		j=0;
		while (j<=1){
			if (TTTBoard5[0+j+i]=='x'&&TTTBoard5[1+j+i]=='x'&&TTTBoard5[2+j+i]=='x'&&TTTBoard5[3+j+i]=='x'){
				j = 2;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'x';
			}else
			if (TTTBoard5[0+j+i]=='o'&&TTTBoard5[1+j+i]=='o'&&TTTBoard5[2+j+i]=='o'&&TTTBoard5[3+j+i]=='o'){
				j = 2;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'o';
			}else j = j + 1;
		}
		i = i + 5;
	}
	
	/*VERTICAL LOGIC*/
	i=0;
	while (i<=5){
		j=0;
		while (j<=4){
			if (TTTBoard5[0+j+i]=='x'&&TTTBoard5[5+j+i]=='x'&&TTTBoard5[10+j+i]=='x'&&TTTBoard5[15+j+i]=='x'){
				j = 5;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'x';
			}else
			if (TTTBoard5[0+j+i]=='o'&&TTTBoard5[5+j+i]=='o'&&TTTBoard5[10+j+i]=='o'&&TTTBoard5[15+j+i]=='o'){
				j = 5;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'o';
			}else j = j + 1;
		}
		i = i + 5;
	}
	
	/*DIAGONAL LOGIC*/
	i=0;
	while (i<=1){
		j=0;
		while (j<=5){
			if (TTTBoard5[0+i+j]=='x'&&TTTBoard5[6+i+j]=='x'&&TTTBoard5[12+i+j]=='x'&&TTTBoard5[18+i+j]=='x'){
				j = 6;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'x';
			}else
			if (TTTBoard5[0+i+j]=='o'&&TTTBoard5[6+i+j]=='o'&&TTTBoard5[12+i+j]=='o'&&TTTBoard5[18+i+j]=='o'){
				j = 6;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'o';
			}else j = j + 5;
		}
		i = i + 1;
	}
	
	i=0;
	while (i<=1){
		j=0;
		while (j<=5){
			if (TTTBoard5[3+i+j]=='x'&&TTTBoard5[7+i+j]=='x'&&TTTBoard5[11+i+j]=='x'&&TTTBoard5[15+i+j]=='x'){
				j = 6;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'x';
			}else
			if (TTTBoard5[3+i+j]=='o'&&TTTBoard5[7+i+j]=='o'&&TTTBoard5[11+i+j]=='o'&&TTTBoard5[15+i+j]=='o'){
				j = 6;
				*selection=2;
				*resultCyc=1;
				*matchCyc=0;
				return 'o';
			}else j = j + 5;
		}
		i = i + 1;
	}
	
	/*DRAW LOGIC*/
	if (
	TTTBoard5[0]!='0'&&TTTBoard5[1]!='0'&&TTTBoard5[2]!='0'&&TTTBoard5[3]!='0'&&TTTBoard5[4]!='0'&&
	TTTBoard5[5]!='0'&&TTTBoard5[6]!='0'&&TTTBoard5[7]!='0'&&TTTBoard5[8]!='0'&&TTTBoard5[9]!='0'&&
	TTTBoard5[10]!='0'&&TTTBoard5[11]!='0'&&TTTBoard5[12]!='0'&&TTTBoard5[13]!='0'&&TTTBoard5[14]!='0'&&
	TTTBoard5[15]!='0'&&TTTBoard5[16]!='0'&&TTTBoard5[17]!='0'&&TTTBoard5[18]!='0'&&TTTBoard5[19]!='0'&&
	TTTBoard5[20]!='0'&&TTTBoard5[21]!='0'&&TTTBoard5[22]!='0'&&TTTBoard5[23]!='0'&&TTTBoard5[24]!='0'
	){
		*selection=2;
		*resultCyc=1;
		*matchCyc=0;
		return 'd';
	}
	return '0';
}
