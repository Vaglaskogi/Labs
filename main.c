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

struct tStruct sam = {11, 12, 13, 14};
 

struct _node_ val[] = {
	{val+1, NULL,	&sam.a, &printInt}, 
	{val+2,	val, 	&sam.d, &printDbl},
	{val+3,	val+1, 	&sam.b, &printSrt},
	{NULL, 	val+2, 	&sam.c, &printInt}
};
struct _node_ *p = val;

struct _list_ zas = {val,val+((sizeof(val)/sizeof(val[0]))-1)};

/*
 *	Function(s) definition:
 */

int main()
{	
	while (p){
		p->type(p->pr);
		p = p->next;
	}
	p = zas.tail;
	while (p){
		p->type(p->pr);
		p = p->prev;
	}
	return 0;
}
