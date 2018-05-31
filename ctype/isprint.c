/*
 * isprint function
 */
#include "ctype.h"

int (isprint)(int c)
{
	return (_Ctype[c] & \
			(_LO|_UP|_DI|_SP|_PU|_XA));
}
