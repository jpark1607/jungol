#include <stdio.h>

int main(void) {
	int n = 0;
	int i = 0, j = 0;
	int nData = 0;
	int nArr[100][100] = {0, };
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			nArr[j][i] = ++nData;
		}
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
