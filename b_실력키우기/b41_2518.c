#include <stdio.h>

int main(void) {
	int n = 0, m = 0;
	int bef = 0, aft = 0;
	int cArr[256];
	int x = 0;
	int i = 0, j = 0;
	char prArr[100000];
	for(i = 0; i < 256; i++) {
		cArr[i] = i;
	}
	
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d", &bef, &aft);
		cArr[bef] = aft;
	}
	
	scanf("%d", &m);
	for(i = 0; i < m; i++) {
		scanf("%d", &x);
		prArr[j++] = cArr[x];
	}
	
	for(i = 0; i < m; i++) {
		printf("%c", prArr[i]);
	}
	
	return 0;
}
