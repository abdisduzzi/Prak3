#include <stdio.h>

int main(){
float a, b, i, j, x, y, hasil;

printf("Masukkan Nilai A    : ");
scanf("%f", &a);
printf("Masukkan Nilai B    : ");
scanf("%f", &b);
printf("Masukkan Nilai I    : ");
scanf("%f", &i);
printf("Masukkan Nilai J    : ");
scanf("%f", &j);
printf("Masukkan Nilai X    : ");
scanf("%f", &x);
printf("Masukkan Nilai Y    : ");
scanf("%f", &y);

hasil= (a - b) * (i / j) - (x + y);
printf("Hasil %.3f", hasil);
    return 0;}
