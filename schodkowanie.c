#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void schodkuj(int m, int n)
{
	int trololo;
	int i,j,k; //zmienne pomocnicze do petli
	double mnoznik; //zmienna ta przyda sie do "schodkowania" macierzy - bedzie wygladac estetyczniej
	n=n+1;
	for(i = 0; i < m; i++)
	{
		trololo = 1;
		if(macierz[i][i]==0)
		{
			for(k = i+1; k < m; k++)
			{
				if(macierz[k][i]!=0)
				{
					zamien(i,k,n-1);
					trololo = 0;
					break;
				}
			}
		}
		for(k = i + 1; k < m; k++)
		{
			if (trololo == 1)//układ nieoznaczony
			{
				printf("Uklad jest nieoznaczony!\n");
				break;
			}
			mnoznik = (macierz[k][i]/macierz[i][i]);
			for(j = i; j < n; j++)
			{
				macierz[k][j] = macierz[k][j] - mnoznik * macierz[i][j];
			}
		}
	}
}
