#include <stdio.h>

void HanoiTowerMove(int num, int t1, int t2, int t3) {
	if(num == 1) {					// 이동할 원반의 수가 1개라면
		printf("%d : %d -> %d\n", num, t1, t3);
	}
	else {
		HanoiTowerMove(num - 1, t1, t3, t2);
		printf("%d : %d -> %d\n", num, t1, t3);
		HanoiTowerMove(num - 1, t2, t1, t3);
	}
}

int main(void) {
	int N = 0;
	int t1 = 1, t2 = 2, t3 = 3;
	scanf("%d", &N);
	// 막대A의 원반 3개를 막대B를 경유하여 막대C로 옮기기
	HanoiTowerMove(N, t1, t2, t3);
	return 0;
}
