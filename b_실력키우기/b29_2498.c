#include <stdio.h>
#include <math.h>


int main(void) {
	int A = 0, B = 0;
	int i = 0;
	int mul = 0;
	int RT = 0;
	int chk = 0;
	
	scanf("%d %d", &A, &B);
	mul = A * B;
	
	RT = sqrt(mul);
	
	for(i = RT; i > 1; i--) {
		if(mul % i == 0) {
			chk = mul / i;
			printf("%d %d", i, chk);
			break;
		}
	}
	
	return 0;
}
	
