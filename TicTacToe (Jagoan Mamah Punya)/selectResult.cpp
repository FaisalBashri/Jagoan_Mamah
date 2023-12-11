#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
 
 
void selectResult(int *selection, int *score1, int *score2, int *resultCyc, char TTTBoard3[9], int *matchCyc, int *gamingCyc, int *gamingCyc_PVC, char TTTBoard5[25], char TTTBoard7[49],int dimentionStatus, int levelStatus){
	
	char getchHolder;
	getchHolder=getch();
	
	if (*selection==1){
		if (getchHolder=='a'&&*score1!=10&&*score2!=10){
			*selection = 2;
		}else
		if (getchHolder=='s'&&*score1!=10&&*score2!=10){
			*selection = 2;
		}else
		if (getchHolder=='d'&&*score1!=10&&*score2!=10){
			*selection = 2;
		}else
		if (getchHolder=='w'&&*score1!=10&&*score2!=10){
			*selection = 2;
		}else
		if (getchHolder==' '){
			historyIn(dimentionStatus,*score1,*score2,*gamingCyc,levelStatus);
			*resultCyc=0;
			*gamingCyc=0;
			*gamingCyc_PVC=0;
			*selection = 1;
			TTTBoard3[0]='0';TTTBoard3[1]='0';TTTBoard3[2]='0';
			TTTBoard3[3]='0';TTTBoard3[4]='0';TTTBoard3[5]='0';
			TTTBoard3[6]='0';TTTBoard3[7]='0';TTTBoard3[8]='0';
			
			TTTBoard5[0]='0';TTTBoard5[1]='0';TTTBoard5[2]='0';TTTBoard5[3]='0';TTTBoard5[4]='0';
			TTTBoard5[5]='0';TTTBoard5[6]='0';TTTBoard5[7]='0';TTTBoard5[8]='0';TTTBoard5[9]='0';
			TTTBoard5[10]='0';TTTBoard5[11]='0';TTTBoard5[12]='0';TTTBoard5[13]='0';TTTBoard5[14]='0';
			TTTBoard5[15]='0';TTTBoard5[16]='0';TTTBoard5[17]='0';TTTBoard5[18]='0';TTTBoard5[19]='0';
			TTTBoard5[20]='0';TTTBoard5[21]='0';TTTBoard5[22]='0';TTTBoard5[23]='0';TTTBoard5[24]='0';
			
			for (int i=0;i<49;i++){
				TTTBoard7[i]=' ';
			}
			*score1=0;*score2=0;
		}
	}else
	if (*selection==2){
		if (getchHolder=='a'){
			*selection = 1;
		}else
		if (getchHolder=='s'){
			*selection = 1;
		}else
		if (getchHolder=='d'){
			*selection = 1;
		}else
		if (getchHolder=='w'){
			*selection = 1;
		}else
		if (getchHolder==' '){
			*resultCyc=0;
			*matchCyc=1;
			*selection = 1;
			TTTBoard3[0]='0';TTTBoard3[1]='0';TTTBoard3[2]='0';
			TTTBoard3[3]='0';TTTBoard3[4]='0';TTTBoard3[5]='0';
			TTTBoard3[6]='0';TTTBoard3[7]='0';TTTBoard3[8]='0';
			
			TTTBoard5[0]='0';TTTBoard5[1]='0';TTTBoard5[2]='0';TTTBoard5[3]='0';TTTBoard5[4]='0';
			TTTBoard5[5]='0';TTTBoard5[6]='0';TTTBoard5[7]='0';TTTBoard5[8]='0';TTTBoard5[9]='0';
			TTTBoard5[10]='0';TTTBoard5[11]='0';TTTBoard5[12]='0';TTTBoard5[13]='0';TTTBoard5[14]='0';
			TTTBoard5[15]='0';TTTBoard5[16]='0';TTTBoard5[17]='0';TTTBoard5[18]='0';TTTBoard5[19]='0';
			TTTBoard5[20]='0';TTTBoard5[21]='0';TTTBoard5[22]='0';TTTBoard5[23]='0';TTTBoard5[24]='0';
			
			for (int i=0;i<49;i++){
				TTTBoard7[i]=' ';
			}
		}
	}
}
