/******************************//*!
 * \file
 * \brief	main файл проектов Labs
 * \author	Николай Букатин
 * \date	Создан: 04.10.2023
 * \date	Изменён: 04.10.2023
 */

#include <stdio.h>
#include <stddef.h>
#include "labs.h"

/*
 *	Data definition:
 */


/*
 *	Function(s) definition:
 */

int main(int argc, char const *argv[])
{
	char string[256];
	char a,b;
	gets(string);
	scanf("%c\n", &a);
	scanf("%c", &b);
	replace(string,a,b);
	printf("%s\n", string);
	return 0;
}
