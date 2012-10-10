#include<stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]){
int x=0 , y=0 , i = 3, count, c;

printf("vuvedete 1-vo chislo\n");
scanf("%d",&x);

printf("Vuvedete 2-ro chislo\n");
scanf("%d",&y);

while(x>y){
printf("vuvedete 2-ro chislo otnovo \n");
scanf("%d",&y);
}

while(1){
for ( count = 2 ; count <= y ; ){
for ( c = 2 ; c <= i - 1 ; c++ ){
if ( i%c == 0 )
break;
}
if ( c == i && i>=x && i<=y && i%10==3){
printf("%d\n",i);
count++;
}
i++;
if(i>=y)
break;
}
if(i>=y)
break;
}
return 0;
}
