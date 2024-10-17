#include <stdio.h>

int main(){
	int a = 10;
	
	if(a > 5){
		printf("IF\n");
	}else{
		printf("ELSE\n");
	}
	
	int b = 12;
	
	if(b == 10){
		printf("b = 10\n");
	}else if (b == 11){
		printf("b = 11\n");
	}else if (b == 12){
		printf("b = 12\n");
	}else {
		printf("b is invalid");
	}
}
