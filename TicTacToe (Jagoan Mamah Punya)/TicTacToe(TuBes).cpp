#include <iostream>
#include "menuTTT.h"
#include <conio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char selecting;
	char select;
	int cycStatus;
	select = '0';
	cycStatus = 1;
	showMenuPlay(&select);
	while (cycStatus == 1){		//pengkondisian kapan game harus berhenti
		selecting = getch();
		if (selecting=='w'){
			showMenuPlay(&select);
		}
		if (selecting=='s'){
			showMenuExit(&select);
		}
		if (selecting==' '){
			if (select=='1'){
				system("cls");
				printf("kamu kaya hayam");
			}
			if (select=='2'){
				cycStatus = 0;
			}
		}
	}
}
