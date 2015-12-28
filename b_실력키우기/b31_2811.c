#include <stdio.h>
#include <math.h>

int main(void) {
	
	int nArr[5] = {0, };
	int comp = 0;
	int i = 0, j = 0;
	int prCount = 0;
	
	scanf("%d %d %d %d %d", &nArr[0], &nArr[1], &nArr[2], &nArr[3], &nArr[4]);
	for(i = 0; i < 5; i++) {
		comp = sqrt(nArr[i]);
		prCount = 0;
		
		for(j = 1; j <= comp; j++) {
			if(nArr[i] % j == 0) {
				prCount++;
			}
		}
		if(nArr[i] == 1) {
			printf("number one\n");
		}
		else if(prCount == 1) {
			printf("prime number\n");
		}
		else {
			printf("composite number\n");
		}
	}
	
	return 0;
}
