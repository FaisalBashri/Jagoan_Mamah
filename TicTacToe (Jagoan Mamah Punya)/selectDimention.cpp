#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectDimention(int *selection,int *dimentionCyc, int *modeCyc, int *dimentionStatus){
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
			*dimentionCyc = 0;
			*selection = 1;
		}else
		if (*selection==1){
			*modeCyc = 1;
			*dimentionStatus = 3;
			*selection = 1;
		}else
		if (*selection==2){
			*modeCyc = 1;
			*dimentionStatus = 5;
			*selection = 1;
		}else
		if (*selection==3){
			*modeCyc = 1;
			*dimentionStatus = 7;
			*selection = 1;
		}
	}
	
}
