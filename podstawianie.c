#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void podstaw(int m, int n)
{
	int i,j,ile_niewiadomych, wynik;
	if(m > n)
	{
		for(i=n;i<m;i++)
		{
			if(macierz[i][n]!=0)
			{
				printf("Uklad nieoznaczony!\n");
				przerwij_program = 1;
				return;
			}
		}
	}
	ile_niewiadomych=0;
	for(i = n-1;i>=0;i--)
	{
		ile_niewiadomych++;
		wynik = macierz[i][n];
		for(j = 1; j<ile_niewiadomych;j++)
		{
			wynik-=macierz[i][n-j]*v_wynikow[n-j];
		}
		v_wynikow[i]=wynik/macierz[i][i];
	}

}
