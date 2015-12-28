#include <stdio.h>

int main(void) {
	int N = 0;
	int nArr[100] = {0, };
	int i = 0, j = 0;
	int temp = 0;

	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i]);
	}
	
	for(i = N - 1; i > 0; i--) {
		for(j = 0; j < i; j++) {
			if(nArr[j] > nArr[j + 1]) {
				temp = nArr[j];
				nArr[j] = nArr[j + 1];
				nArr[j + 1] = temp;
			}
		}
		
		for(j = 0; j < N; j++) {
			printf("%d ", nArr[j]);
		}
		printf("\n");
	}
	
	return 0;
}
