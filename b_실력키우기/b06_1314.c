#include <stdio.h>

int main(void) {
	int n = 0;
	int c = 0;
	int i = 0, j = 0;
	int cArr[100][100];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		if(i % 2 == 0) {
			for(j = 0; j < n; j++) {
				cArr[j][i] = (c++ % 26) + 65;
			}
		}
		else {
			for(j = n - 1; j >= 0; j--) {
				cArr[j][i] = (c++ % 26) + 65;
			}
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
