/*
 * isupper function
 */
#include "ctype.h"

int (isupper)(int c)
{
	return (_Ctype[c] & _UP);
}
