#include <stdio.h>

int main(void) {
	int N = 0;
	int M[100] = {0, };
	int i = 0, j = 0, k = 0;
	int prArr[2] = {0, };
	int prChk1 = 0, prChk2 = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &M[i]);
	}
	
	for(i = 0; i < N; i++) {
		prChk1 = 0;
		for(j = 1; j < M[i]; j++) {
			if(M[i] % j == 0) {
				prChk1++;
			}
		}
		if(prChk1 == 1) {
			printf("%d\n", M[i]);
			continue;
		}
		
		prArr[0] = M[i];
		prArr[1] = M[i];
		while(1) {
			prChk1 = 0;
			prChk2 = 0;
			prArr[0]--;
			prArr[1]++;
			for(k = 1; k < prArr[0]; k++) {
				if(prArr[0] % k == 0) {
					prChk1++;
				}
			}
			for(k = 1; k < prArr[1]; k++) {
				if(prArr[1] % k == 0) {
					prChk2++;
				}
			}
			if((prChk1 == 1) && (prChk2 == 1)) {
				printf("%d %d\n", prArr[0], prArr[1]);
				break;
			}
			else if((prChk1 == 1) && (prChk2 != 1)) {
				printf("%d\n", prArr[0]);
				break;
			}
			else if((prChk1 != 1) && (prChk2 == 1)) {
				printf("%d\n", prArr[1]);
				break;
			}
		}
	}
	
	return 0;
}
