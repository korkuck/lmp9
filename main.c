#include <stdlib.h>
#include <stdio.h>
#include "header.h"

int main(int argc, char *argv[])
{
	int m,n;

	if(argc !=4)
	{
		fprintf(stderr, "Aby poprawnie wywolac program podaj ilosc rownan, ilosc niewiadomych i gdzie jest macierz!");
		return 1;
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);

	czytaj_macierz(m,n,argv[3]);
	wypisz_macierz(m,n);

	return 0;
}
