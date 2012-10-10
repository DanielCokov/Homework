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
