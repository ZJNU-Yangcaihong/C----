#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#define PI 3.1415926
	int r;
	float aera;
	printf("请输入圆的面积：\n");
	scanf("%d",&r);
	aera=PI*r*r;
	printf("圆周率PI=%.7f，半径r=%d\n",PI,r);
	printf("圆的面积aera=%.9f",aera);
	return 0;
}
