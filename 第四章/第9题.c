#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  int num,indiv,ten,hundred,thousand,ten_thousand,place;      //分别代表个位,十位,百位,千位,万位和位数 
  printf("请输入一个整数(0-99999):\n");
  scanf("%d",&num);
  if(num>99999||num<0)
  {
  	printf("输入的数不符合要求，请按要求重新输入！\n");
  	scanf("%d",&num);
  }
  if (num>9999)
       place=5;
  else  if (num>999)
       place=4;
  else  if (num>99)
       place=3;
  else  if (num>9)
       place=2;
  else place=1;
  printf("位数为:%d\n",place);
  printf("每位数字为:");
  ten_thousand=num/10000;
  thousand=(int)(num-ten_thousand*10000)/1000;
  hundred=(int)(num-ten_thousand*10000-thousand*1000)/100;
  ten=(int)(num-ten_thousand*10000-thousand*1000-hundred*100)/10;
  indiv=(int)(num-ten_thousand*10000-thousand*1000-hundred*100-ten*10);
  switch(place)
    {case 5:printf("%d,%d,%d,%d,%d",ten_thousand,thousand,hundred,ten,indiv);
	    printf("\n反序数字为:");
	    printf("%d,%d,%d,%d,%d\n",indiv,ten,hundred,thousand,ten_thousand);
	    break;
     case 4:printf("%d,%d,%d,%d",thousand,hundred,ten,indiv);
	    printf("\n反序数字为:");
	    printf("%d,%d,%d,%d\n",indiv,ten,hundred,thousand);
	    break;
     case 3:printf("%d,%d,%d",hundred,ten,indiv);
	    printf("\n反序数字为:");
	    printf("%d,%d,%d\n",indiv,ten,hundred);
	    break;
     case 2:printf("%d,%d",ten,indiv);
	    printf("\n反序数字为:");
	    printf("%d,%d\n",indiv,ten);
	    break;
     case 1:printf("%d",indiv);
	    printf("\n反序数字为:");
	    printf("%d\n",indiv);
	    break;
      }

	return 0;
}
