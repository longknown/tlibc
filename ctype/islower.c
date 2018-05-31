/*
 * islower function
 */
#include "ctype.h"

int (islower)(int c)
{
	return (_Ctype[c] & _LO);
}
