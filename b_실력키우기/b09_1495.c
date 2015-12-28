#include <stdio.h>

int main(void) {
	int nArr[100][100] = {0, };
	int n = 0;
	int nTotal = 0;
	int nData = 0;
	int i = 0, j = 0;
	scanf("%d", &n);
	nTotal = n * n;
	
	nData = 1;
	nArr[0][0] = nData++;
	i++;
	
	while(nData <= nTotal) {
		while((i >= 0) && (j < n)) {
			nArr[i--][j++] = nData++;
		}
		i++;
		if(j == n) {
			i++;
			j--;
		}
		
		while((i < n) && (j >= 0)) {
			nArr[i++][j--] = nData++;
		}
		j++;
		if(i == n) {
			i--;
			j++;
		}
		
	}
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
