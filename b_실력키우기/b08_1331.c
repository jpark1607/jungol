#include <stdio.h>

int main(void) {
	int N = 0;
	int cArr[200][200] = {0, };
	int i = 0, j = 0;
	int mid = 0;
	int count = 0;
	int cData = 0;
	int doub = 0;
	
	scanf("%d", &N);
	mid = N - 1;
	doub = mid * 2;
	
	
	while(count < mid) {
		for(i = 0; i < mid - count; i++) {
			cArr[i + count][mid - i] = (cData++ % 26) + 65;
		}
		for(i = 0; i < mid - count; i++) {
			cArr[mid + i][i + count] = (cData++ % 26) + 65;
		}
		for(i = 0; i < mid - count; i++) {
			cArr[doub - count - i][mid + i] = (cData++ % 26) + 65;
		}
		for(i = 0; i < mid - count; i++) {
			cArr[mid - i][doub - count - i] = (cData++ % 26) + 65;
		}
		count++;
	}
	cArr[mid][mid] = (cData % 26) + 65;
	
	for(i = 0; i < doub + 1; i++) {
		for(j = 0; j < doub + 1; j++) {
			printf("%c ", cArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
