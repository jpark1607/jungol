#include <stdio.h>

int main(void) {
	int n = 0;
	int c = 0;
	int i = 0, j = 0;
	int cArr[100][100];
	
	scanf("%d", &n);
	
	for(i = n - 1; i >= 0; i--) {
		for(j = n - 1; j >= 0; j--) {
			cArr[j][i] = (c++ % 26) + 65;
		}
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%c ", cArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
