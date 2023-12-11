#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void historyIn(int dimentionStatus,int score1, int score2, int gamingCyc, int levelStatus){
	char nameHolder[5]={' ',' ',' ',' ',' '};
	char charHolder=' ';
	int i;
	FILE *FF1;
	FILE *FF2;
	FILE *HISTORY = fopen("history.txt","a");
	
	switch (dimentionStatus){
		case 3 :{
			if (gamingCyc==1){
				fprintf(HISTORY,"xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox player vs player (3x3) oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==1){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv1  (3x3) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==2){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv2  (3x3) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==3){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv3  (3x3) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}
			break;
		}
		case 5 :{
			if (gamingCyc==1){
				fprintf(HISTORY,"xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox player vs player (5x5) oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==1){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv1  (5x5) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==2){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv2  (5x5) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==3){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv3  (5x5) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}
			break;
		}
		case 7 :{
			if (gamingCyc==1){
				fprintf(HISTORY,"xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxox player vs player (7x7) oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==1){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv1  (7x7) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==2){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv2  (7x7) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}else
			if (levelStatus==3){
				fprintf(HISTORY,"oxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo player vs computer Lv3  (7x7) xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo\n");
			}
			break;
		}
	}
	fprintf(HISTORY,"                                                                                                                          \n");
	/******************************************************************************************/
	FF1 = fopen("namaPlayer1.txt","r");
	i=0;
	while ((charHolder = getc(FF1))!=EOF&&i<5){
		nameHolder[i] = charHolder;
		i++;
	}
	if (score1==10){
		fprintf(HISTORY,"PLAYER 1 : ");fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"(SCORE : %i)",score1);fprintf(HISTORY,"                                                                                             \n");
	}else{
		fprintf(HISTORY,"PLAYER 1 : ");fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"(SCORE : %i)",score1);fprintf(HISTORY,"                                                                                              \n");
	}
	fclose(FF1);
	/******************************************************************************************/
	if (gamingCyc==1){
		FF2 = fopen("namaPlayer2.txt","r");
		i=0;
		while (i<5){
			nameHolder[i]=' ';
			i++;
		}
		i=0;
		while ((charHolder = getc(FF2))!=EOF&&i<5){
			nameHolder[i] = charHolder;
			i++;
		}
		if (score2==10){
			fprintf(HISTORY,"PLAYER 2 : ");fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"(SCORE : %i)",score2);fprintf(HISTORY,"                                                                                             \n");
		}else{
			fprintf(HISTORY,"PLAYER 2 : ");fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"(SCORE : %i)",score2);fprintf(HISTORY,"                                                                                              \n");
		}
		fclose(FF2);
	}else
	if (levelStatus==1){
		if (score2==10){
			fprintf(HISTORY,"COMPUTER : LV.1 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                              \n");
		}else
		fprintf(HISTORY,"COMPUTER : LV.1 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                               \n");
	}else
	if (levelStatus==2){
		if (score2==10){
			fprintf(HISTORY,"COMPUTER : LV.2 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                              \n");
		}else
		fprintf(HISTORY,"COMPUTER : LV.2 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                               \n");
	}else
	if (levelStatus==3){
		if (score2==10){
			fprintf(HISTORY,"COMPUTER : LV.3 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                              \n");
		}else
		fprintf(HISTORY,"COMPUTER : LV.3 (SCORE : %i)",score2);fprintf(HISTORY,"                                                                                               \n");
	}
	/******************************************************************************************/
	if (score1>score2){
		FF1 = fopen("namaPlayer1.txt","r");
		i=0;
		while (i<5){
			nameHolder[i]=' ';
			i++;
		}
		i=0;
		while ((charHolder = getc(FF1))!=EOF&&i<5){
			nameHolder[i] = charHolder;
			i++;
		}
		fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"IS WIN :D !!!");fprintf(HISTORY,"                                                                                                       \n");
		fclose(FF1);
	}else if (score1<score2){
		if (gamingCyc==1){
			FF2 = fopen("namaPlayer2.txt","r");
			i=0;
			while (i<5){
				nameHolder[i]=' ';
				i++;
			}
			i=0;
			while ((charHolder = getc(FF2))!=EOF&&i<5){
				nameHolder[i] = charHolder;
				i++;
			}
			fprintf(HISTORY,"%s ",nameHolder);fprintf(HISTORY,"IS WIN :D !!!");fprintf(HISTORY,"                                                                                                       \n");
			fclose(FF2);
		}else fprintf(HISTORY,"(T-T) YOU LOOSE (T-T)                                                                                                     \n");
	}else fprintf(HISTORY,"(?-?) GAME DRAW (?-?)                                                                                                     \n");
	/******************************************************************************************/
	fprintf(HISTORY,"                                                                                                                          \n");
	/******************************************************************************************/
	fprintf(HISTORY,"xoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxoxo#\n");
	
	fclose(HISTORY);
}
