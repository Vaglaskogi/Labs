/**
 * \file
 * \author	Николай Букатин
 */

#ifndef _LABS_H
#define _LABS_H

#include <stddef.h>
#include <stdio.h>



/*
 *	Macros definition
 */




/*
 *	Type declaration
 */


struct tStruct
{
	int 	a;
	double 	d;
	short 	b;
	int 	c;
};

struct _node_
{
	struct _node_ *next;
	struct _node_ *prev;
	void *pr;
	void (*type)(void *);
};

struct _list_
{
	struct _node_ *head;
	struct _node_ *tail;
};




/*
 *	Data declaration
 */



/*
 *	Function declaration
 */

#ifdef __cplusplus
extern "C" {
#endif
void printInt(void *);
void printDbl(void *);
void printSrt(void *);
#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
