#include <stdio.h>

int main() {
	int test,x1,y1,r1,x2,y2,r2,R,r,di;
	scanf("%d", &test);
	while(test--) {
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		di = ((x2-x1) * (x2-x1)) + ((y2-y1)*(y2-y1));
		R = (r2+r1)*(r2+r1);
		r = (r2-r1)*(r2-r1);
		if (di == 0 && r1 == r2) {
			printf("-1\n");
		} else if (di == R || dir == r) {
			printf("1\n");
		} else if (di < R && di > r) {
			printf("2\n");
		} else {
			printf("0\n");
		}
	}
	return 0;
}
