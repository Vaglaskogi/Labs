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

void printInt(void *pr){
	printf("%d\n", *(int *)pr);
}

void printDbl(void *pr){
	printf("%.0f\n", *(double *)pr);
}

void printSrt(void *pr){
	printf("%hd\n", *(short *)pr);
}

int sumVal(int a, int b){
	return a+b;
}

int diffVal(int a, int b){
	return a-b;
}