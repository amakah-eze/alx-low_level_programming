#include "main.h"

/**
*@a:the integer to compute its absolute value.
*Return:return the abs value
*
*/
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
