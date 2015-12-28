#include <stdio.h>

int main(void) {
	
	int N = 0;
	int cand[3] = {0, };
	int vote[3] = {0, };
	int i = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d %d %d", &vote[0], &vote[1], &vote[2]);
		cand[0] += vote[0];
		cand[1] += vote[1];
		cand[2] += vote[2];
	}
	
	if(cand[0] > cand[1]) {
		if(cand[0] > cand[2]) {
			printf("1 %d", cand[0]);
		}
		else if(cand[2] > cand[0]) {
			printf("3 %d", cand[2]);
		}
		else {
			printf("0 %d", cand[0]);
		}
	}
	else if(cand[1] > cand[0]) {
		if(cand[1] > cand[2]) {
			printf("2 %d", cand[1]);
		}
		else if(cand[2] > cand[1]) {
			printf("3 %d", cand[2]);
		}
		else {
			printf("0 %d", cand[1]);
		}
	}
	else {
		if(cand[2] > cand[2]) {
			printf("3 %d", cand[2]);
		}
		else {
			printf("0 %d", cand[0]);
		}
	}
	
	return 0;
}
