#include <stdio.h>

int main (){

	float xyz = 14.298;
	
	printf("%f\n",xyz); // Default will show 6 digits after the decimal point
	printf("%.1f\n",xyz); // Only show 1 digit
	printf("%.2f\n",xyz); // Only show 2 digit
	printf("%.4f\n",xyz); // Only show 4 digit
return 0;
}
