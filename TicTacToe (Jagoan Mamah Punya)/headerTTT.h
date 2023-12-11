#ifndef headerTTT_h
#define headerTTT_h
#include <stdio.h>

/********* FITUR showMenu *********/
void showMenu(int selection);
/**********************************/

/********* FITUR showDimention *********/
void showDimention(int selection);
/***************************************/

/********* FITUR showMode *********/
void showMode(int selection);
/**********************************/

/********* FITUR showLvl **********/
void showLvl(int selection);
/**********************************/

/********* FITUR match3 *********/
/*sub-Fitur showBoard*/
void board1_3();
void board2_3(int playerTurn, int selection,char TTTBoard3[9]);
void board3_3();
void board4_3(int score1, int score2, int selection,char TTTBoard3[9]);
void board5_3();
void board6_3(int selection,char TTTBoard3[9]);
void board7_3(int selection);

void boardCom1Lvl1_3();
void boardCom2Lvl1_3(int playerTurn, int selection,char TTTBoard3[9]);
void boardCom3Lvl1_3();
void boardCom4Lvl1_3(int score1, int score2, int selection,char TTTBoard3[9]);
void boardCom5Lvl1_3();
void boardCom6Lvl1_3(int selection,char TTTBoard3[9]);
void boardCom7Lvl1_3(int selection);
/*sub-Fitur logic3*/
char TTTLogic_3(char TTTBoard3[9],int *resultCyc, int score1, int score2,int *selection,int *matchCyc);
/********************************/

/********** FITUR match5 **********/
/*sub-fitur showBoard*/
void board1_5(int playerTurn);
void board2_5(int playerTurn, char TTTBoard5[25], int selection);
void board3_5();
void board4_5(char TTTBoard5[25], int selection, int score1, int score2);
void board5_5();
void board6_5(int playerTurn, char TTTBoard5[25], int selection);
void board7_5(int selection);

void boardCom1Lvl1_5(int playerTurn);
void boardCom2Lvl1_5(int playerTurn, char TTTBoard5[25], int selection);
void boardCom3Lvl1_5();
void boardCom4Lvl1_5(char TTTBoard5[25], int selection, int score1, int score2);
void boardCom5Lvl1_5();
void boardCom6Lvl1_5(int playerTurn, char TTTBoard5[25], int selection);
void boardCom7Lvl1_5(int selection);
/*sub-fitur logic5*/
char TTTLogic_5(char TTTBoard5[25], int *matchCyc,int *resultCyc,int *selection);
/**********************************/

/********** FITUR match7 **********/
/*sub-fitur showBoard*/
void board_7(int playerTurn, char TTTBoard7[49],int score1, int score2, int selection);

void boardCom1Lvl1_7(int playerTurn, char TTTBoard7[49],int score1, int score2, int selection);
/*sub-fitur logic7*/
char TTTLogic_7(char TTTBoard7[49],int *resultCyc, int score1, int score2,int *selection,int *matchCyc);
/**********************************/

/********* FITUR showMatchResult *********/
void matchResult1();
void matchResult2(int score1, int score2, int selection, char winner);
void matchResult3();
void matchResult4(char winner);
void matchResult5(char winner);
void matchResult6(char winner);
void matchResult7(char winner);
/****************************************/

/********* FITUR scoreLogic *********/
void scoreLogic(char winner, int *score1, int *score2, int *selection);
/************************************/

/********* FITUR select *********/
void selectMenu(int *selection,int *dimentionCyc,int *gameCyc);
void selectDimention(int *selection,int *dimentionCyc, int *modeCyc, int *dimentionStatus);
void selectMode(int *selection,int *modeCyc,int *matchCyc,int *lvlCyc, int *gamingCyc, int *playerTurn,int *namingCyc);
void selectLvl(int *selection,int *lvlCyc , int *matchComCyc, int *gamingCyc_PVC, int *levelStatus);
void selectMatch3(int *selection, char TTTBoard3[9], int *matchCyc, int *resultCyc,int *playerTurn, int *gamingCyc,int *score1, int *score2, int dimentionStatus, int levelStatus);
void selectMatch3_PVC(int *selection, char TTTBoard3[9], int *matchCyc, int *resultCyc,int *playerTurn,int *gamingCyc_PVC, int *gamingCyc, int *score1, int *score2,int dimentionStatus, int levelStatus);
void comLvl1SelectMatch3(int *playerTurn, char TTTBoard3[9]);
void selectedMatch3(int *selection, char TTTBoard3[9]);
void selectResult(int *selection, int *score1, int *score2, int *resultCyc, char TTTBoard3[9], int *matchCyc, int *gamingCyc,int *gamingCyc_PVC, char TTTBoard5[25],char TTTBoard7[49],int dimentionStatus, int levelStatus);
void selectMatch5(int *selection, int *matchCyc, int *resultCyc, int *gamingCyc,int *score1, int *score2, char TTTBoard5[25], int *playerTurn, int dimentionStatus, int levelStatus);
void selectMatch5_PVC(int *selection, int *matchCyc, int *resultCyc,int *gamingCyc_PVC, int *gamingCyc,int *score1, int *score2, char TTTBoard5[25], int *playerTurn,int dimentionStatus, int levelStatus);
void comLvl1SelectMatch5(int *playerTurn, char TTTBoard5[25]);
void selectedMatch5(int *selection, char TTTBoard5[25]);
void selectMatch7(int *selection, int *matchCyc, int *resultCyc, int *gamingCyc,int *score1, int *score2, char TTTBoard7[49], int *playerTurn,int dimentionStatus, int levelStatus);
void selectMatch7_PVC(int *selection, int *matchCyc, int *resultCyc,int *gamingCyc_PVC, int *gamingCyc,int *score1, int *score2, char TTTBoard7[49], int *playerTurn,int dimentionStatus, int levelStatus);
void comLvl1SelectMatch7(int *playerTurn, char TTTBoard7[49]);
void selectedMatch7(char TTTBoard7[49],int *selection);
/********************************/

/********* FITUR naming *********/
void playerNameIn1(int *namingCyc);
void playerNameIn2();
void playerNameOut1();
void playerNameOut2();
/********************************/

/********* FITUR count *********/
void delay(int ms);
/*******************************/

/********* FITUR saving *********/
void historyIn(int dimentionStatus,int score1, int score2, int gamingCyc, int levelStatus);
/********************************/
#endif
