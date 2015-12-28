#include <stdio.h>

int main(void) {
	char cArr[10000];
	int i = 0;
	int koi = 0, ioi = 0;
	
	scanf("%s", cArr);
	
	for(i = 0; cArr[i] != '\0'; i++) {
		if(cArr[i] != 'K' && cArr[i] != 'I') {
			continue;
		}
		else if(cArr[i] == 'K') {
			if(cArr[i + 1] != 'O') {
				continue;
			}
			else {
				if(cArr[i + 2] != 'I') {
					continue;
				}
				else {
					koi++;
				}
			}
		}
		else if(cArr[i] == 'I') {
			if(cArr[i + 1] != 'O') {
				continue;
			}
			else {
				if(cArr[i + 2] != 'I') {
					continue;
				}
				else {
					ioi++;
				}
			}
		}
	}
	printf("%d\n%d", koi, ioi);
	
	
	return 0;
}
