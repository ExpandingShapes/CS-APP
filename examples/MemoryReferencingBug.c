#include <stdio.h>

typedef struct {
	int a[2];
	double d;
} struct_t;

double fun(int i) {
	volatile struct_t s;
	s.d = 3.14;
	s.a[i] = 1073741824;
	return s.d;	
}

int main()
{
    //Result is system specific
    for(int i = 0; i < 6; i++) {
        printf("%E", fun(i));
        printf("\n");    
    }

    //Causes segmentation fault
    //printf("%E", fun(6));

    return 0;
}
