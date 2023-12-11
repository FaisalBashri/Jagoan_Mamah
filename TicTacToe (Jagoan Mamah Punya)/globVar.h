#ifndef globVar_h
#define globVar_h

int dimentionStatus,levelStatus=0;
int gameCyc,selection,playerTurn= 1;
int dimentionCyc,modeCyc,matchCyc,resultCyc,lvlCyc,matchComCyc,gamingCyc,namingCyc,gamingCyc_PVC,score1,score2 = 0;
char TTTBoard3[9] = {
'0','0','0',
'0','0','0',
'0','0','0'
};
char TTTBoard5[25] = {
'0','0','0','0','0',
'0','0','0','0','0',
'0','0','0','0','0',
'0','0','0','0','0',
'0','0','0','0','0'
};
char TTTBoard7[49] = {
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' ',
' ',' ',' ',' ',' ',' ',' '
};
char winner;

#endif
