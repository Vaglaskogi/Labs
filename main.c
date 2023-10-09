/******************************//*!
 * \file
 * \brief	main файл проектов Labs
 * \author	Николай Букатин
 * \date	Создан: 04.10.2023
 * \date	Изменён: 04.10.2023
 */

#include "labs.h"

/*
 *	Data definition:
 */



struct tStruct sam = {11,12,13,14};
struct _valuePrint_ val [4] = {
	{&sam.a, 0},
	{&sam.d, 1},
	{&sam.b, 2},
	{&sam.c, 0}
};
struct _valuePrint_ *p = val;
struct _valuePrint_ *end = &val[3];



/*
 *	Function(s) definition:
 */

int main(int argc, char const *argv[])
{
	for (; p <= end; p++) {
		switch ( p->type ) {
			case 0:
				printf("%d\n", *( int * )(p->p) );
				break;
			case 1:
				printf("%.0f\n", *( double * )(p->p) );
				break;
			case 2:
				printf("%hd\n", *( short * )(p->p) );
				break;
			default:
				break;
		}
	}
	return 0;
}
