#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c,i;
	a=1;
	b=1;
	
    for(i=1;i<=10;i++)
	{
	c=a+b;
	a=b;
	b=c;
	 printf("%d\n",c);
	}
	
	
	
	return 0;
}
