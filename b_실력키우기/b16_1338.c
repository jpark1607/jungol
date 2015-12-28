#include <stdio.h>

int main(void) {
	int N = 0;
	int cArr[100][100];
	int i = 0, j = 0;
	int nData = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			cArr[i][j] = ' ';
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = i; j < N; j++) {
			cArr[j][N - 1 - j + i] = (nData++ % 26) + 65;
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			printf("%c ", cArr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
