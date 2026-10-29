#include<stdio.h>
int main (){
    int sayi; //Tam sayi turunde degisken 
    float ondalik; //Ondalik sayi turunde degisken
    char karakter; //Karakter turunde degisken
    double Sayi;

    //Kullanicidan deger alma
    printf("Bir sayi giriniz:");
    scanf("%d",&sayi);
    printf("Ondalikli bir sayi:");
    scanf("%f",&ondalik);
    printf("Bir karakter giriniz:");
    scanf(" %c",&karakter);
    printf("Bir double giriniz:");
    scanf("%lf",&Sayi);

    //Degiskenleri ekrana yazdirma
    printf("Tam sayi:%d\n",sayi);
    printf("Ondalikli Sayi:%f\n",ondalik);
    printf("Karakter:%c\n",karakter);
    printf("Double sayi:%lf\n",Sayi);


return 0;
}