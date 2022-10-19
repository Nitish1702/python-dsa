#include <stdio.h>

unsigned int reverser(unsigned int n)
{
	unsigned int count = sizeof(n) * 8 - 1;
	unsigned int r_num = n;

	n >>= 1;
	while (n) {
		r_num <<= 1;
		r_num |= n & 1;
		n >>= 1;
		count--;
	}
	r_num <<= count;
	return r_num;
}
int main()
{
	unsigned int x = 1;
	printf("%u", reverser(x));
	getchar();
}
