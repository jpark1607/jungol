#include <stdio.h>

int main(void) {
	
	int n = 0, m = 0;
	int nArr[40] = {0, };
	int i = 0;
	int ySum = 0, bSum = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &nArr[i]);
	}
	scanf("%d", &m);
	
	for(i = 0; i < n; i++) {
		if(m % nArr[i] == 0) {
			ySum += nArr[i];
		}
		if(nArr[i] % m == 0) {
			bSum += nArr[i];
		}
	}
	
	printf("%d\n%d", ySum, bSum);
	
	return 0;
}
