#include <stdio.h>

int main() {
	  int x = 0x87654321;
	
    printf("The least significant byte of x, with all other bits set to 0: %X\n", x & 0x000000FF);
    printf("All but the least significant byte of x complemented, with the least significant byte left unchanged: %X\n", (~x & 0xFFFFFF00) | (x & 0x000000FF));
    printf("The least significant byte set to all ones, and all other bytes of x left unchanged: %X\n", (x & 0xFFFFFF00) | 0xFF);

    return 0;
}
