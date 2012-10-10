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
