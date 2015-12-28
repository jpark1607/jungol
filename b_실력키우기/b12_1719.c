#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int i = 0, j = 0;
	int h = 0;
	scanf("%d %d", &n, &m);
	
	if(n < 1 || n > 100 || n % 2 == 0) {
		printf("INPUT ERROR!");
	}
	else {
		h = (n + 1) / 2;
		switch(m) {
		case 1:
			for(i = 0; i < h; i++) {
				for(j = 0; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			for(i = h - 1; i > 0; i--) {
				for(j = 0; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
			break;
		
		case 2:
			for(i = 0; i < h; i++) {
				for(j = h - 1; j > i; j--) {
					printf(" ");
				}
				for(j = 0; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			for(i = h - 1; i > 0; i--) {
				for(j = h; j > i; j--) {
					printf(" ");
				}
				for(j = 0; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
			break;
			
		case 3:
			for(i = n; i > 0; i -= 2) {
				for(j = n; j > i; j -= 2) {
					printf(" ");
				}
				for(j = 0; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
			for(i = 2; i < n; i += 2) {
				for(j = n - 1; j > i; j -= 2) {
					printf(" ");
				}
				for(j = 0; j <= i; j++) {
					printf("*");
				}
				printf("\n");
			}
			break;
			
		case 4:
			for(i = 0; i < h; i++) {
				for(j = 0; j < i; j++) {
					printf(" ");
				}
				for(j = h; j > i; j--) {
					printf("*");
				}
				printf("\n");
			}
			for(i = 0; i < h - 1; i++) {
				for(j = 0; j < h - 1; j++) {
					printf(" ");
				}
				for(j = 0; j < i + 2; j++) {
					printf("*");
				}
				printf("\n");
			}
			break;
			
		default:
			printf("INPUT ERROR!");
			break;
		}
	}
	
	return 0;
}
