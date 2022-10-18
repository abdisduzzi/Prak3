#include <stdio.h>

int main(){
float jrjr, tinggi, volume, luas, kllg, phi = 3.142857;

printf("Jari-jari   : ");
scanf("%f", &jrjr);
printf("Tinggi      : ");
scanf("%f", &tinggi);

volume = phi * (jrjr * jrjr) * tinggi;
printf("Volume   : %.2f\n", volume);
luas = 2 * phi * jrjr * ( jrjr + tinggi);
printf("Luas     : %.2f\n", luas);
kllg = 2 * phi * jrjr;
printf("Keliling : %.2f\n", kllg);

return 0;}
