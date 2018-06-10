#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,k;
	printf("请输入一个小于1000的整数i:\n");
	scanf("%d",&i);
	if(i>1000)
	{
		printf("输入的数不符合要求，请按要求重新输入!\n");
		scanf("%d",&i);
	}
	k=sqrt(i);
	printf("%d的平方根整数部分为：%d\n",i,k);
	return 0;
}
