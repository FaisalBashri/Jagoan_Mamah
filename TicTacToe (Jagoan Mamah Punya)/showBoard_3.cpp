#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void board1_3(){
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
}

void board2_3(int playerTurn, int selection, char TTTBoard3[9]){
	printf("	|             |           ");
	
	if (playerTurn==1){
		printf("[]     []     []");
	}else printf("                ");
	
	printf("                         :                :                         ");
	
	if (playerTurn==2){
		printf("[]     []     []");
	}else printf("                ");
	
	printf("           |             |\n");
	
	//baris ke 1
	printf("	|             |           ");
	
	if (playerTurn==1){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	
	printf("            ");
	
	switch (TTTBoard3[0]){
		case '0': {
			if (selection==1){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	
	printf("   :   ");
	
	switch (TTTBoard3[1]){
		case '0': {
			if (selection==2){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	
	printf("   :   ");
	
	switch (TTTBoard3[2]){
		case '0': {
			if (selection==3){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	
	printf("            ");
	
	if (playerTurn==2){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	
	printf("           |             |\n");
	
	//baris ke 2
	printf("	|             |           ");
	
	if (playerTurn==1){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	
	printf("            ");
	
	switch (TTTBoard3[0]){
		case '0': {
			if (selection==1){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[1]){
		case '0': {
			if (selection==2){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[2]){
		case '0': {
			if (selection==3){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("            ");
	
	if (playerTurn==2){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	
	printf("           |             |\n");
	
	//baris ke 3
	/************************************************************************/
	printf("	|             |           ");
	printf("PLAYER 1 : ");
	playerNameOut1();
	printf("            ");
	/************************************************************************/
	switch (TTTBoard3[0]){
		case '0': {
			if (selection==1){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[1]){
		case '0': {
			if (selection==2){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[2]){
		case '0': {
			if (selection==3){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	
	/************************************************************************/
	printf("            ");
	printf("PLAYER 2 : ");
	playerNameOut2();
	printf("           |             |\n");
	/************************************************************************/
	
	//baris ke 4
	printf("	|             |              S C O R E                ");
	switch (TTTBoard3[0]){
		case '0': {
			if (selection==1){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[1]){
		case '0': {
			if (selection==2){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[2]){
		case '0': {
			if (selection==3){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("               S C O R E               |             |\n");
	
	//baris ke 5
	printf("	|             |           o--------------o            ");
	switch (TTTBoard3[0]){
		case '0': {
			if (selection==1){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[1]){
		case '0': {
			if (selection==2){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[2]){
		case '0': {
			if (selection==3){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("            o--------------o           |             |\n");
}

void board3_3(){
	printf("	|             |                                                    :                :                                                    |             |\n");
	printf("	|             |                                      - - - - - - - o- - - - - - - - o - - - - - - -                                      |             |\n");
}

void board4_3(int score1, int score2, int selection,char TTTBoard3[9]){
	printf("	|             |             ");
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
	printf("              ");
	printf("             :                :             ");
	printf("              ");
	
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
	printf("             |             |\n");
	
	//baris ke 1
	printf("	|             |             ");
	switch (score1){
		//score baris ke 2
		case 0: {
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
	printf("              ");
	switch (TTTBoard3[3]){
		case '0': {
			if (selection==4){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[4]){
		case '0': {
			if (selection==5){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[5]){
		case '0': {
			if (selection==6){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("              ");
	switch (score2){
		//score baris ke 2
		case 0: {
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
	printf("             |             |\n");
	
	//baris ke 2
	printf("	|             |             ");
	switch (score1){
		//score baris ke 3
		case 0: {
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
	printf("              ");
	switch (TTTBoard3[3]){
		case '0': {
			if (selection==4){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[4]){
		case '0': {
			if (selection==5){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[5]){
		case '0': {
			if (selection==6){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("              ");
	switch (score2){
		//score baris ke 3
		case 0: {
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
	printf("             |             |\n");
	
	
	//baris ke 3
	printf("	|             |             ");
	switch (score1){
		case 0: {
			//baris score ke 4
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
	printf("              ");
	switch (TTTBoard3[3]){
		case '0': {
			if (selection==4){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
		switch (TTTBoard3[4]){
		case '0': {
			if (selection==5){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
		switch (TTTBoard3[5]){
		case '0': {
			if (selection==6){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("              ");
	switch (score2){
		case 0: {
			//baris score ke 4
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
	printf("             |             |\n");
	
	//baris ke 4
	printf("	|             |             ");
	switch (score1){
		case 0: {
			//baris score ke 5
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
	printf("              ");
	switch (TTTBoard3[3]){
		case '0': {
			if (selection==4){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[4]){
		case '0': {
			if (selection==5){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[5]){
		case '0': {
			if (selection==6){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("              ");
	switch (score2){
		case 0: {
			//baris score ke 5
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
	printf("             |             |\n");
	
	//baris ke 5
	printf("	|             |             ");
	switch (score1){
		case 0: {
			//baris score ke 5
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
	printf("              ");
	switch (TTTBoard3[3]){
		case '0': {
			if (selection==4){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[4]){
		case '0': {
			if (selection==5){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[5]){
		case '0': {
			if (selection==6){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("              ");
	switch (score2){
		case 0: {
			//baris score ke 5
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
	printf("             |             |\n");
	
	//baris ke 6
	printf("	|             |             ");
	switch (score1){
		case 0: {
			//baris score ke 5
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
	printf("              ");
	printf("             :                :             ");
	printf("              ");
	switch (score2){
		case 0: {
			//baris score ke 5
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
	printf("             |             |\n");
}

void board5_3(){
	printf("	|             |                                      - - - - - - - o- - - - - - - - o - - - - - - -                                      |             |\n");
	printf("	|             |                                                    :                :                                                    |             |\n");
}

void board6_3(int selection,char TTTBoard3[9]){
	//baris ke 1
	printf("	|             |                                       ");
	switch (TTTBoard3[6]){
		case '0': {
			if (selection==7){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[7]){
		case '0': {
			if (selection==8){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[8]){
		case '0': {
			if (selection==9){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("                                       |             |\n");
	
	//baris ke 2
	printf("	|             |                                       ");
	switch (TTTBoard3[6]){
		case '0': {
			if (selection==7){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[7]){
		case '0': {
			if (selection==8){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[8]){
		case '0': {
			if (selection==9){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("                                       |             |\n");
	
	//baris ke 3
	printf("	|             |                                       ");
	switch (TTTBoard3[6]){
		case '0': {
			if (selection==7){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
		switch (TTTBoard3[7]){
		case '0': {
			if (selection==8){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
		switch (TTTBoard3[8]){
		case '0': {
			if (selection==9){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("    []    ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("                                       |             |\n");
	
	//baris ke 4
	printf("	|             |                                       ");
	switch (TTTBoard3[6]){
		case '0': {
			if (selection==7){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[7]){
		case '0': {
			if (selection==8){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[8]){
		case '0': {
			if (selection==9){
				printf("?? ? ? ? ?");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("  []  []  ");
			break;
		}
		case 'o': {
			printf("[]      []");
			break;
		}
	}
	printf("                                       |             |\n");
	
	//baris ke 5
	printf("	|             |                                       ");
	switch (TTTBoard3[6]){
		case '0': {
			if (selection==7){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[7]){
		case '0': {
			if (selection==8){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("   :   ");
	switch (TTTBoard3[8]){
		case '0': {
			if (selection==9){
				printf("? ? ? ? ??");
			} else {
				printf("          ");
			}
			break;
		}
		case 'x': {
			printf("[]      []");
			break;
		}
		case 'o': {
			printf("  [][][]  ");
			break;
		}
	}
	printf("                                       |             |\n");
}

void board7_3(int selection){
	if (selection==0){
		printf("	|             |                                                    :                :                                                    |             |\n");
		printf("	|    >   o - - - - o   <                                                                                                                 |             |\n");
		printf("	|    o>> : B A C K : <<o ================================================================================================================o             |\n");
		printf("	|    >   o - - - - o   <                                                                                                                               |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");	
	}else {
		printf("	|             |                                                    :                :                                                    |             |\n");
		printf("	|        o - - - - o                                                                                                                     |             |\n");
		printf("	|        : B A C K :=====================================================================================================================o             |\n");
		printf("	|        o - - - - o                                                                                                                                   |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");
	}

}
