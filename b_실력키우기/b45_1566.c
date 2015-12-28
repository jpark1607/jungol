#include <stdio.h>

int main(void) {
	char strArr[10000];
	int capArr[26] = {0, };
	int i = 0, j = 0;
	int prCheck = 0;
	int count = 0;
	
	scanf("%s", strArr);
	
	for(i = 0; strArr[i]; i++) {
		capArr[(strArr[i] - 65) % 26]++;
	}
	
	for(i = 0; i < 26; i++) {
		prCheck = 0;
		for(j = 1; j < capArr[i]; j++) {
			if(capArr[i] % j == 0) {
				prCheck++;
			}
		}
		if(prCheck == 1) {
			count++;
			printf("%c", i + 65);
		}
	}
	if(count == 0) {
		printf("NONE");
	}
	
	return 0;
}
