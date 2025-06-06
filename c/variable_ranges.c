#include <stdio.h>
#include <stdint.h>

int main()
{
	int a = 10;
	uint16_t b = 65535;
	int16_t d = 65535;

	printf("%d %d %d\n", a, b, d);
	printf("%u %u %u\n", a, b, d);
}
