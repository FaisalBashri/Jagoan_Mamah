#include "headerTTT.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char TTTLogic_7(char TTTBoard7[49],int *resultCyc, int score1, int score2,int *selection,int *matchCyc){
		for(int m=0;m<49;m+=7){
			for(int n=0;n<3;n++){
				if(	TTTBoard7[m+n]=='x'&&TTTBoard7[m+1+n]=='x'&&TTTBoard7[m+2+n]=='x'&&TTTBoard7[m+3+n]=='x'&&TTTBoard7[m+4+n]=='x')		//kondisi menang player 1 secara horizontal
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'x';
				}
			}
		}
		
		for(int m=0;m<42;m+=7){
			for(int n=0;n<7;n++){
				if(	TTTBoard7[m+n]=='x'&&TTTBoard7[m+7+n]=='x'&&TTTBoard7[m+14+n]=='x'&&TTTBoard7[m+21+n]=='x'&&TTTBoard7[m+28+n]=='x')		//kondisi menang player 1 secara vertikal
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'x';
				}
			}
		}
		
		for(int m=0;m<49;m+=7){
			for(int n=0;n<3;n++){
				if(	TTTBoard7[m+n]=='x'&&TTTBoard7[m+8+n]=='x'&&TTTBoard7[m+16+n]=='x'&&TTTBoard7[m+24+n]=='x'&&TTTBoard7[m+32+n]=='x')		//kondisi menang player 1 secara diagonal kanan bawah
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'x';
				}
			}
		}
		
		for(int m=4;m<49;m+=7){
			for(int n=0;n<5;n++){
				if(	TTTBoard7[m+n]=='x'&&TTTBoard7[m+6+n]=='x'&&TTTBoard7[m+12+n]=='x'&&TTTBoard7[m+18+n]=='x'&&TTTBoard7[m+24+n]=='x')		//kondisi menang player 1 secara diagonal kanan atas
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'x';
				}
			}
		}
		
		for(int m=0;m<49;m+=7){
			for(int n=0;n<3;n++){
				if(	TTTBoard7[m+n]=='o'&&TTTBoard7[m+1+n]=='o'&&TTTBoard7[m+2+n]=='o'&&TTTBoard7[m+3+n]=='o'&&TTTBoard7[m+4+n]=='o')		//kondisi menang player 2 secara horizontal
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'o';
				}
			}
		}
		
		for(int m=0;m<42;m+=7){
			for(int n=0;n<7;n++){
				if(	TTTBoard7[m+n]=='o'&&TTTBoard7[m+7+n]=='o'&&TTTBoard7[m+14+n]=='o'&&TTTBoard7[m+21+n]=='o'&&TTTBoard7[m+28+n]=='o')		//kondisi menang player 2 secara vertikal
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'o';
				}
			}
		}
		
		for(int m=0;m<49;m+=7){
			for(int n=0;n<3;n++){
				if(	TTTBoard7[m+n]=='o'&&TTTBoard7[m+8+n]=='o'&&TTTBoard7[m+16+n]=='o'&&TTTBoard7[m+24+n]=='o'&&TTTBoard7[m+32+n]=='o')		//kondisi menang player 2 secara diagonal kanan bawah
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'o';
				}
			}
		}
		
		for(int m=4;m<49;m+=7){
			for(int n=0;n<5;n++){
				if(	TTTBoard7[m+n]=='o'&&TTTBoard7[m+6+n]=='o'&&TTTBoard7[m+12+n]=='o'&&TTTBoard7[m+18+n]=='o'&&TTTBoard7[m+24+n]=='o')		//kondisi menang player 2 secara diagonal kanan atas
				{
					*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
					return 'o';
				}
			}
		}

		int terisi=1;					//ini tuh sebenernya variable buat menyatakan kalau semua indeks terisi sama huruf, pertama di set dulu 1, baru dicek, kalau ada yang kosong, jadiin 0
		for (int k=0;k<49;k++){			//ini ngecek semua indeks, apakah ada yang kosong atau ngga, kalau ada, variable terisi jadi 0, terus lgsg break
			if(TTTBoard7[k]==' '){
				terisi=0;
				break;
			}
		}
		if (terisi==1){		//nah kalau udah dicek dan ternyata gaada yang kosong, tapi gaada yang menang (status kemenangannya diliat dari cyc1) bakal masuk ke kondisi seri
			*selection=2;
					*resultCyc=1;
					*matchCyc = 0;
			return 'd';
		}else if (score1==10){
			*selection=2;
			*resultCyc=1;
			*matchCyc = 0;
			return 'x';
		}else if (score2==10){
			*selection=2;
			*resultCyc=1;
			*matchCyc = 0;
			return 'o';
		}
}

