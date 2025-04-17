#include <stdio.h>
#include <math.h>

void computeHomeValue(int popularity, int size);  // void ama pointer yok

int main()
{
    int popularity, size;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size); 

    computeHomeValue(popularity, size);  // Fonksiyon içinde yazdırıyor

    return 0;
}

void computeHomeValue(int popularity, int size) 
{
    int sizepow = pow(size, 2);        
    int popularitypow = pow(popularity, 3);  

    int homeValue = (popularitypow + sizepow) * 10000;

    printf("Home value is: %d\n", homeValue);  // Sonuç fonksiyon içinde yazdırılıyor
}



