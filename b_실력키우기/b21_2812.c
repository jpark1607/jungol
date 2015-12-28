#include <stdio.h>

int main(void) {
	
	long long int N = 0;
	long long int S = 0;
	
	scanf("%lld", &N);
	
	while(N >= 10) {
		S = 0;
		while(N >= 10) {
			S += N % 10;
			N /= 10;
		}
		S += N;
		printf("%lld\n", S);
		N = S;
	}
	
	return 0;
}
