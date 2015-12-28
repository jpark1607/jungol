#include <stdio.h>

int main(void) {
	int N = 0;
	int cArr[100][50];
	int halfN = 0;
	int i = 0, j = 0;
	int cData = 0;
	
	scanf("%d", &N);
	
	halfN = N / 2;
	
	if((N % 2 == 0) || N > 100 || N < 1) {
		printf("INPUT ERROR");
	}
	else {
		for(i = halfN; i >= 0; i--) {
			for(j = i; j <= N - 1 - i; j++) {
				cArr[j][i] = (cData++ % 26) + 65;
			}
		}
	
		for(i = 0; i < N; i++) {
			for(j = 0; j < N; j++) {
				printf("%c ", cArr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
