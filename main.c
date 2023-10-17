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



struct _data_ sam;

func_t funcArray[] = {
	(func_t)print_int,
	(func_t)print_dbl,
	(func_t)print_srt,
	(func_t)print_flt
};

func_str_t func_str_Array[] = {
	(func_str_t)str_to_int,
	(func_str_t)str_to_double,
	(func_str_t)str_to_short,
	(func_str_t)str_to_float
};

const char *frmtArray[] = {
	"Int = %d\n",
	"Double = %.5f\n",
	"Short = %hd\n",
	"Float = %.5f\n"
};

struct _node_ val[] = {
	{val+1, NULL,	NULL, NULL, NULL}, 
	{val+2,	val, 	NULL, NULL, NULL},
	{val+3,	val+1, 	NULL, NULL, NULL},
	{NULL, 	val+2, 	NULL, NULL, NULL}
};

struct _node_ *p = val;
struct _list_ zas = {val,val+((sizeof(val)/sizeof(val[0]))-1)};



/*
 *	Function(s) definition:
 */



int main()
{	
	FILE * config = fopen("config","r");
	if (config == NULL) {
		perror("config open error");
	}
	else {
		char str[255];
		char *ptr = str;
		char *ptr2;
		char *ptr3;

		while (!feof(config) && p)
		{
			fgets(str,sizeof(str),config);

			ptr = str;
			ptr2 = ptr;
			ptr3 = ptr2;

			while (*ptr != '\0') {
				if (*ptr == '\t') {
					*ptr = '\0';
					short i = (short)strtol(ptr2, NULL, 0);
					p->func = funcArray[i];
					p->frmt = frmtArray[i];
					ptr2 = ptr+1;
				}
				if (*ptr == '\n') {
					*ptr = '\0';
					p->param = func_str_Array[(short)strtol(ptr3, NULL, 0)] (ptr2);
					ptr2 = ptr+1;
				}
				ptr++;
			}
			(*p->func)(p->frmt,p->param);
			p = p->next;
		}
	};

	if (fclose(config) == EOF){
		perror("config close error");
	}
	
	return 0;
}
