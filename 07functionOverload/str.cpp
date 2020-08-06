#include "str.h"

int mystrlen(char *p)
{
	int len = 0;
	
	while(*p) {
		len++;
		p++;
	}
	
	return len;
}