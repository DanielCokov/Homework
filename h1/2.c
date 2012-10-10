//Технологично училище Електронни системи към ТУ София
//11 А клас
//Номер 9
//Даниел Красимиров Цоков
//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намери и изведе сумата на числата делящи се на 17 в интервал [x, y].
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
int a,b;
int c;
int sum=0;


printf("vuvedete 1-vo chislo \n");
scanf( "%d",&a);

printf("vuvedete 2-ro chislo \n");
scanf("%d",&b);

while(a>b){
printf("vuvedete 2-ro chislo otnovo \n");
scanf("%d",&b);
}

c=a;

while( a <= b ){
if( (c%17) == 0 ){
printf("%d \n",c);
sum += c;
}
a++;
c++;
}

printf("Sumata na chislata delqshti se na 17 e : %d \n",sum);


return 0;
}
