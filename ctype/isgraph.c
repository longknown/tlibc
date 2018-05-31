/*
 * isgraph function
 */
#include "ctype.h"

int (isgraph)(int c)
{
	return (_Ctype[c] & (_LO|_UP|_DI|_PU|_XA));
}
