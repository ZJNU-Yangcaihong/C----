#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,k;
	printf("������һ��С��1000������i:\n");
	scanf("%d",&i);
	if(i>1000)
	{
		printf("�������������Ҫ���밴Ҫ����������!\n");
		scanf("%d",&i);
	}
	k=sqrt(i);
	printf("%d��ƽ������������Ϊ��%d\n",i,k);
	return 0;
}
