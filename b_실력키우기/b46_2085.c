#include <stdio.h>

int main(void) {
	int A = 0, B = 0;
	int yun = 0;
	int i = 0;
	
	
	scanf("%d %d", &B, &A);	
	A /= 4;
	B /= 4;
	
	for(i = A + 1; i <= B; i++) {
		if(i % 100 == 0) {
			yun++;
		}
		else if(i % 25 == 0) {
			continue;
		}
		else {
			yun++;
		}
	}
	printf("%d", yun);
	
	return 0;
}
