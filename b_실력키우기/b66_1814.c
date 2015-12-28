#include <stdio.h>

int main(void) {
	int N = 0;
	int nArr[100] = {0, };
	int i = 0, j = 0;
	int temp = 0;
	int cur = 0;
	int nCount = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i]);
	}
	
	for(i = 0; i < N; i++) {
		cur = i;
		for(j = i - 1; j >= 0; j--) {
			if(nArr[cur] < nArr[j]) {
				temp = nArr[cur];
				nArr[cur] = nArr[j];
				nArr[j] = temp;
				cur--;
				nCount++;
			}
			else {
				break;
			}
		}
	}
	printf("%d\n", nCount);
	return 0;
}
