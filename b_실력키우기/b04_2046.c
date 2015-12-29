#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int i = 0, j = 0;
	int nArr[101][101] = {0, };
	
	scanf("%d %d", &n, &m);
	
	switch(m) {
	case 1:
		for(i = 1; i <= n; i++) {
			for(j = 1; j <= n; j++) {
				nArr[i][j] = i;
			}
		}
		break;
		
	case 2:
		for(i = 1; i <= n; i++) {
			if(i % 2 != 0) {
				for(j = 1; j <= n; j++) {
					nArr[i][j] = j;
				}
			}
			else {
				for(j = 1; j <= n; j++) {
					nArr[i][n + 1 - j] = j;
				}
			}
		}
		break;
		
	case 3:
		for(i = 1; i <= n; i++) {
			for(j = 1; j <= n; j++) {
				nArr[i][j] = i * j;
			}
		}
		break;
	}
	
	
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= n; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
