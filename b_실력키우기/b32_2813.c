#include <stdio.h>

int main(void) {
	int M = 0, N = 0;
	int nData = 0;
	int i = 0;
	int checkPr = 0;
	int prCount = 0;
	
	scanf("%d %d", &M, &N);
	
	for(nData = M; nData <= N; nData++) {
		checkPr = 0;
		for(i = 1; i <= nData; i++) {
			if(nData % i == 0) {
				checkPr++;
			}
		}
		if(checkPr == 2) {
			prCount++;
		}
	}
	
	printf("%d\n", prCount);
	
	return 0;
	
}
	
