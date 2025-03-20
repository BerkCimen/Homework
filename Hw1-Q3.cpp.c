#include <stdio.h>
#include <math.h>


int main()
{
	int popularity;
	int size;
	int sizepow;   			/* Calculate the home size's power. */
	int popularitypow; 		/* Calculate the home popularity's power. */
	int homeValue;
	
	
	printf("Enter popularity: ");
	scanf("%d", &popularity);
	
	printf("Enter size: ");
	scanf("%d", &size); 
	
	popularitypow = pow(popularity, 3);
	sizepow = pow(size, 2);
	
	homeValue = (popularitypow + sizepow) * 10000;
	printf("Home value is: %d ", homeValue);
	
	return 0;
}

