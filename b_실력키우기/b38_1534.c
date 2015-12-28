#include <stdio.h>

int main(void) {
	int N = 0;
	int B = 0;
	int nArr[20];
	int rLen = 0;
	int i = 0;
	
	scanf("%d %d", &N, &B);
	
	rLen = 19;
	
	switch(B) {
	case 2:
		while(N >= 2) {
			nArr[rLen--] = N % 2;
			N /= 2;
		}
		nArr[rLen--] = 1;
		for(i = rLen + 1; i < 20; i++) {
			printf("%d", nArr[i]);
		}
		break;
	
	case 8:
		printf("%o", N);
		break;
	
	case 16:
		printf("%X", N);
		break;
		
	}
	
	return 0;
}
	
	
