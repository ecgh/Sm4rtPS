// Edna G.
// MINESWEEPER

//Librerías
#include <stdio.h>


//Main 
int main()
{
	int m,n;
	int field=0;
	scanf("%d %d", &n, &m);
	//Validación 00
	while (n!=0 && m!=0)
	{
		field++;
		int a[m][n];
		//Inicializando
		int i,j;
		for (i=0; i<m; i++) 
			for (j=0; j<n; j++) 
				a[i][j]=0;
		for (i=0; i<m; i++)
		{
			char x[n];
			scanf("%s", x);
			for (j=0; j<n; j++)
			{
				if (x[j]=='*')
				{
					a[i][j]=9;
					if (i<m-1 && j<n-1) 
						a[i+1][j+1]++;
					if (j<n-1) 
						a[i][j+1]++;
					if (i>0 && j<n-1) 
						a[i-1][j+1]++;
					if (i>0) 
						a[i-1][j]++;
					if (i>0 && j>0) 
						a[i-1][j-1]++;
					if (j>0) 
						a[i][j-1]++;
					if (i<m-1 && j>0) 
						a[i+1][j-1]++;
					if (i<m-1) 
						a[i+1][j]++;
				}
			}
		}
		printf("Field #%d:\n", field);
		for (i=0; i<m; i++)
		{
			//Imprimiendo
			for (j=0; j<n; j++)
			{
				if (a[i][j]>=9) 
					printf("*");
				else 
					printf("%d", a[i][j]);
			}
			printf("\n");
		}
		scanf("%d %d", &n, &m);
	}
	return 0;
}
