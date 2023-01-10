#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("lutfen bir n degeri giriniz\n");
	scanf("%d",&n);
	int dizi[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("lutfen dizinin %d. degerlerini giriniz\n",i+1,j+1);
			scanf("%d%d",&dizi[i][j]);
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(dizi[j]<dizi[i])
			{
				int gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[i]=gecici;
				
			
			}
		}
	}

		for(j=0;j<n;j++)
		{
			printf("%d",dizi[j]);
		}
	
	
	
	return 0;
}
