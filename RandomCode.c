#include "stdio.h"
#include "stdlib.h"

int multiplyBy8(int v)
{
	return v*8;
}

int setBit6to1(int v)
{
    v |= 1UL << 6;
	return v;
}

int setBit3to0(int v)
{
	v &= ~(1UL << 3);
	return v;
}
	
int flipBit5(int v)
{
    v ^= 1UL << 5;
	return v;
}
	
int ifBit7is0(int v)
{
	int bit = (v >> 7) & 1U;
	if (bit == 0) return 1;
    return 0;
}

int ifBit3is1(int v)
{
    int bit = (v >> 3) & 1U;
	return bit;
}

int unsignedBits0through5(int v)
{
    unsigned int c = v;
    c %= 64;
	return c;
}

int unsignedBits6through9(int v)
{
    unsigned int b = v;
    b = b >> 6;
    b %= 16;
	return b;
}

int signedBits0through5(int v)
{
	v = (v & 0b111111);
    if (v > 31) v-= 64;
    return v;
}

int signedBits6through9(int v)
{
	v = (v & 0b1111000000) >> 6;
    if (v > 7) v -= 16;
    return v;
}

int setBits4through9(int v, int setValue)
{
	setValue &= (0b111111);
    setValue = setValue << 4;
    v = v & ~(0b111111 << 4);
	return v | setValue;
}




