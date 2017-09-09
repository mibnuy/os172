#include<stdio.h>

int cek_prime(int angka){
int i;

for (i=0; i <angka; i++){
if (angka % i == 0){
return 0;
}
}
return 1;
}

void lima_prima(){
int i ;
int a=1;
for (i=0;i<5;i++){
while(1){
a++;
if(cek_prime(a) == 1){
printf("%d\n",a);
}
}
}
}
int main(){
lima_prima();
//int bilangan;

//printf("masukkan bilangan: ");
//scanf("%d",bilangan);
//printf("%d",bilangan);
//return bilangan;
}

