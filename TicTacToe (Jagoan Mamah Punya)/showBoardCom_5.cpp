#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void boardCom1Lvl1_5(int playerTurn){
	system("cls");
	printf("	o======================================================================================================================================================o\n");//150 x (40x2)
	printf("	|                                                                                                                                                      |\n");
	printf("	|                                                                                                                                                      |\n");
	printf("	|             [][][][][][]   []    ][][][][][][   [][][][][][]    [][][][][]     ][][][][][][   [][][][][][]    ][][][][][    [][][][][][]             |\n");
	printf("	|                  []        []   [][                  []        [][      ][]   [][                  []        [][      ][]   []                       |\n");
	printf("	|                  []        []   []                   []        []        []   []                   []        []        []   []                       |\n");
	printf("	|                  []        []   []                   []        [][][][][][]   []                   []        []        []   [][][][][][]             |\n");
	printf("	|                  []        []   []                   []        []        []   []                   []        []        []   []                       |\n");
	printf("	|                  []        []   [][                  []        []        []   [][                  []        [][      ][]   []                       |\n");
	printf("	|                  []        []    ][][][][][][        []        []        []    ][][][][][][        []         ][][][][][    [][][][][][]             |\n");
	printf("	|                                                                                                                                                      |\n");
	printf("	|                                                                                                                                                      |\n");
	printf("	|             o==========================================================================================================================o             |\n");
	printf("	|             |                                                                                                                          |             |\n");
	printf("	|             |             ");
	
	if (playerTurn==1){
		printf("[]     []     []");
	}else printf("                ");
	
	printf("                                                                ");
	
	if (playerTurn==2){
		printf("[]     []     []");
	}else printf("                ");
	
	printf("             |             |\n");
	
	printf("	|             |             ");
	
	if (playerTurn==1){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	
	printf("                                                                ");
	
	if (playerTurn==2){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	
	printf("             |             |\n");
}

void boardCom2Lvl1_5(int playerTurn, char TTTBoard5[25], int selection){
	//baris ke 1
	printf("	|             |             ");
	
	if (playerTurn==1){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	
	printf("              ");
	
	switch (TTTBoard5[0]){
		case '0': {
			if (selection==1){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[1]){
		case '0': {
			if (selection==2){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[2]){
		case '0': {
			if (selection==3){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[3]){
		case '0': {
			if (selection==4){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[4]){
		case '0': {
			if (selection==5){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	
	printf("             ");
	
	if (playerTurn==2){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	
	printf("             |             |\n");
	
	//baris 2
	/************************************************************************/
	printf("	|             |             ");
	printf("PLAYER 1 : ");
	playerNameOut1();
	printf("              ");
	/************************************************************************/
	switch (TTTBoard5[0]){
		case '0': {
			if (selection==1){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[1]){
		case '0': {
			if (selection==2){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[2]){
		case '0': {
			if (selection==3){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[3]){
		case '0': {
			if (selection==4){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[4]){
		case '0': {
			if (selection==5){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}   
	
	printf("             C O M  (L V L 1)             |             |\n");
	
	//baris 3
	printf("	|             |                S C O R E                  ");
	switch (TTTBoard5[0]){
		case '0': {
			if (selection==1){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[1]){
		case '0': {
			if (selection==2){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[2]){
		case '0': {
			if (selection==3){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[3]){
		case '0': {
			if (selection==4){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[4]){
		case '0': {
			if (selection==5){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    
	printf("                 S C O R E                |             |\n");
}

void boardCom3Lvl1_5(){
	printf("	|             |             o--------------o              - - - o - - - o - - - o - - - o - - -             o--------------o             |             |\n");
}

void boardCom4Lvl1_5(char TTTBoard5[25], int selection, int score1, int score2){
	//baris ke 1
	printf("	|             |                                           ");
	switch (TTTBoard5[5]){
		case '0': {
			if (selection==6){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[6]){
		case '0': {
			if (selection==7){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[7]){
		case '0': {
			if (selection==8){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[8]){
		case '0': {
			if (selection==9){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[9]){
		case '0': {
			if (selection==10){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf("                                          |             |\n");
	
	//baris 2
	printf("	|             |                                           ");
	switch (TTTBoard5[5]){
		case '0': {
			if (selection==6){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[6]){
		case '0': {
			if (selection==7){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[7]){
		case '0': {
			if (selection==8){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[8]){
		case '0': {
			if (selection==9){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[9]){
		case '0': {
			if (selection==10){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    
	printf("                                          |             |\n");
	
	//baris 3
	printf("	|             |               ");
	switch (score1){
		//score baris ke 1
		case 0:{
			printf(" ][][][][][ ");
			break;
		}
		case 1: {
			printf("    ][]     ");
			break;
		}
		case 2: {
			printf(" ][][][][][ ");
			break;
		}
		case 3: {
			printf(" ][][][][][ ");
			break;
		}
		case 4: {
			printf("    []  []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf(" ][][][][][ ");
			break;
		}
		case 7: {
			printf(" ][][][][][]");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf(" ][][][][][ ");
			break;
		}
	}
	printf("                ");
	
	switch (TTTBoard5[5]){
		case '0': {
			if (selection==6){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[6]){
		case '0': {
			if (selection==7){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[7]){
		case '0': {
			if (selection==8){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[8]){
		case '0': {
			if (selection==9){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[9]){
		case '0': {
			if (selection==10){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    
	printf("               ");
	
	switch (score2){
		//score baris ke 1
		case 0: {
			printf(" ][][][][][ ");
			break;
		}
		case 1: {
			printf("    ][]     ");
			break;
		}
		case 2: {
			printf(" ][][][][][ ");
			break;
		}
		case 3: {
			printf(" ][][][][][ ");
			break;
		}
		case 4: {
			printf("    []  []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf(" ][][][][][ ");
			break;
		}
		case 7: {
			printf(" ][][][][][]");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf(" ][][][][][ ");
			break;
		}
	}
	printf("               |             |\n");
	
	//baris 4
	printf("        |             |               ");
	switch (score1){
		//score baris ke 2
		case 0:{
			printf("[][      ][]");
			break;
		}
		case 1: {
			printf("   [][]     ");
			break;
		}
		case 2: {
			printf("[][      ][]");
			break;
		}
		case 3: {
			printf("[]       ][]");
			break;
		}
		case 4: {
			printf("   []   []  ");
			break;
		}
		case 5: {
			printf("[]          ");
			break;
		}
		case 6: {
			printf("[][         ");
			break;
		}
		case 7: {
			printf("         [] ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("[][      ][]");
			break;
		}
	}
	printf("                - - - o - - - o - - - o - - - o - - -               ");
	switch (score2){
		//score baris ke 2
		case 0:{
			printf("[][      ][]");
			break;
		}
		case 1: {
			printf("   [][]     ");
			break;
		}
		case 2: {
			printf("[][      ][]");
			break;
		}
		case 3: {
			printf("[]       ][]");
			break;
		}
		case 4: {
			printf("   []   []  ");
			break;
		}
		case 5: {
			printf("[]          ");
			break;
		}
		case 6: {
			printf("[][         ");
			break;
		}
		case 7: {
			printf("         [] ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("[][      ][]");
			break;
		}
	}
	printf("               |             |\n");
	
	//baris 5
	printf("	|             |               ");
	switch (score1){
		//score baris ke 3
		case 0:{
			printf("[] []     []");
			break;
		}
		case 1: {
			printf("  [] []     ");
			break;
		}
		case 2: {
			printf("[]        []");
			break;
		}
		case 3: {
			printf("         ][]");
			break;
		}
		case 4: {
			printf("  []    []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf("[][         ");
			break;
		}
		case 7: {
			printf("        []  ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("[][       []");
			break;
		}
	}
	printf("                ");
	
	switch (TTTBoard5[10]){
		case '0': {
			if (selection==11){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[11]){
		case '0': {
			if (selection==12){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[12]){
		case '0': {
			if (selection==13){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[13]){
		case '0': {
			if (selection==14){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[14]){
		case '0': {
			if (selection==15){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    
	printf("               ");
	
	switch (score2){
		//score baris ke 3
		case 0:{
			printf("[] []     []");
			break;
		}
		case 1: {
			printf("  [] []     ");
			break;
		}
		case 2: {
			printf("[]        []");
			break;
		}
		case 3: {
			printf("         ][]");
			break;
		}
		case 4: {
			printf("  []    []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf("[][         ");
			break;
		}
		case 7: {
			printf("        []  ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("[][       []");
			break;
		}
	}
	printf("               |             |\n");
	
	//baris 6
	printf("        |             |               ");
	switch (score1){
		//score baris ke 4
		case 0:{
			printf("[]  [][]  []");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("         ][]");
			break;
		}
		case 3: {
			printf("   [][][][] ");
			break;
		}
		case 4: {
			printf(" []     []  ");
			break;
		}
		case 5: {
			printf("         ][]");
			break;
		}
		case 6: {
			printf("[][][][][][ ");
			break;
		}
		case 7: {
			printf("       []   ");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf(" ][][][][][]");
			break;
		}
	}
	printf("                ");
	
	switch (TTTBoard5[10]){
		case '0': {
			if (selection==11){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[11]){
		case '0': {
			if (selection==12){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[12]){
		case '0': {
			if (selection==13){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[13]){
		case '0': {
			if (selection==14){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[14]){
		case '0': {
			if (selection==15){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    
	printf("               ");
	
	switch (score2){
		//score baris ke 4
		case 0:{
			printf("[]  [][]  []");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("         ][]");
			break;
		}
		case 3: {
			printf("   [][][][] ");
			break;
		}
		case 4: {
			printf(" []     []  ");
			break;
		}
		case 5: {
			printf("         ][]");
			break;
		}
		case 6: {
			printf("[][][][][][ ");
			break;
		}
		case 7: {
			printf("       []   ");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf(" ][][][][][]");
			break;
		}
	}
	printf("               |             |\n");
	
	//baris 7
	printf("        |             |               ");
	switch (score1){
		//score baris ke 5
		case 0:{
			printf("[]     [] []");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("  [][][][][ ");
			break;
		}
		case 3: {
			printf("         ][]");
			break;
		}
		case 4: {
			printf("[][][][][][]");
			break;
		}
		case 5: {
			printf("          []");
			break;
		}
		case 6: {
			printf("[]        []");
			break;
		}
		case 7: {
			printf("      []    ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("          []");
			break;
		}
	}	
	printf("                ");
	
	switch (TTTBoard5[10]){
		case '0': {
			if (selection==11){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[11]){
		case '0': {
			if (selection==12){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[12]){
		case '0': {
			if (selection==13){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[13]){
		case '0': {
			if (selection==14){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[14]){
		case '0': {
			if (selection==15){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    
	printf("               ");
	
	switch (score2){
		//score baris ke 5
		case 0:{
			printf("[]     [] []");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("  [][][][][ ");
			break;
		}
		case 3: {
			printf("         ][]");
			break;
		}
		case 4: {
			printf("[][][][][][]");
			break;
		}
		case 5: {
			printf("          []");
			break;
		}
		case 6: {
			printf("[]        []");
			break;
		}
		case 7: {
			printf("      []    ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("          []");
			break;
		}
	}	
	printf("               |             |\n");
	
	//baris 8 
	printf("        |             |               ");
	switch (score1){
		//score baris ke 6
		case 0:{
			printf("[][      ][]");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("[][         ");
			break;
		}
		case 3: {
			printf("[]       ][]");
			break;
		}
		case 4: {
			printf("        []  ");
			break;
		}
		case 5: {
			printf("         ][]");
			break;
		}
		case 6: {
			printf("[][      ][]");
			break;
		}
		case 7: {
			printf("     []     ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("         ][]");
			break;
		}
	}
	printf("                - - - o - - - o - - - o - - - o - - -               ");
	switch (score2){
		//score baris ke 6
		case 0:{
			printf("[][      ][]");
			break;
		}
		case 1: {
			printf("     []     ");
			break;
		}
		case 2: {
			printf("[][         ");
			break;
		}
		case 3: {
			printf("[]       ][]");
			break;
		}
		case 4: {
			printf("        []  ");
			break;
		}
		case 5: {
			printf("         ][]");
			break;
		}
		case 6: {
			printf("[][      ][]");
			break;
		}
		case 7: {
			printf("     []     ");
			break;
		}
		case 8: {
			printf("[][      ][]");
			break;
		}
		case 9: {
			printf("         ][]");
			break;
		}
	}
	printf("               |             |\n");
	
	//baris 9
	printf("	|             |               ");
	switch (score1){
		//score baris ke 7
		case 0:{
			printf(" ][][][][][ ");
			break;
		}
		case 1: {
			printf(" ][][][][][ ");
			break;
		}
		case 2: {
			printf("[][][][][][]");
			break;
		}
		case 3: {
			printf(" ][][][][][ ");
			break;
		}
		case 4: {
			printf("        []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf(" ][][][][][ ");
			break;
		}
		case 7: {
			printf("     []     ");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf("[][][][][][ ");
			break;
		}
	}	
	printf("                ");
	switch (TTTBoard5[15]){
		case '0': {
			if (selection==16){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[16]){
		case '0': {
			if (selection==17){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[17]){
		case '0': {
			if (selection==18){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[18]){
		case '0': {
			if (selection==19){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[19]){
		case '0': {
			if (selection==20){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf("               ");
	switch (score2){
		//score baris ke 7
		case 0:{
			printf(" ][][][][][ ");
			break;
		}
		case 1: {
			printf(" ][][][][][ ");
			break;
		}
		case 2: {
			printf("[][][][][][]");
			break;
		}
		case 3: {
			printf(" ][][][][][ ");
			break;
		}
		case 4: {
			printf("        []  ");
			break;
		}
		case 5: {
			printf("[][][][][][ ");
			break;
		}
		case 6: {
			printf(" ][][][][][ ");
			break;
		}
		case 7: {
			printf("     []     ");
			break;
		}
		case 8: {
			printf(" ][][][][][ ");
			break;
		}
		case 9: {
			printf("[][][][][][ ");
			break;
		}
	}	
	printf("               |             |\n");
	
	//baris 10
	printf("	|             |                                           ");
	switch (TTTBoard5[15]){
		case '0': {
			if (selection==16){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[16]){
		case '0': {
			if (selection==17){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[17]){
		case '0': {
			if (selection==18){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[18]){
		case '0': {
			if (selection==19){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[19]){
		case '0': {
			if (selection==20){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    
	printf("                                          |             |\n");
	
	//baris 11
		printf("	|             |                                           ");
	switch (TTTBoard5[15]){
		case '0': {
			if (selection==16){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[16]){
		case '0': {
			if (selection==17){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[17]){
		case '0': {
			if (selection==18){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[18]){
		case '0': {
			if (selection==19){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[19]){
		case '0': {
			if (selection==20){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf("                                          |             |\n");
}

void boardCom5Lvl1_5(){
	printf("	|             |                                           - - - o - - - o - - - o - - - o - - -                                          |             |\n");
}

void boardCom6Lvl1_5(int playerTurn, char TTTBoard5[25], int selection){
	//baris 1
	printf("	|             |                                           ");
	switch (TTTBoard5[20]){
		case '0': {
			if (selection==21){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[21]){
		case '0': {
			if (selection==22){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[22]){
		case '0': {
			if (selection==23){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[23]){
		case '0': {
			if (selection==24){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[24]){
		case '0': {
			if (selection==25){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf("                                          |             |\n");
	
	//baris 2
	printf("	|             |                                           ");
	switch (TTTBoard5[20]){
		case '0': {
			if (selection==21){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[21]){
		case '0': {
			if (selection==22){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[22]){
		case '0': {
			if (selection==23){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[23]){
		case '0': {
			if (selection==24){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[24]){
		case '0': {
			if (selection==25){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("  X  ");
			break;
		}
		case 'o': {
			printf("O   O");
			break;
		}
	}
	printf("                                          |             |\n");
	
	//baris 3
	printf("	|             |                                           ");
	switch (TTTBoard5[20]){
		case '0': {
			if (selection==21){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[21]){
		case '0': {
			if (selection==22){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf(" : ");
	switch (TTTBoard5[22]){
		case '0': {
			if (selection==23){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
		case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}printf(" : ");
	switch (TTTBoard5[23]){
		case '0': {
			if (selection==24){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}    printf(" : ");
	switch (TTTBoard5[24]){
		case '0': {
			if (selection==25){
				printf("? ? ?");
			} else {
				printf("     ");
			}
			break;
		}
			case 'x': {
			printf("X   X");
			break;
		}
		case 'o': {
			printf("O O O");
			break;
		}
	}
	printf("                                          |             |\n");
}

void boardCom7Lvl1_5(int selection){
	if (selection==0){
		printf("	|             |                                                                                                                          |             |\n");
		printf("	|             |                                                                                                                          |             |\n");
		printf("	|    >   o - - - - o   <                                                                                                                 |             |\n");
		printf("	|    o>> : B A C K : <<o ================================================================================================================o             |\n");
		printf("	|    >   o - - - - o   <                                                                                                                               |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");	
	}else {
		printf("	|             |                                                                                                                          |             |\n");
		printf("	|             |                                                                                                                          |             |\n");
		printf("	|        o - - - - o                                                                                                                     |             |\n");
		printf("	|        : B A C K :=====================================================================================================================o             |\n");
		printf("	|        o - - - - o                                                                                                                                   |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");
	}
}
