#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int main(int argc, char *argv[])
{
	int i;
	int m,n;

	przerwij_program = 0;

	if(argc !=4)
	{
		fprintf(stderr, "Aby poprawnie wywolac program podaj ilosc rownan, ilosc niewiadomych i gdzie jest macierz!\n");
		return 1;
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	
	if(m < n)
	{
		printf("Uklad nie posiada jednoznacznego rozwiazania!\n");
		return 0;
	}

	czytaj_macierz(m,n,argv[3]);
	if(przerwij_program==1)
		return 1;
	//wypisz_macierz(m,n);
	schodkuj(m,n);
	for(i = 0; i < n; i++)
		if(macierz[i][i] == 0)
		{
			printf("Uklad nie posiada jednoznacznego rozwiazania!\n");
			return 0;
		}
	//wypisz_macierz(m,n);
	podstaw(m,n);
	if(przerwij_program != 1)
	wypisz_wyniki(n);
	return 0;
}
