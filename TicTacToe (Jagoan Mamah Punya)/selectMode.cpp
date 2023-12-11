#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectMode(int *selection,int *modeCyc,int *matchCyc,int *lvlCyc, int *gamingCyc, int *playerTurn, int *namingCyc){
	
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder=='a'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder=='s'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder=='d'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2||*selection==0){
			*selection = 1;
		}
	}else
	if (getchHolder==' '){
		if (*selection==0){
			*modeCyc = 0;
			*selection = 1;
		}else
		if (*selection==1){
			*selection = 1;
			*matchCyc = 1;
			*gamingCyc = 1;
			*playerTurn = 1;
			*namingCyc = 1;
			
		}else
		if (*selection==2){
			*selection = 1;
			*lvlCyc = 1;
			*namingCyc = 1;
		}
	}
}
