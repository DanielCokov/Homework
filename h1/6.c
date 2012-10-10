//Технологично училище Електронни системи към ТУ София
//11 А клас
//Номер 9
//Даниел Красимиров Цоков
//Да се разработи програма, която изисква от потребителя да въведе целочислено число x, където 0<x<10. Да се инициализира масив от 100 целочислени елемента.
//Стойностите на елементите да са случайни числа в интервала [0, 100). Елементите на масива да се подредят така, че числата завършващи на x да са в началото.
#include<stdio.h>

int main(int argc, char *argv[]) {

int a=0 , i=0 , k , b=0 , c=0;
char array[100];

printf("Vavedete chislo koeto e v interval ot 0 do 9: ");
          scanf("%d",&a);

while(a<0 || a>9){
printf("Opitaite otnovo: ");
scanf("%d",&a);
}

while(i<100){
array[i]=rand() % 100;
i++;
}

i=0;
while(i<100){
k=array[i];
if(k%10==a){
b=array[c];
array[c]=k;
array[i]=b;
c++;
}
i++;
}


      i=0;
while(i<100){
k=array[i];
printf("Chislo N%d e: %d\n",(i+1),k);
i++;
}

return 0;
}
