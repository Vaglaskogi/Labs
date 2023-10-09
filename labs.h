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
	int a;
	double d;
	short b;
	int c;
};

struct _valuePrint_
{
	void *p;
	int type;
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
void funcA(struct tStruct );
void funcB(struct tStruct *);
#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
