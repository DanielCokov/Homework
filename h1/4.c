//Технологично училище Електронни системи към ТУ София
//11 А клас
//Номер 9
//Даниел Красимиров Цоков
//Да се разработи програма, която изисква от потребителя да въведе две целочислени числа, x и y, където x < y. Да се намерят и изведат всички числа на Фибоначи в интервала [x, y].

#include<stdio.h>

main()
{
int x=0 , y=0 , first = 0, second = 1, next, z=0;

printf("vuvedete 1-vo chislo\n");
scanf("%d",&x);

printf("Vuvedete 2-ro chislo\n");
scanf("%d",&y);

while(x>y){
printf("vuvedete 2-ro chislo otnovo \n");
scanf("%d",&y);
}

while(1){
if ( z <= 1 )
next = z;
else
{
next = first + second;
first = second;
second = next;
}
if(next>=x){
if(next<=y){
printf("%d\n",next);
}
}
if(next>y){
break;
}
z++;
}

  return 0;
}
