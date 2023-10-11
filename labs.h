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


struct tStruct
{
	int 	a;
	double 	d;
	short 	b;
	float 	c;
};

struct _node_
{
	struct _node_ *next;
	struct _node_ *prev;
	void *pr;
	const char *lp;
	void (*func)(const char *, void *);
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
void printInt(const char *, void *);
void printDbl(const char *, void *);
void printSrt(const char *, void *);
void printFlt(const char *, void *);
int sumVal(int, int);
int diffVal(int, int);
int calcVal(int, int);
#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
