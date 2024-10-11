#include <stdio.h>

int main(){

	const int n = 15;	// n will always be 15
	// n = 10;			// error: assignment of read-only variable 'n'
	
	printf("%d",n);
return 0;
}
