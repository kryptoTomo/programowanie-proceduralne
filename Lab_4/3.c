#include <stdio.h>
#include<stdlib.h>
int main()
{	
	int a;
	int *pas = NULL;
	printf("Podaj Wysokość Trójkąta Pascala: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		pas = (int*)realloc(pas, i*sizeof(int));
		*pas = 1;
		*(pas+i-1)=1;
		if(i>2)
		{
			int x,y,l=*(pas);
			for(y = 1;y<i-1;y++)
			{
				x=*(pas+y);
				*(pas+y)=*(pas+y)+l;
				l=x;
			}
		}
		printf(" %4.d.",i);
		for(int z = 0;z<a-i+10;z++)
			printf(" ");
		for(int p =0;p<i;p++)
			printf("%2.d ",*(pas+p));
		printf("\n");
	}
	free(pas);
	return 0;
}