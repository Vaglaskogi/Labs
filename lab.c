/******************************//*!
 * \file
 * \brief	Описание
 * \author	Букатин Николай
 * \date	Создан:
 * \date	Изменён:
 */


#include "labs.h"

/*
 *	Data definition:
 */


/*
 *	Function(s) definition:
 */


/******************************//*!
	Описание
	\param[out]	a	...
	\param[in]	b	...
	\return			...
*/

void printInt(const char *format, void *pr)
{
	printf(format, *(int *)pr);
}

void printDbl(const char *format, void *pr){
	printf(format, *(double *)pr);
}

void printSrt(const char *format, void *pr){
	printf(format, *(short *)pr);
}

void printFlt(const char *format, void *pr){
	printf(format, *(float *)pr);
}

int sumVal(int a, int b)
{
	return a+b;
}

int diffVal(int a, int b)
{
	return a-b;
}

int calcVal(int a, int b)
{
	int temp;
	if (a>b){
		temp = diffVal(a,b);
	}
	else{
		temp = sumVal(a,b);
	}
	return temp;
}