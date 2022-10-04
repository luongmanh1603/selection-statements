#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	if (n > 0) {
		printf(" n is a positive number");
	} else if (n < 0) {
		printf("n is a negative");
	} else {
		printf("n is a equal to 0");
	}
	return 0;
}
