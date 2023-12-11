#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void playerNameIn1(int *namingCyc){
	char CC;
	char namaPlayer1[5]={' ',' ',' ',' ',' ',};
	char namaPlayer2[5]={' ',' ',' ',' ',' ',};
	int i;
	
	system("cls");
	printf("Masukkan nama Player 1 : "); scanf("%[^\n]",&namaPlayer1); fflush(stdin);
	
	
	FILE *FF1=fopen("namaPlayer1.txt","w");
	fprintf(FF1,"%s",namaPlayer1);
	fclose(FF1);
	*namingCyc=0;
}

void playerNameIn2(){
	char CC;
	char namaPlayer1[5]={' ',' ',' ',' ',' '};
	char namaPlayer2[5]={' ',' ',' ',' ',' '};
	int i;
	
	printf("Masukkan nama Player 2 : "); scanf("%[^\n]",&namaPlayer2); fflush(stdin);
	
	FILE *FF2=fopen("namaPlayer2.txt","w");
	fprintf(FF2,"%s",namaPlayer2);
	fclose(FF2);
}

void playerNameOut1(){
	FILE *FF1 = fopen("namaPlayer1.txt","r");
	int i=0;
	char CC=' ';
	while (i<5){
		CC=getc(FF1);
		printf("%c",CC);
		i++;
	}
	fclose(FF1);
}

void playerNameOut2(){
	FILE *FF2 = fopen("namaPlayer2.txt","r");
	int i=0;
	char CC=' ';
	while (i<5){
		CC=getc(FF2);
		printf("%c",CC);
		i++;
	}
	fclose(FF2);
}
