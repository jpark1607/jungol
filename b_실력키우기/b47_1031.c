#include <stdio.h>

int main(void) {
	
	int bingo[7][7] = {0, };
	int i = 0, j = 0, k = 0;
	int num = 0;
	int th = 0;
	int bing = 0;
	
	for(i = 1; i <= 5; i++) {
		scanf("%d %d %d %d %d", &bingo[i][1], &bingo[i][2], &bingo[i][3], &bingo[i][4], &bingo[i][5]);
	}
	
	for(th = 1; th < 25; th++) {
		scanf("%d", &num);
		for(i = 1; i <= 5; i++) {
			k = 0;
			for(j = 1; j <= 5; j++) {
				if(num == bingo[i][j]) {
					bingo[i][6]++;
					bingo[6][j]++;
					if(i + j == 6) {
						bingo[6][0]++;
					}
					if(i - j == 0) {
						bingo[6][6]++;
					}
					k = 1;
					break;
				}
			}
			if(k == 1) {
				break;
			}
		}
		
		for(i = 0; i < 6; i++) {
			if(bingo[6][i] == 5) {
				bing++;
				bingo[6][i] -= 100;
			}
			if(bingo[i + 1][6] == 5) {
				bing++;
				bingo[i + 1][6] -= 100;
			}
		}
		
		if(bing >= 3) {
			break;
		}
	}
	printf("%d", th);
	return 0;
}
