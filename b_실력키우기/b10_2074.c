#include <stdio.h>

int main(void) {
	
	int arData[100][100] = {0, };
	int nInput = 0;
	int nData = 0;
	int nX = 0;
	int nY = 0;
	int i = 0, j = 0;
	scanf("%d", &nInput);
	
	nData = 1;
	nX = 0;
	nY = nInput / 2;
	
	while(nData <= (nInput * nInput)) {
		arData[nX][nY] = nData;
		if(nData % nInput == 0) {
			nX++;
		}
		else {
			nX--;
			nY--;
			if(nX < 0)
				nX = (nInput - 1);
			if(nY < 0)
				nY = (nInput - 1);
		}
		nData++;
	}
	
	for(i = 0; i < nInput; i++) {
		for(j = 0; j < nInput; j++) {
			printf("%d ", arData[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
