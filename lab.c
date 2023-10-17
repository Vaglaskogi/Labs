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

void print_int(const char *format, int *pr)
{
	printf(format, *pr);
}

void print_dbl(const char *format, double *pr)
{
	printf(format, *pr);
}

void print_srt(const char *format, short *pr)
{
	printf(format, *pr);
}

void print_flt(const char *format, float *pr)
{
	printf(format, (double)*pr);
}

int* str_to_int(char *ptr)
{
	int *result = (int*) malloc(sizeof(int));
	if ( result != NULL ) {
		*result = (int) strtol(ptr, NULL, 0);
	}
	return result;
}

double* str_to_double(char *ptr)
{
	double *result = (double*) malloc(sizeof(double)); 
	if ( result != NULL ) {
		*result = strtof(ptr, NULL);
	}
	return result;
}

short* str_to_short(char *ptr)
{
	short *result = (short*) malloc(sizeof(short));
	if ( result != NULL ) {
		*result = (short) strtol(ptr, NULL, 0);
	}
	return result;
}

float* str_to_float(char *ptr)
{
	float *result = (float*) malloc(sizeof(float));
	if ( result != NULL ) {
		*result = (float) strtof(ptr, NULL);
	}
	return result;
}

int sum_val(int a, int b)
{
	return a+b;
}

int diff_val(int a, int b)
{
	return a-b;
}

int calc_val(int a, int b)
{
	int result;
	if (a>b){
		result = diff_val(a,b);
	}
	else{
		result = sum_val(a,b);
	}
	return result;
}