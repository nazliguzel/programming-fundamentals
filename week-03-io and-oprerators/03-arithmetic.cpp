#include<stdio.h>

int main(){

    int sayi1,sayi2;
    int toplam,carpim,fark;
    float bolum;
    printf("sirasiyla iki sayi giriiniz:");
    scanf("%d%d",&sayi1,&sayi2);

    toplam=sayi1+sayi2;
    carpim=sayi1*sayi2;
    fark=sayi1-sayi2;
    bolum=(float)sayi1/(float)sayi2;

    printf("Toplam=%d\n",toplam);
    printf("Fark=%d\n",fark);
    printf("Carpim=%d\n",carpim);
    printf("Bolum=%.2f\n",bolum);
    return 0;

    }