#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int  a,n,i=1,sn=0,tn=0;
  printf("a,n=:");
  scanf("%d,%d",&a,&n);
  while (i<=n)
  {
  tn=tn+a;  
  sn=sn+tn;
  a=a*10;
  ++i;
  }
  printf("a+aa+aaa+...=%d\n",sn);

	return 0;
}
