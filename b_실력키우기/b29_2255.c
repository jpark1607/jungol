#include <stdio.h>

int main(void) {
	int N = 0;
	int fArr[20000] = 0;
	int nArr[20000][2] = 0;
	int i = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &fArr[i]);
		nArr[i][1] = i + 1;
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < N; j++) {
			nArr[j][0] = nArr[j][1];
		}
	
	
	
	return 0;
}
