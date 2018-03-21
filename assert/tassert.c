#define NDEBUG
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

static int val = 0;
void abthandler(int sig)
{
	if(val == 1) {
		puts("SUCCESS testing <assert.h>");
		exit(0);
	} else {
		puts("FAILED testing <assert.h>");
		exit(1);
	}
}

void dummy()
{
	int i = 0;
	assert(i == 0);
	assert(i == 1);
}

#undef NDEBUG
#include "assert.h"

int main()
{
	// install signal handler to catch SIGABRT signal
	assert(signal(SIGABRT, abthandler) != SIG_ERR);
	dummy();
	assert(val == 0);
	val++;
	fputs("Sample assertion failure message --\n", stderr);
	assert(val == 0);
	puts("FALIED testing <assert.h>");

	return 0;
}
