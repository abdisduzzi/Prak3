#include <stdio.h>

int main(){
int a, b, c, k, l, p;

printf("Nilai A = ");
scanf("%d", &a);
printf("Nilai B = ");
scanf("%d", &b);

p = (b * b) - (a * a);
c = sqrt(p);
k = a + b + c;
l = 0.5 * c * a;
printf("Alas      = %d cm\n", c);
printf("Tinggi    = %d cm\n", a);
printf("Keliling  = %d cm\n", k);
printf("Luas      = %d cm^2\n", l);
return 0;}
