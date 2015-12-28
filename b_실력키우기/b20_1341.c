#include <stdio.h>

int main(void) {
	int s = 0, e = 0;
	int i = 0, j = 0;
	
	scanf("%d %d", &s, &e);
	
	if(s < e) {
		for(i = s; i <= e; i++) {
			for(j = 1; j < 10; j++) {
				printf("%d * %d = %2d", i, j, i * j);
				if(j % 3 == 0) {
					printf("\n");
				}
				else {
					printf("   ");
				}
			}
			printf("\n");
		}
	}
	else {
		for(i = s; i >= e; i--) {
			for(j = 1; j < 10; j++) {
				printf("%d * %d = %2d", i, j, i * j);
				if(j % 3 == 0) {
					printf("\n");
				}
				else {
					printf("   ");
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
