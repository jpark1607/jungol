#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int i = 0, j = 0;
	int tot = 0;
	int nData = 0;
	int nArr[100][100] = {0, };
	
	scanf("%d %d", &n, &m);
	
	if((n < 1) || (n > 99) || (n % 2 == 0)) {
		printf("INPUT ERROR!");
	}
	else {
		switch(m) {
		case 1:
			nData = 1;
			for(i = 0; i < n; i++) {
				if(i % 2 == 0) {
					for(j = 0; j <= i; j++) {
						nArr[i][j] = nData++;
					}
				}
				else {
					for(j = i; j >= 0; j--) {
						nArr[i][j] = nData++;
					}
				}
			}
			
			for(i = 0; i < n; i++) {
				for(j = 0; j <= i; j++) {
					printf("%d ", nArr[i][j]);
				}
				printf("\n");
			}
			break;
		case 2:
			tot = n * 2 - 1;
			for(i = 0; i < n; i++) {
				for(j = 0; j < i; j++) {
					printf("  ");
				}
				for(j = i * 2; j < tot; j++) {
					printf("%d ", i);
				}
				printf("\n");
			}
			break;
			
		case 3:
			tot = n / 2;
			for(i = 0; i < tot; i++) {
				for(j = 0; j <= i; j++) {
					printf("%d ", j + 1);
				}
				printf("\n");
			}
			for( ; i >= 0; i--) {
				for(j = 0; j <= i; j++) {
					printf("%d ", j + 1);
				}
				printf("\n");
			}
			break;
		
		default:
			printf("INPUT ERROR!");
		}
	}
	
	return 0;
}
