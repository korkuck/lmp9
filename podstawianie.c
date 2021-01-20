#include <stdlib.h>
#include <stdio.h>
#include "header.h"

void podstaw(int m, int n)
{
	int i,j, wiersz,ile_niewiadomych, wynik;
	if(m > n)
	{
		wiersz=n;
		for(i=wiersz;i<m;i++)
		{
			if(macierz[i][n]!=0)
			{
				printf("Uklad nieoznaczony!\n");
				return;
			}
		}
	}
	wiersz=n-1;
	ile_niewiadomych=0;
	for(i = wiersz;i>=0;i--)
	{
		ile_niewiadomych++;
		wynik = macierz[wiersz][n];
		for(j = 1; j<ile_niewiadomych;j++)
		{
			wynik-=macierz[wiersz][n-j]*v_wynikow[n-j];
		}
		v_wynikow[i]=wynik/macierz[wiersz][i];
	}

}
