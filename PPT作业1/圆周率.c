#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#define PI 3.1415926
	int r;
	float aera;
	printf("������Բ�������\n");
	scanf("%d",&r);
	aera=PI*r*r;
	printf("Բ����PI=%.7f���뾶r=%d\n",PI,r);
	printf("Բ�����aera=%.9f",aera);
	return 0;
}
