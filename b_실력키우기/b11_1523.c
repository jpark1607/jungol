#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int i = 0, j = 0;
	scanf("%d %d", &n, &m);
	if(n > 100 || n < 1) {
		printf("INPUT ERROR!");
	}
	
	switch(m) {
	case 1:
		for(i = 1; i <= n; i++) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
		break;
	
	case 2:
		for(i = n; i > 0; i--) {
			for(j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
		break;
	
	case 3:
		for(i = 1; i <= n; i++) {
			for(j = n - i; j > 0; j--) {
				printf(" ");
			}
			for(j = 1; j <= i * 2 - 1; j++) {
				printf("*");
			}
			printf("\n");
		}
		break;
	
	default:
		printf("INPUT ERROR!");
	}
	return 0;
}
