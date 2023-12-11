#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void scoreLogic(char winner, int *score1, int *score2, int *selection){
	if (winner=='x'||winner=='w'){
		*score1 = *score1 + 1;
	}else if (winner=='o'||winner=='l'){
		*score2 = *score2 + 1;
	}
	if (*score1==10||*score2==10){
		*selection = 1;
	}
}
