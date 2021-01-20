#include <stdio.h>
#include <stdlib.h>

void schodkuj(int m, int n)
{
	int i,j,k; //zmienne pomocnicze do petli
	double mnoznik; //zmienna ta przyda sie do "schodkowania" macierzy - bedzie wygladac estetyczniej

	for(i = 0; i < m; i++)
	{
		mnoznik = (macierz[i+1][i]/macierz[i][i]);
		for(k = i + 1; k < m; k++)
			for(j = i; j < n; j++)
				macierz[k][j] = macierz[k][j] - mnoznik * macierz[i][j];
	}
}
