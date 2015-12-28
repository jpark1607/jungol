#include <stdio.h>

int main(void) {
	int N = 0;
	int i = 0, j = 0, k = 0;
	int nCount = 0;
	int nData = 0;
	int nArr[100][100] = {0, };
	
	scanf("%d", &N);
	
	
	for(i = (nCount * 2); i < N - 1 - nCount; i++) {
		nArr[i][i] = (nData++ % 10);
	}
	
	for(i = (N - 1 - nCount); 
	
	nCount++;
