#include <stdio.h>

int main(void) {
	int pasArr[30][30] = {0, };
	int n = 0, m = 0;
	int i = 0, j = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++) {
		pasArr[i][0] = 1;
		pasArr[i][i] = 1;
		for(j = 1; j < i; j++) {
			pasArr[i][j] = pasArr[i - 1][j - 1] + pasArr[i - 1][j];
		}
	}
	
	switch(m) {
	case 1:
		for(i = 0; i < n; i++) {
			for(j = 0; j <= i; j++) {
				printf("%d ", pasArr[i][j]);
			}
			printf("\n");
		}
		break;
		
	case 2:
		for(i = n - 1; i >= 0; i--) {
			for(j = n - 1; j > i; j--) {
				printf(" ");
			}
			for(j = 0; j <= i; j++) {
				printf("%d ", pasArr[i][j]);
			}
			printf("\n");
		}
		break;
		
	case 3:
		for(i = n - 1; i >= 0; i--) {
			for(j = n - 1; j >= i; j--) {
				printf("%d ", pasArr[j][i]);
			}
			printf("\n");
		}
		break;
	}
	
	return 0;
}
