/******************************//*!
 * \file
 * \brief	main файл проектов Labs
 * \author	Николай Букатин
 * \date	Создан: 04.10.2023
 * \date	Изменён: 04.10.2023
 */

#include "labs.h"
#include <string.h>

/*
 *	Data definition:
 */

struct tStruct sam = {100, 222, 1, 2.2312};
 

struct _node_ val[] = {
	{val+1, NULL,	&sam.a, "%d\n", printInt}, 
	{val+2,	val, 	&sam.d, "%.0f\n", printDbl},
	{val+3,	val+1, 	&sam.b, "%hd\n", printSrt},
	{NULL, 	val+2, 	&sam.c, "%.4f\n", printFlt}
};

struct _node_ *p = val;
struct _list_ zas = {val,val+((sizeof(val)/sizeof(val[0]))-1)};

/*
 *	Function(s) definition:
 */

int main()
{	
	while (p){
		p->func(p->lp,p->pr);
		p = p->next;
	}	
	return 0;
}
