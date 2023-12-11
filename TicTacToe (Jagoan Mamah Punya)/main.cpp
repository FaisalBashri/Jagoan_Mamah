#include "headerTTT.h"
#include "globVar.h"
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	selection = 1;
	gameCyc = 1;
	dimentionCyc = 0;
	modeCyc = 0;
	matchCyc = 0;
	lvlCyc = 0;
	while (gameCyc==1){		//pengkondisian kapan game harus berhenti
		showMenu(selection);
		selectMenu(&selection,&dimentionCyc,&gameCyc);
		while (dimentionCyc==1){
			showDimention(selection);
			selectDimention(&selection,&dimentionCyc,&modeCyc,&dimentionStatus);
			while (modeCyc==1){
				showMode(selection);
				selectMode(&selection,&modeCyc,&matchCyc,&lvlCyc,&gamingCyc,&playerTurn,&namingCyc);
				while (namingCyc==1){
					if (gamingCyc==1){
						playerNameIn1(&namingCyc);
						playerNameIn2();
					}else {
						playerNameIn1(&namingCyc);
					}
				}
				while (gamingCyc==1){
					while (matchCyc==1&&dimentionStatus==3){
						selectedMatch3(&selection,TTTBoard3);
						board1_3();
						board2_3(playerTurn,selection,TTTBoard3);
						board3_3();
						board4_3(score1,score2,selection,TTTBoard3);
						board5_3();
						board6_3(selection,TTTBoard3);
						board7_3(selection);
						selectMatch3(&selection,TTTBoard3,&matchCyc,&resultCyc,&playerTurn, &gamingCyc,&score1,&score2,dimentionStatus,levelStatus);
						selectedMatch3(&selection,TTTBoard3);
						winner = TTTLogic_3(TTTBoard3,&resultCyc,score1,score2,&selection,&matchCyc);
					}
					while (matchCyc==1&&dimentionStatus==5){
						selectedMatch5(&selection,TTTBoard5);
						board1_5(playerTurn);
						board2_5(playerTurn, TTTBoard5, selection);
						board3_5();
						board4_5(TTTBoard5,selection,score1,score2);
						board5_5();
						board6_5(playerTurn,TTTBoard5,selection);
						board7_5(selection);
						selectMatch5(&selection,&matchCyc,&resultCyc,&gamingCyc,&score1,&score2,TTTBoard5,&playerTurn,dimentionStatus,levelStatus);
						selectedMatch5(&selection,TTTBoard5);
						winner = TTTLogic_5(TTTBoard5,&matchCyc,&resultCyc,&selection);
					}
					while (matchCyc==1&&dimentionStatus==7){
						selectedMatch7(TTTBoard7,&selection);
						board_7(playerTurn,TTTBoard7,score1,score2,selection);
						selectMatch7(&selection,&matchCyc,&resultCyc,&gamingCyc,&score1,&score2,TTTBoard7,&playerTurn,dimentionStatus,levelStatus);
						selectedMatch7(TTTBoard7,&selection);
						winner = TTTLogic_7(TTTBoard7,&resultCyc,score1,score2,&selection,&matchCyc);
					}
					scoreLogic(winner,&score1,&score2,&selection);
					while (resultCyc==1){
						matchResult1();
						matchResult2(score1,score2,selection,winner);
						matchResult3();
						matchResult4(winner);
						matchResult5(winner);
						matchResult6(winner);
						matchResult7(winner);
						selectResult(&selection, &score1, &score2, &resultCyc, TTTBoard3, &matchCyc,&gamingCyc,&gamingCyc_PVC, TTTBoard5, TTTBoard7, dimentionStatus, levelStatus);
					}
				}
				while(lvlCyc==1){
					showLvl(selection);
					selectLvl(&selection,&lvlCyc,&matchComCyc,&gamingCyc_PVC,&levelStatus);
					while(gamingCyc_PVC==1&&dimentionStatus==3){
						while (matchComCyc==1&&levelStatus==1){
							selectedMatch3(&selection,TTTBoard3);
							boardCom1Lvl1_3();
							boardCom2Lvl1_3(playerTurn,selection,TTTBoard3);
							boardCom3Lvl1_3();
							boardCom4Lvl1_3(score1,score2,selection,TTTBoard3);
							boardCom5Lvl1_3();
							boardCom6Lvl1_3(selection,TTTBoard3);
							boardCom7Lvl1_3(selection);
							if (playerTurn==1){
								selectMatch3_PVC(&selection,TTTBoard3,&matchComCyc,&resultCyc,&playerTurn,&gamingCyc_PVC,&gamingCyc,&score1,&score2,dimentionStatus,levelStatus);
							}else
							if (playerTurn==2){
								delay(1000);
								comLvl1SelectMatch3(&playerTurn,TTTBoard3);
							}
							selectedMatch3(&selection,TTTBoard3);
							winner = TTTLogic_3(TTTBoard3,&resultCyc,score1,score2,&selection,&matchComCyc);
						}
						while (matchComCyc==1&&levelStatus==2){
							
						}
						while (matchComCyc==1&&levelStatus==3){
							
						}
						scoreLogic(winner,&score1,&score2,&selection);
						while (resultCyc==1){
							matchResult1();
							matchResult2(score1,score2,selection,winner);
							matchResult3();
							matchResult4(winner);
							matchResult5(winner);
							matchResult6(winner);
							matchResult7(winner);
							selectResult(&selection, &score1, &score2, &resultCyc, TTTBoard3, &matchComCyc,&gamingCyc,&gamingCyc_PVC, TTTBoard5, TTTBoard7,dimentionStatus,levelStatus);
						}
					}
					
					while(gamingCyc_PVC==1&&dimentionStatus==5){
						while (matchComCyc==1&&levelStatus==1){
							selectedMatch5(&selection,TTTBoard5);
							boardCom1Lvl1_5(playerTurn);
							boardCom2Lvl1_5(playerTurn, TTTBoard5, selection);
							boardCom3Lvl1_5();
							boardCom4Lvl1_5(TTTBoard5,selection,score1,score2);
							boardCom5Lvl1_5();
							boardCom6Lvl1_5(playerTurn,TTTBoard5,selection);
							boardCom7Lvl1_5(selection);
							if (playerTurn==1){
								selectMatch5_PVC(&selection,&matchComCyc,&resultCyc,&gamingCyc_PVC,&gamingCyc,&score1,&score2,TTTBoard5,&playerTurn,dimentionStatus,levelStatus);
							}else
							if (playerTurn==2){
								delay(1000);
								comLvl1SelectMatch5(&playerTurn,TTTBoard5);
							}
							selectedMatch5(&selection,TTTBoard5);
							winner = TTTLogic_5(TTTBoard5,&matchComCyc,&resultCyc,&selection);
						}
						while (matchComCyc==1&&levelStatus==2){
							
						}
						while (matchComCyc==1&&levelStatus==3){
							
						}
						scoreLogic(winner,&score1,&score2,&selection);
						while (resultCyc==1){
							matchResult1();
							matchResult2(score1,score2,selection,winner);
							matchResult3();
							matchResult4(winner);
							matchResult5(winner);
							matchResult6(winner);
							matchResult7(winner);
							selectResult(&selection, &score1, &score2, &resultCyc, TTTBoard3, &matchComCyc,&gamingCyc,&gamingCyc_PVC, TTTBoard5, TTTBoard7,dimentionStatus,levelStatus);
						}
					}
					
					while(gamingCyc_PVC==1&&dimentionStatus==7){
						while (matchComCyc==1&&levelStatus==1){
							selectedMatch7(TTTBoard7,&selection);
							boardCom1Lvl1_7(playerTurn,TTTBoard7,score1,score2,selection);
							if (playerTurn==1){
								selectMatch7_PVC(&selection,&matchComCyc,&resultCyc,&gamingCyc_PVC,&gamingCyc,&score1,&score2,TTTBoard7,&playerTurn,dimentionStatus,levelStatus);
							}else
							if (playerTurn==2){
								delay(1000);
								comLvl1SelectMatch7(&playerTurn,TTTBoard7);
							}
							selectedMatch7(TTTBoard7,&selection);
							winner = TTTLogic_7(TTTBoard7,&resultCyc,score1,score2,&selection,&matchComCyc);
						}
						while (matchComCyc==1&&levelStatus==2){
							
						}
						while (matchComCyc==1&&levelStatus==3){
							
						}
						scoreLogic(winner,&score1,&score2,&selection);
						while (resultCyc==1){
							matchResult1();
							matchResult2(score1,score2,selection,winner);
							matchResult3();
							matchResult4(winner);
							matchResult5(winner);
							matchResult6(winner);
							matchResult7(winner);
							selectResult(&selection, &score1, &score2, &resultCyc, TTTBoard3, &matchComCyc,&gamingCyc,&gamingCyc_PVC, TTTBoard5, TTTBoard7,dimentionStatus,levelStatus);
						}
					}
				}
			}
		}
	}
}
