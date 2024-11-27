#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;


    int sum = a + b;
    printf("hasil penjumlahan bilangan %d\n",sum);

    float c = 10.5;
    float d = 20.5;

    float hasil = c + d;
    printf("hasil penjumlahan bilangan float %.2f\n",hasil);

    int res1 = a / 3;
    printf("hasil pembagian integer %d\n",res1);

    float res2 = a / 3;
    printf("hasil pembagian integer #2 %f\n",res2);

    int res3 = a % 3;
    printf("hasil modulus %d\n",res3);

    return 0;
}