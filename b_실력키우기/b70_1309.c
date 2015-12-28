#include <stdio.h>

int Factorial(int n) {
	if(n == 1) {
		printf("%d! = %d\n", n, n);
		return 1;
	}
	else {
		printf("%d! = %d * %d!\n", n, n, n - 1);
		return n * Factorial(n - 1);
	}
}


int main(void) {
	long long int n = 0;
	
	scanf("%d", &n);
	
	printf("%d", Factorial(n));
	
	return 0;
	
}
