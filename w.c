#include <string.h>

/* #define YY_DEBUG */
#define YY_CTX_LOCAL
#define YY_CTX_MEMBERS \
	int line; \
	int program_valid;

#include "w-peg.c"

int w_parse(void)
{
	yycontext ctx;
	int res;

	memset(&ctx, 0, sizeof(ctx));
	res = yyparse(&ctx);
	return res;
}
