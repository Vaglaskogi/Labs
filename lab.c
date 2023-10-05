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
void replace(char *string1, char a, char b){
	while(*string1 != NULL){
		if (*string1 == a)
		{
			*string1 = b;
		}
		string1++;
	}
}

