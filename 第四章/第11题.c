#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int  t,a,b,c,d;
  printf("请输入四个数:");
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  if (a>b)
    { t=a;a=b;b=t;}
  else if (a>c)
    { t=a;a=c;c=t;}
  else if (a>d)
    { t=a;a=d;d=t;}
  else if (b>c)
    { t=b;b=c;c=t;}
  else if (b>d)
    { t=b;b=d;d=t;}
  else(c>d)
    { t=c;c=d;d=t;}
  printf("从小到大排序结果如下: \n");
  printf("%d  %d  %d  %d  \n",a,b,c,d);


	return 0;
}
