/*
 * iscntrl function
 */
#include "ctype.h"

int (iscntrl)(int c)
{
	return (_Ctype[c] & (_CN|_BB));
}
