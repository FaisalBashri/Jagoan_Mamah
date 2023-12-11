#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectLvl(int *selection,int *lvlCyc , int *matchComCyc, int *gamingCyc_PVC, int *levelStatus){
	char getchHolder;
	
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		if (*selection==1){
			*selection = 3;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}else
		if (*selection==3){
			*selection = 2;
		}
	}else
	if (getchHolder=='a'){
		if (*selection==1){
			*selection = 3;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}else
		if (*selection==3){
			*selection = 2;
		}
	}else
	if (getchHolder=='s'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 3;
		}else
		if (*selection==3||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder=='d'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 3;
		}else
		if (*selection==3||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder==' '){
		if (*selection==0){
			*lvlCyc = 0;
			*selection = 1;
		}else
		if (*selection==1){
			*gamingCyc_PVC = 1;
			*matchComCyc = 1;
			*selection = 1;
			*levelStatus = 1;
		}else
		if (*selection==2){
			*gamingCyc_PVC = 1;
			*matchComCyc = 1;
			*selection = 1;
			*levelStatus = 1;
		}else
		if (*selection==3){
			*gamingCyc_PVC = 1;
			*matchComCyc = 1;
			*selection = 1;
			*levelStatus = 1;
		}
	}
	
}
