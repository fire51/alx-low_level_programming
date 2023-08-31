#include "main.h"

/**
*binary_to_uint : converts a binary number to an unsigned int
*@b is pointing to a string of 0 and 1 chars
*return: unsigned int
**/
unsigned int binary_to_uint(const char *b);
{
Unsigned int value = 0;
if (!b)
return(0);
while(*b)
{
if(*b !='0' && *b ! = '1')
value = value *2 + (*b++ -'0');

}
return (value);
}

