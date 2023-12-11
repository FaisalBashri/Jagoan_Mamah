#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void boardCom1Lvl1_7(int playerTurn, char TTTBoard7[49],int score1, int score2, int selection){
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
	//baris 1 player turn
	printf("	|             |             ");
	if (playerTurn==1){
		printf("[]     []     []");
	}else printf("                ");
	printf("                                                                ");
	if (playerTurn==2){
		printf("[]     []     []");
	}else printf("                ");
	printf("             |             |\n");
	//baris 2 player turn
	printf("	|             |             ");
	
	if (playerTurn==1){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	printf("                                                                ");
	if (playerTurn==2){
		printf("[][]  ][][  [][]");
	}else printf("                ");
	printf("             |             |\n");
	//baris 3 player turn
	printf("	|             |             ");
	if (playerTurn==1){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	printf("                                                                ");
	if (playerTurn==2){
		printf(" ][][][][][][][ ");
	}else printf("                ");
	printf("             |             |\n");
	
	/************************************************************************/
	printf("	|             |             ");
	printf("PLAYER 1 : ");
	playerNameOut1();
	printf("                                                                ");
	printf("C O M  (L V L 1)");
	printf("             |             |\n");
	/************************************************************************/
	printf("	|             |                S C O R E                                                                        S C O R E                |             |\n");
	printf("	|             |             o--------------o                    %c : %c : %c : %c : %c : %c : %c                   o--------------o             |             |\n",TTTBoard7[0], TTTBoard7[1], TTTBoard7[2], TTTBoard7[3], TTTBoard7[4], TTTBoard7[5], TTTBoard7[6]);
	printf("	|             |                                                ---------------------------                                               |             |\n");
	printf("	|             |                                                 %c : %c : %c : %c : %c : %c : %c                                                |             |\n",TTTBoard7[7], TTTBoard7[8], TTTBoard7[9], TTTBoard7[10], TTTBoard7[11], TTTBoard7[12], TTTBoard7[13]);
	
	printf("        |             |               ");
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
	printf("                     ---------------------------                    ");
	switch (score2){
		//score baris ke-1
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
	
	printf("        |             |               ");
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
	printf("                      %c : %c : %c : %c : %c : %c : %c                     ",TTTBoard7[14], TTTBoard7[15], TTTBoard7[16], TTTBoard7[17], TTTBoard7[18], TTTBoard7[19], TTTBoard7[20]);
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
	printf("               |             |\n");
	
	printf("	|             |               ");
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
	
	printf("                     ---------------------------                    ");
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
	printf("               |             |\n");
	
	printf("	|             |               ");
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
	
	printf("                      %c : %c : %c : %c : %c : %c : %c                     ",TTTBoard7[21], TTTBoard7[22], TTTBoard7[23], TTTBoard7[24], TTTBoard7[25], TTTBoard7[26], TTTBoard7[27]);
	
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
	printf("               |             |\n");
	
	printf("	|             |               ");
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
	printf("                     ---------------------------                    ");
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
	printf("               |             |\n");
	
	printf("	|             |               ");
	switch (score1){
		case 0: {
			//baris score ke 6
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
	printf("                      %c : %c : %c : %c : %c : %c : %c                     ",TTTBoard7[28], TTTBoard7[29], TTTBoard7[30], TTTBoard7[31], TTTBoard7[32], TTTBoard7[33], TTTBoard7[34]);
	switch (score2){
		case 0: {
			//baris score ke 6
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
	
	printf("	|             |               ");
	switch (score1){
		case 0: {
			//baris score ke 7
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
	
	printf("                     ---------------------------                    ");
	
	switch (score2){
		case 0: {
			//baris score ke 7
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
	
	printf("	|             |                                                 %c : %c : %c : %c : %c : %c : %c                                                |             |\n",TTTBoard7[35], TTTBoard7[36], TTTBoard7[37], TTTBoard7[38], TTTBoard7[39], TTTBoard7[40], TTTBoard7[41]);
	printf("	|             |                                                ---------------------------                                               |             |\n");
	printf("	|             |                                                 %c : %c : %c : %c : %c : %c : %c                                                |             |\n",TTTBoard7[42], TTTBoard7[43], TTTBoard7[44], TTTBoard7[45], TTTBoard7[46], TTTBoard7[47], TTTBoard7[48]);
	printf("	|             |                                                                                                                          |             |\n");
	printf("	|             |                                                                                                                          |             |\n");
	printf("	|             |                                                                                                                          |             |\n");
	printf("	|             |                                                                                                                          |             |\n");
	printf("	|             |                                                                                                                          |             |\n");
	if (selection==0){
		printf("	|    >   o - - - - o   <                                                                                                                 |             |\n");
		printf("	|    o>> : B A C K : <<o ================================================================================================================o             |\n");
		printf("	|    >   o - - - - o   <                                                                                                                               |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");	
	}else {
		printf("	|        o - - - - o                                                                                                                     |             |\n");
		printf("	|        : B A C K :=====================================================================================================================o             |\n");
		printf("	|        o - - - - o                                                                                                                                   |\n");
		printf("	|                                                                                                                                                      |\n");
		printf("	o======================================================================================================================================================o\n");
	}
	printf("Ketik WASD untuk pindah dan spasi untuk meletakkan symbol = ");
}

