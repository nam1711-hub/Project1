#include "BangCuuChuong.h"

void BangCuuChuong(int n) {
	int tich;
	for (int i = 1; i <= 9; i++) {
		tich = n * i;
		printf("%d x %d = %d \n", i, n, tich);
	}
}

