#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void selectedMatch3(int *selection, char boardKoord3[9]){
	if (*selection == 1 && boardKoord3[0] != '0'){
		*selection = 2;
	}
	if (*selection == 2 && boardKoord3[1] != '0'){
		*selection = 3;
	}
	if (*selection == 3 && boardKoord3[2] != '0'){
		*selection = 4;
	}
	if (*selection == 4 && boardKoord3[3] != '0'){
		*selection = 5;
	}
	if (*selection == 5 && boardKoord3[4] != '0'){
		*selection = 6;
	}
	if (*selection == 6 && boardKoord3[5] != '0'){
		*selection = 7;
	}
	if (*selection == 7 && boardKoord3[6] != '0'){
		*selection = 8;
	}
	if (*selection == 8 && boardKoord3[7] != '0'){
		*selection = 9;
	}
	if (*selection == 9 && boardKoord3[8] != '0'){
		*selection = 1;
	}
}
