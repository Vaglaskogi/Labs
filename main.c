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

struct tStruct sam = {100, 222.22, 10, 2.2312};

func_t funcMas[] = {
	(func_t)printInt,
	(func_t)printDbl,
	(func_t)printSrt,
	(func_t)printFlt
};

char *frmtMas[] = {
	"%d\n",
	"%.0f\n",
	"%hd\n",
	"%.4f\n"
};

struct _node_ val[] = {
	{val+1, NULL,	&sam.a, "%d\n", 	NULL}, 
	{val+2,	val, 	&sam.d, "%.0f\n", 	NULL},
	{val+3,	val+1, 	&sam.b, "%hd\n", 	NULL},
	{NULL, 	val+2, 	&sam.c, "%.4f\n", 	NULL}
};

struct _node_ *p = val;
struct _list_ zas = {val,val+((sizeof(val)/sizeof(val[0]))-1)};

/*
 *	Function(s) definition:
 */

int main()
{	
	FILE * config;
	char str[30];
	int i = 0;

	config = fopen("config","r");

	while (p){
		i = 0;
		fgets(str,sizeof(str),config);

		while (str[i] != '\t' && i != sizeof(str))
		{
			p->func = funcMas[str[i]-'0'];
			//p->frmt = frmtMas+str[i]-'0';
			i++;
		}
		
	 	(*p->func)(p->frmt,p->pr);
	 	p = p->next;
	}

	fclose(config);	
	return 0;
}
