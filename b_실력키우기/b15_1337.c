#include <stdio.h>

int main(void) {
	int N = 0;
	int nArr[100][100] = {0, };
	int nCount = 0;
	int nTotal = 0;
	int nData = 0;
	int i = 0, j = 0;
	int nSt = 0, nEnd = 0;
	
	scanf("%d", &N);
	
	nEnd = N - 1;
	nTotal = (N * (N + 1)) / 2;
	
	while(nCount != nTotal) {
		
		
		
		
		
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j <= i; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
