//Технологично училище Електронни системи към ТУ София
//11 А клас
//Номер 9
//Даниел Красимиров Цоков
//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери сумата на всички нечетни числа в интервала [x,y].
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int n,m;
    int x;
    int sum=0;


        printf("vyvedete chislo \n");
        scanf( "%d",&n);
    
 
printf("n=%d\n",n);
printf("vyvedete chislo \n");
scanf("%d",&m);
printf("m=%d\n",m);
x=n;

 while( x <= m ){
  if( (x%2) != 0 ){
printf("x=%d\n",x);
        sum += x;
  }
  
  x++;
 }

 printf("SUmata na ne4etnite e : %d \n",sum);
 system("PAUSE");
 return 0;
}
