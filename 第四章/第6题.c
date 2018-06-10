#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("«Î ‰»ÎXµƒ÷µ£∫\n");
	scanf("%d",x);
	if(x<1)
	{
		y=x;
	}
	else if(x>=1&&x<10)
	{
		y=2*x-1;
	}
	else if(x>=10) 
	{
	    y=3*x-11;
	} 
	printf("y=%d",y); 
	return 0;
}
