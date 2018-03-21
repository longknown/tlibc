#include <stdio.h>
#include <stdlib.h>

void _Assert(const char *msg)
{
	fputs("Assertion failed: ", stderr);
	fputs(msg, stderr);
	putc('\n', stderr);

	abort();
}
