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

typedef void (*func_t) (const char *, void *);
typedef void* (*func_str_t) (char *);
typedef struct _node_ * node_t;

/*
 *	Type declaration
 */



struct _data_
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
	void *		param;
	const char* 	frmt;
	func_t 		func;
};

struct _list_
{
	struct _node_ *head;
	struct _node_ *tail;
};


typedef int T;
 
#define CMP_EQ(a, b) ((a) == (b))
#define CMP_LT(a, b) ((a) < (b))
#define CMP_GT(a, b) ((a) > (b))


/*
 *	Data declaration
 */



/*
 *	Function declaration
 */

#ifdef __cplusplus
extern "C" {
#endif
void print_int(const char *, int *);
void print_dbl(const char *, double *);
void print_srt(const char *, short *);
void print_flt(const char *, float *);
int* str_to_int(char *);
double* str_to_double(char *);
short* str_to_short(char *);
float* str_to_float(char *);


int sum_val(int, int);
int diff_val(int, int);
int calc_val(int, int);
#ifdef __cplusplus
}
#endif

#endif /* _NAME_H */
