#include <stdio.h>

int main(void) {
	int N = 0;
	int nArr[100] = {0, };
	int i = 0, j = 0;
	int temp = 0;
	int min = 0;
	int pos = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i]);
	}
	
	for(i = 0; i < N - 1; i++) {
		min = nArr[i];
		pos = i;
		for(j = i; j < N; j++) {
			if(nArr[j] < min) {
				min = nArr[j];
				pos = j;
			}
		}
		temp = nArr[i];
		nArr[i] = nArr[pos];
		nArr[pos] = temp;
		
		for(j = 0; j < N; j++) {
			printf("%d ", nArr[j]);
		}
		printf("\n");
	}
	
	return 0;
}
