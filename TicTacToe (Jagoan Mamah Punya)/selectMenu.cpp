#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectMenu(int *selection,int *dimentionCyc,int *gameCyc){
	
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='w'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 1;
		}
	}else
	if (getchHolder=='a'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 1;
		}
	}else
	if (getchHolder=='s'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 1;
		}
	}else
	if (getchHolder=='d'){
		if (*selection==1){
			*selection = 2;
		}else
		if (*selection==2){
			*selection = 1;
		}
	}else
	if (getchHolder==' '){
		if (*selection==1){
			*selection = 1;
			*dimentionCyc = 1;
		}else
		if (*selection==2){
			*gameCyc = 0;
		}
	}
}
