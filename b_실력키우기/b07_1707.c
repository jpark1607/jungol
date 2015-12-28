#include <stdio.h>

int main(void) {
/* 달팽이 */
	int arr[100][100] = {0, };
	int nInput = 0;						// 입력값 
	int nData = 0;						// 모든 데이터(nInput * nInput 값) 
	int nLoop = 0;						// 사이클 
	int nCount = 0;						// 사이클 횟수 
	int i = 0, j = 0;
	
	scanf("%d", &nInput);
	
	nLoop = nInput / 2;
	nData = 1;

	while(nCount != nLoop) {
		for(j = nCount; j < (nInput - 1 - nCount); j++) {
			arr[nCount][j] = nData;
			nData++;
		}
		
		for(i = nCount; i < (nInput - 1 - nCount); i++) {
			arr[i][j] = nData;
			nData++;
		}
		
		for( ; j > nCount; j--) {
			arr[i][j] = nData;
			nData++;
		}
		
		for( ; i > nCount; i--) {
			arr[i][j] = nData;
			nData++;
		}
		
		nCount++;
	}
	
	if(nInput % 2 == 1) {
		arr[nCount][nCount] = nData;
	}
	
	
	for(i = 0; i < nInput; i++) {
		for(j = 0; j < nInput; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");	
	}
	
	return 0;
}
