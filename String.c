#include "String.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

UINT i = 0;
UINT size = 1;

string getString()
{
    string str = (string)malloc(sizeof(string));
	  while ((str[i++]=getche())!='\r')//_getche for visual studio
	  {
		  str = (string)realloc(str, ++size);
	  }
	  str[i] = '\0';
	  i = 0; size = 1;
	  printf("\n");
    return str;
}
