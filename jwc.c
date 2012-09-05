#include <stdio.h>
#include "w.h"

int main()
{
	if (!w_parse()) {
		fprintf(stderr, "ERROR!\n");
		return 1;
	}
	return 0;
}
