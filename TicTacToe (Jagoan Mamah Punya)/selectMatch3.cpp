#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectMatch3(int *selection, char TTTBoard3[9], int *matchCyc, int *resultCyc,int *playerTurn, int *gamingCyc, int *score1, int *score2, int dimentionStatus, int levelStatus){
	char getchHolder;
	int i;
	
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		i = *selection - 4;
		while (i>-3){
			if (i<0){
				i = i + 8;
			}
			if (TTTBoard3[i]=='0'){
				*selection = i + 1;
				i = -3;
			}else i = i - 3;
		}
	}else
	if (getchHolder=='a'){
		i = *selection - 2;
		while (i>-1){
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = -1;
			}else i = i - 1;
		}
	}else
	if (getchHolder=='s'){
		i = *selection + 2;
		
		while (i<11){
			if (i>8){
				i = i - 8;
			}
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = 11;
			}else i = i + 3;
		}
	}else
	if (getchHolder=='d'){
		i = *selection;
		while (i<9){
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = 9;
			}else i = i + 1;
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
			TTTBoard3[0]='0';TTTBoard3[1]='0';TTTBoard3[2]='0';
			TTTBoard3[3]='0';TTTBoard3[4]='0';TTTBoard3[5]='0';
			TTTBoard3[6]='0';TTTBoard3[7]='0';TTTBoard3[8]='0';
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard3[*selection-1] = 'x';
			*playerTurn = 2;
		}else
		if (*playerTurn==2){
			TTTBoard3[*selection-1] = 'o';
			*playerTurn = 1;
		}
	}
}

void selectMatch3_PVC(int *selection, char TTTBoard3[9], int *matchCyc, int *resultCyc,int *playerTurn,int *gamingCyc_PVC, int *gamingCyc, int *score1, int *score2,int dimentionStatus, int levelStatus){
	char getchHolder;
	int i;
	
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		i = *selection - 4;
		while (i>-3){
			if (i<0){
				i = i + 8;
			}
			if (TTTBoard3[i]=='0'){
				*selection = i + 1;
				i = -3;
			}else i = i - 3;
		}
	}else
	if (getchHolder=='a'){
		i = *selection - 2;
		while (i>-1){
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = -1;
			}else i = i - 1;
		}
	}else
	if (getchHolder=='s'){
		i = *selection + 2;
		
		while (i<11){
			if (i>8){
				i = i - 8;
			}
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = 11;
			}else i = i + 3;
		}
	}else
	if (getchHolder=='d'){
		i = *selection;
		while (i<9){
			if (TTTBoard3[i]=='0'){
				*selection = i+1;
				i = 9;
			}else i = i + 1;
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
			TTTBoard3[0]='0';TTTBoard3[1]='0';TTTBoard3[2]='0';
			TTTBoard3[3]='0';TTTBoard3[4]='0';TTTBoard3[5]='0';
			TTTBoard3[6]='0';TTTBoard3[7]='0';TTTBoard3[8]='0';
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard3[*selection-1] = 'x';
			*playerTurn = 2;
		}
	}
}

void selectedMatch3(int *selection, char TTTBoard3[9]){
	if (*selection == 1 && TTTBoard3[0] != '0'){
		*selection = 2;
	}
	if (*selection == 2 && TTTBoard3[1] != '0'){
		*selection = 3;
	}
	if (*selection == 3 && TTTBoard3[2] != '0'){
		*selection = 4;
	}
	if (*selection == 4 && TTTBoard3[3] != '0'){
		*selection = 5;
	}
	if (*selection == 5 && TTTBoard3[4] != '0'){
		*selection = 6;
	}
	if (*selection == 6 && TTTBoard3[5] != '0'){
		*selection = 7;
	}
	if (*selection == 7 && TTTBoard3[6] != '0'){
		*selection = 8;
	}
	if (*selection == 8 && TTTBoard3[7] != '0'){
		*selection = 9;
	}
	if (*selection == 9 && TTTBoard3[8] != '0'){
		*selection = 1;
	}
}

void comLvl1SelectMatch3(int *playerTurn, char TTTBoard3[9]){
	int randIndex;
	int isFind;
	
	isFind=0;
	while (isFind!=1){
		randIndex = 13*rand()%9;
		if (TTTBoard3[randIndex]=='0'){
			TTTBoard3[randIndex] = 'o';
			isFind = 1;
			*playerTurn = 1;
		}
	}
}
