#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,ebob,ekok;
	printf("lutfen ebobu ve ekoku alancak sayilari griniz\n");
	scanf("%d%d",&a,&b);
	int s=2;
	while(s<=a&&s<=b)
	{
		if(a%s==0&&b%s==0)
		{
			ebob=s;
		}
		s++;
	}
	ekok=(a*b)/ebob;
	printf("%d%d",ebob,ekok);
	return 0;
}
