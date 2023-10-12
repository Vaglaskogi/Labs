/**
 * \file
 * \author	Николай Букатин
 */

#ifndef _LABS_H
#define _LABS_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



/*
 *	Macros definition
 */




/*
 *	Type declaration
 */


typedef void (*func_t) (const char *, void *);
typedef struct _node_ * node_t;

struct tStruct
{
	int 	a;
	double 	d;
	short 	b;
	float 	c;
};

struct _node_
{
	node_t 		next;
	node_t 		prev;
	void *		pr;
	const char* 	frmt;
	func_t 		func;
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
void printInt(const char *, int *);
void printDbl(const char *, double *);
void printSrt(const char *, short *);
void printFlt(const char *, float *);
int sumVal(int, int);
int diffVal(int, int);
int calcVal(int, int);
#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
