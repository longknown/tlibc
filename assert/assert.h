#undef assert
#ifdef NDEBUG

#define assert(ignore)	((void)0)

#else

void _Assert(const char *);
#define _VAL(s)	_STR(s)
#define _STR(s)	#s
#define assert(test) ((test)? (void)0 : \
		_Assert(#test ", file " __FILE__ ", line " _VAL(__LINE__)))

#endif
