#include <stdio.h>
#include <stdlib.h>
#include "output.h"
#include "errors.h"

void error(char *s)
{
	emit("<span class='error'>Error: %s</span>\n", s);
}

void fatal(char *s)
{
	error(s);
	exit(1);
}

void expected(char *s)
{
	emit("<span class='error'>Error: %s expected</span>\n", s);
	exit(1);
}

void undefined(char *name)
{
	emit("<span class='error'>Error: Undefinied identifier %s</span>\n", name);
	exit(1);
}

void duplicated(char *name)
{
	emit("<span class='error'>Duplicated variable name: %s</span>\n", name);
	exit(1);
}