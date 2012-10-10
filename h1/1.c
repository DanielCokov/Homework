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
