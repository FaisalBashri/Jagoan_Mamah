#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectedMatch5(int *selection, char TTTboard[25]){
	if (*selection == 1 && TTTboard[0] != '0'){
		*selection = 2;
	}
	if (*selection == 2 && TTTboard[1] != '0'){
		*selection = 3;
	}
	if (*selection == 3 && TTTboard[2] != '0'){
		*selection = 4;
	}
	if (*selection == 4 && TTTboard[3] != '0'){
		*selection = 5;
	}
	if (*selection == 5 && TTTboard[4] != '0'){
		*selection = 6;
	}
	if (*selection == 6 && TTTboard[5] != '0'){
		*selection = 7;
	}
	if (*selection == 7 && TTTboard[6] != '0'){
		*selection = 8;
	}
	if (*selection == 8 && TTTboard[7] != '0'){
		*selection = 9;
	}
	if (*selection == 9 && TTTboard[8] != '0'){
		*selection = 10;
	}
	if (*selection == 10 && TTTboard[9] != '0'){
		*selection = 11;
	}
	if (*selection == 11 && TTTboard[10] != '0'){
		*selection = 12;
	}
	if (*selection == 12 && TTTboard[11] != '0'){
		*selection = 13;
	}
	if (*selection == 13 && TTTboard[12] != '0'){
		*selection = 14;
	}
	if (*selection == 14 && TTTboard[13] != '0'){
		*selection = 15;
	}
	if (*selection == 15 && TTTboard[14] != '0'){
		*selection = 16;
	}
	if (*selection == 16 && TTTboard[15] != '0'){
		*selection = 17;
	}
	if (*selection == 17 && TTTboard[16] != '0'){
		*selection = 18;
	}
	if (*selection == 18 && TTTboard[17] != '0'){
		*selection = 19;
	}
	if (*selection == 19 && TTTboard[18] != '0'){
		*selection = 20;
	}
	if (*selection == 20 && TTTboard[19] != '0'){
		*selection = 21;
	}
	if (*selection == 21 && TTTboard[20] != '0'){
		*selection = 22;
	}
	if (*selection == 22 && TTTboard[21] != '0'){
		*selection = 23;
	}
	if (*selection == 23 && TTTboard[22] != '0'){
		*selection = 24;
	}
	if (*selection == 24 && TTTboard[23] != '0'){
		*selection = 25;
	}
	if (*selection == 25 && TTTboard[24] != '0'){
		*selection = 1;
	}
}
