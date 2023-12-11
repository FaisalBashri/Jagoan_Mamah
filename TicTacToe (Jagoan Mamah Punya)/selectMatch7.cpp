#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int i;
void selectMatch7(int *selection, int *matchCyc, int *resultCyc, int *gamingCyc,int *score1, int *score2, char TTTBoard7[49], int *playerTurn,int dimentionStatus, int levelStatus){
	int found;
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if(getchHolder=='w'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection>1){
					*selection = *selection-7;
					if (*selection<1){
						*selection = *selection + 48;
					}
					if (TTTBoard7[*selection-1]==' '){
						found = 1;
					}
				}else found = 1;
			}
		}
	}else
	if (getchHolder=='a'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection>1){
					*selection = *selection-1;
					if (TTTBoard7[*selection-1]==' '){
						found = 1;
					}
				}else found = 1;
			}
		}
	}else
	if (getchHolder=='s'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection<49&&found!=1){
					*selection = *selection + 7;
					if (*selection>49){
						*selection = *selection - 48;
					}
					if (*selection<50&&TTTBoard7[*selection-1]==' '){
						found = 1;
					}else {
						if (*selection==49){
							*selection = *selection-7;
							found=1;
						}
					}
				}else found = 1;
			}
		}
		
	}else
	if (getchHolder=='d'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection<49&&found!=1){
					*selection = *selection + 1;
					if (*selection<50&&TTTBoard7[*selection-1]==' '){
						found = 1;
					}else {
						if (*selection==49){
							*selection = *selection-1;
							found=1;
						}
					}
				}else found = 1;
			}
		}
		
	}else
	if (getchHolder==' '){
		if (*selection==0){
			if (*score1!=0||*score2!=0){
				historyIn(dimentionStatus,*score1,*score2,*gamingCyc,levelStatus);
			}
			*matchCyc = 0;
			*resultCyc = 0;
			*gamingCyc = 0;
			*selection = 1;
			for(i=0;i<49;i++){
				TTTBoard7[i]=' ';
			}
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard7[*selection-1] = 'x';
			*playerTurn = 2;
		}else
		if (*playerTurn==2){
			TTTBoard7[*selection-1] = 'o';
			*playerTurn = 1;
		}
	}	
}

void selectMatch7_PVC(int *selection, int *matchCyc, int *resultCyc,int *gamingCyc_PVC, int *gamingCyc,int *score1, int *score2, char TTTBoard7[49], int *playerTurn,int dimentionStatus, int levelStatus){
	int found;
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if(getchHolder=='w'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection>1){
					*selection = *selection-7;
					if (*selection<1){
						*selection = *selection + 48;
					}
					if (TTTBoard7[*selection-1]==' '){
						found = 1;
					}
				}else found = 1;
			}
		}
	}else
	if (getchHolder=='a'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection>1){
					*selection = *selection-1;
					if (TTTBoard7[*selection-1]==' '){
						found = 1;
					}
				}else found = 1;
			}
		}
	}else
	if (getchHolder=='s'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection<49&&found!=1){
					*selection = *selection + 7;
					if (*selection>49){
						*selection = *selection - 48;
					}
					if (*selection<50&&TTTBoard7[*selection-1]==' '){
						found = 1;
					}else {
						if (*selection==49){
							*selection = *selection-7;
							found=1;
						}
					}
				}else found = 1;
			}
		}
		
	}else
	if (getchHolder=='d'){
		if (*selection==0){
			*selection = 1;
		}else{
			while (found!=1){
				if (*selection<49&&found!=1){
					*selection = *selection + 1;
					if (*selection<50&&TTTBoard7[*selection-1]==' '){
						found = 1;
					}else {
						if (*selection==49){
							*selection = *selection-1;
							found=1;
						}
					}
				}else found = 1;
			}
		}
		
	}else
	if (getchHolder==' '){
		if (*selection==0){
			if (*score1!=0||*score2!=0){
				historyIn(dimentionStatus,*score1,*score2,*gamingCyc,levelStatus);
			}
			*matchCyc = 0;
			*resultCyc = 0;
			*gamingCyc_PVC = 0;
			*selection = 1;
			for(i=0;i<49;i++){
				TTTBoard7[i]=' ';
			}
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard7[*selection-1] = 'x';
			*playerTurn = 2;
		}
	}	
}

void selectedMatch7(char TTTBoard7[49], int *selection){
	for(int j=0;j<49;j++){
		if(TTTBoard7[j]=='?'){
			TTTBoard7[j]=' ';
		}
	}
	
	if (*selection>0){
		i = *selection-1;
		for (i=i;i<49;i++){
			if (TTTBoard7[i]==' '){
				TTTBoard7[i]='?';
				*selection = i + 1;
				break;
			}else 
			if (i>47){
				i=0;
				*selection = i + 1;
				break;
			}
		}
	}
}

void comLvl1SelectMatch7(int *playerTurn, char TTTBoard7[49]){
	int randIndex;
	int isFind;
	
	isFind=0;
	while (isFind!=1){
		randIndex = 131*rand()%25;
		if (TTTBoard7[randIndex]==' '){
			TTTBoard7[randIndex] = 'o';
			isFind = 1;
			*playerTurn = 1;
		}
	}
}
