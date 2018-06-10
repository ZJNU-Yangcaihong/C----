#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int m,s,i;
  for (m=2;m<1000;m++)
    {s=0;
     for (i=1;i<m;i++)
       if ((m%i)==0) s=s+i;
     if(s==m)
      {printf("%d,its factors are ",m);
       for (i=1;i<m;i++)
	 if (m%i==0)  printf("%d ",i);
       printf("\n");
	   }
    }

	return 0;
}
