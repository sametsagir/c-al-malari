#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int dizi[5];

	int i,j;
	for(i=0;i<5;i++)
	{
		printf("lutfen dizinin %d.elemaninini giriniz\n",i+1);
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<5;i++)
	
	{
		for(j=i+1;j<5;j++)
		{
			if(dizi[i]>dizi[j])
			{
				  int sicaklik=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=sicaklik;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%d",dizi[i]);
	}
	

}
