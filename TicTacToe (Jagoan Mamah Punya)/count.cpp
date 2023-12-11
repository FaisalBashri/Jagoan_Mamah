#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

void delay(int ms){
	clock_t timeDelay = ms + clock();
	while (timeDelay > clock());
}
