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
	return v;
}

int unsignedBits6through9(int v)
{
	// return the unsigned value in bits 6 through 9
	return v;
}

int signedBits0through5(int v)
{
	// return the signed value in bits 0 through 5
	return v;
}

int signedBits6through9(int v)
{
	// return the signed value in bits 6 through 9
	return v;
}

int setBits4through9(int v, int setValue)
{
	// set bits 4 through 9 in v to become setValue
	return v;
}




