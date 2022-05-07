#include <stdio.h>

int bis(int x, int m) {
	return x | m;
}

int bic(int x, int m) {
	return x & ~m;
}

int bool_or(int x, int y) {
    return bis(x, y);
}

int bool_xor(int x, int y) {
	return bis(bic(x, y), bic(y, x));
}

int main() {
	int x = 0x87654321;
	int y = 0x12345678;
	int m = 0x0000FFFF;
	
	printf("%X\n", bis(x, m));
	printf("%X\n", bic(x, m));
	printf("%X\n", bool_or(x, y));
	printf("%X\n", bool_xor(x, y));

  return 0;
}
