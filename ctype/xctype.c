#include <limits.h>
#include <stdio.h>
#include "ctype.h" // now remain in custom folder

#if EOF != -1 || UCHAR_MAX != 255
#error CTYPE TABLE ERROR
#endif

#define DXD	(_DI|_XD)	// '0'-'9'
#define LXD	(_LO|_XD)	// 'a'-'f'
#define UXD	(_UP|_XD)	// 'A'-'F'

static const short _CTYPETAB[257] = { 0, // EOF
	_BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB,
	_BB, _CN, _CN, _CN, _CN, _CN, _BB, _BB,
	_BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB,
	_BB, _BB, _BB, _BB, _BB, _BB, _BB, _BB,
	_SP, _PU, _PU, _PU, _PU, _PU, _PU, _PU,
	_PU, _PU, _PU, _PU, _PU, _PU, _PU, _PU,
	DXD, DXD, DXD, DXD, DXD, DXD, DXD, DXD,
	DXD, DXD, _PU, _PU, _PU, _PU, _PU, _PU,
	_PU, UXD, UXD, UXD, UXD, UXD, UXD, _UP,
	_UP, _UP, _UP, _UP, _UP, _UP, _UP, _UP,
	_UP, _UP, _UP, _UP, _UP, _UP, _UP, _UP,
	_UP, _UP, _UP, _PU, _PU, _PU, _PU, _PU,
	_PU, LXD, LXD, LXD, LXD, LXD, LXD, _LO,
	_LO, _LO, _LO, _LO, _LO, _LO, _LO, _LO, 
	_LO, _LO, _LO, _LO, _LO, _LO, _LO, _LO,
	_LO, _LO, _LO, _PU, _PU, _PU, _PU, _BB
};

const short *_Ctype = &_CTYPETAB[1];
