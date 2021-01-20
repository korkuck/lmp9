#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int main(int argc, char *argv[])
{
	int m,n;

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
	wypisz_macierz(m,n);
	schodkuj(m,n);
	wypisz_macierz(m,n);
	return 0;
}
