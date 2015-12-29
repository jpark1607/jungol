#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int i = 0, j = 0;
	int nData = 0;
	int nArr[100][100] = {0, };
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++) {
		if(i % 2 == 0) {
			for(j = 0; j < m; j++) {
				nArr[i][j] = ++nData;
			}
		}
		else {
			for(j = m - 1; j >= 0; j--) {
				nArr[i][j] = ++nData;
			}
		}
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
