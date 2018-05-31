/* ctype.h standard header */
#ifndef _CTYPE_H_
#define _CTYPE_H_

#define _DI	0x1		// digits, '0'-'9'
#define _LO	0x2		// lower case letters, 'a'-'z'
#define _UP	0x4		// upper case letters, 'A'-'Z'
#define _XD	0x8		// hexdecimal digits, '0'-'9', 'a'-'f', 'A'-'F'
#define _PU	0x10	// punctuation
#define _CN	0x20	// FF, NL, CR, HT, VT
#define _BB	0x40	// BEL, BS
#define _SP	0x80	// space
#define _XS	0x100	// extra space
#define _XA	0x200	// extra alphabetics

/* function declarations */
int isalnum(int), isalpha(int), iscntrl(int), isdigit(int), isgraph(int);
int islower(int), isprint(int), ispunct(int), isspace(int), isupper(int);
int isxdigit(int), tolower(int), toupper(int);

extern const short* _Ctype, * _Tolower, * _Toupper;

/* macros overrides */
#define isalnum(c)		(_Ctype[(int) (c)] & (_LO|_UP|_DI|_XA))
#define isalpha(c)		(_Ctype[(int) (c)] & (_LO|_UP|_XA))
#define iscntrl(c)		(_Ctype[(int) (c)] & (_CN|_BB))
#define isdigit(c)		(_Ctype[(int) (c)] & (_DI))
#define isgraph(c)		(_Ctype[(int) (c)] & (_LO|_UP|_DI|_PU|_XA))
#define ispunct(c)		(_Ctype[(int) (c)] & (_PU))
#define islower(c)		(_Ctype[(int) (c)] & (_LO))
#define isupper(c)		(_Ctype[(int) (c)] & (_UP))
#define isprint(c)		(_Ctype[(int) (c)] & (_LO|_UP|_DI|_SP|_PU|_XA))
#define isspace(c)		(_Ctype[(int) (c)] & (_SP|_CN))
#define isxdigit(c)		(_Ctype[(int) (c)] & (_XD))
#define tolower(c)		_Tolower[(int) (c)]
#define toupper(c)		_Toupper[(int) (c)]

#endif
