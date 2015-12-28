#include <stdio.h>

void HanoiTowerMove(int num, int t1, int t2, int t3) {
	if(num == 1) {					// �̵��� ������ ���� 1�����
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
	// ����A�� ���� 3���� ����B�� �����Ͽ� ����C�� �ű��
	HanoiTowerMove(N, t1, t2, t3);
	return 0;
}
