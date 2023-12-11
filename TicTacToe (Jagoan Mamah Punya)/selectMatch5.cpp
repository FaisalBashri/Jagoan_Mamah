#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectMatch5(int *selection, int *matchCyc, int *resultCyc, int *gamingCyc,int *score1, int *score2, char TTTBoard5[25], int *playerTurn, int dimentionStatus, int levelStatus){
	int found,i;
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		i = *selection - 6;
		
		while (i>-5){
			if (i<0){
				i = i + 24;
			}
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = -5;
			}else i = i - 5;
		}
	}else
	if (getchHolder=='a'){
		i = *selection - 2;
		
		while (i>-1){
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = -1;
			}else i = i - 1;
		}
	}else
	if (getchHolder=='s'){
		i = *selection + 4;
		
		while (i<29){
			if (i>24){
				i = i - 24;
			}
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = 29;
			}else i = i + 5;
		}
	}else
	if (getchHolder=='d'){
		i = *selection;
		while (i<25){
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = 25;
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
			TTTBoard5[0]='0';TTTBoard5[1]='0';TTTBoard5[2]='0';TTTBoard5[3]='0';TTTBoard5[4]='0';
			TTTBoard5[5]='0';TTTBoard5[6]='0';TTTBoard5[7]='0';TTTBoard5[8]='0';TTTBoard5[9]='0';
			TTTBoard5[10]='0';TTTBoard5[11]='0';TTTBoard5[12]='0';TTTBoard5[13]='0';TTTBoard5[14]='0';
			TTTBoard5[15]='0';TTTBoard5[16]='0';TTTBoard5[17]='0';TTTBoard5[18]='0';TTTBoard5[19]='0';
			TTTBoard5[20]='0';TTTBoard5[21]='0';TTTBoard5[22]='0';TTTBoard5[23]='0';TTTBoard5[24]='0';
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard5[*selection-1] = 'x';
			*playerTurn = 2;
		}else
		if (*playerTurn==2){
			TTTBoard5[*selection-1] = 'o';
			*playerTurn = 1;
		}
	}
}

void selectMatch5_PVC(int *selection, int *matchCyc, int *resultCyc,int *gamingCyc_PVC, int *gamingCyc,int *score1, int *score2, char TTTBoard5[25], int *playerTurn, int dimentionStatus, int levelStatus){
	int found,i;
	char getchHolder;
	getchHolder = getch();
	
	if (getchHolder=='b'){
		*selection = 0;
	}else
	if (getchHolder=='w'){
		i = *selection - 6;
		
		while (i>-5){
			if (i<0){
				i = i + 24;
			}
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = -5;
			}else i = i - 5;
		}
	}else
	if (getchHolder=='a'){
		i = *selection - 2;
		
		while (i>-1){
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = -1;
			}else i = i - 1;
		}
	}else
	if (getchHolder=='s'){
		i = *selection + 4;
		
		while (i<29){
			if (i>24){
				i = i - 24;
			}
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = 29;
			}else i = i + 5;
		}
	}else
	if (getchHolder=='d'){
		i = *selection;
		while (i<25){
			if (TTTBoard5[i]=='0'){
				*selection = i+1;
				i = 25;
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
			TTTBoard5[0]='0';TTTBoard5[1]='0';TTTBoard5[2]='0';TTTBoard5[3]='0';TTTBoard5[4]='0';
			TTTBoard5[5]='0';TTTBoard5[6]='0';TTTBoard5[7]='0';TTTBoard5[8]='0';TTTBoard5[9]='0';
			TTTBoard5[10]='0';TTTBoard5[11]='0';TTTBoard5[12]='0';TTTBoard5[13]='0';TTTBoard5[14]='0';
			TTTBoard5[15]='0';TTTBoard5[16]='0';TTTBoard5[17]='0';TTTBoard5[18]='0';TTTBoard5[19]='0';
			TTTBoard5[20]='0';TTTBoard5[21]='0';TTTBoard5[22]='0';TTTBoard5[23]='0';TTTBoard5[24]='0';
			*score1 = 0;*score2 = 0;
		}else
		if (*playerTurn==1){
			TTTBoard5[*selection-1] = 'x';
			*playerTurn = 2;
		}
	}
}

void selectedMatch5(int *selection, char TTTBoard5[25]){
	if (*selection == 1 && TTTBoard5[0] != '0'){
		*selection = 2;
	}
	if (*selection == 2 && TTTBoard5[1] != '0'){
		*selection = 3;
	}
	if (*selection == 3 && TTTBoard5[2] != '0'){
		*selection = 4;
	}
	if (*selection == 4 && TTTBoard5[3] != '0'){
		*selection = 5;
	}
	if (*selection == 5 && TTTBoard5[4] != '0'){
		*selection = 6;
	}
	if (*selection == 6 && TTTBoard5[5] != '0'){
		*selection = 7;
	}
	if (*selection == 7 && TTTBoard5[6] != '0'){
		*selection = 8;
	}
	if (*selection == 8 && TTTBoard5[7] != '0'){
		*selection = 9;
	}
	if (*selection == 9 && TTTBoard5[8] != '0'){
		*selection = 10;
	}
	if (*selection == 10 && TTTBoard5[9] != '0'){
		*selection = 11;
	}
	if (*selection == 11 && TTTBoard5[10] != '0'){
		*selection = 12;
	}
	if (*selection == 12 && TTTBoard5[11] != '0'){
		*selection = 13;
	}
	if (*selection == 13 && TTTBoard5[12] != '0'){
		*selection = 14;
	}
	if (*selection == 14 && TTTBoard5[13] != '0'){
		*selection = 15;
	}
	if (*selection == 15 && TTTBoard5[14] != '0'){
		*selection = 16;
	}
	if (*selection == 16 && TTTBoard5[15] != '0'){
		*selection = 17;
	}
	if (*selection == 17 && TTTBoard5[16] != '0'){
		*selection = 18;
	}
	if (*selection == 18 && TTTBoard5[17] != '0'){
		*selection = 19;
	}
	if (*selection == 19 && TTTBoard5[18] != '0'){
		*selection = 20;
	}
	if (*selection == 20 && TTTBoard5[19] != '0'){
		*selection = 21;
	}
	if (*selection == 21 && TTTBoard5[20] != '0'){
		*selection = 22;
	}
	if (*selection == 22 && TTTBoard5[21] != '0'){
		*selection = 23;
	}
	if (*selection == 23 && TTTBoard5[22] != '0'){
		*selection = 24;
	}
	if (*selection == 24 && TTTBoard5[23] != '0'){
		*selection = 25;
	}
	if (*selection == 25 && TTTBoard5[24] != '0'){
		*selection = 1;
	}
}

void comLvl1SelectMatch5(int *playerTurn, char TTTBoard5[25]){
	int randIndex;
	int isFind;
	
	isFind=0;
	while (isFind!=1){
		randIndex = 17*rand()%25;
		if (TTTBoard5[randIndex]=='0'){
			TTTBoard5[randIndex] = 'o';
			isFind = 1;
			*playerTurn = 1;
		}
	}
}
