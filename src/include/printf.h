/*
 * printf.h
 *
 *      Author: Freddie Chopin, http://www.freddiechopin.info/
 */

#ifndef PRINTF_PRINTF_H_
#define PRINTF_PRINTF_H_

#define PRINTF_HAVE_PRINTF					0				///< selects whether to compile printf_()
#define PRINTF_HAVE_SPRINTF					1				///< selects whether to compile sprintf_()
#define PRINTF_HAVE_PRINTF_SPRINTF			(PRINTF_HAVE_PRINTF && PRINTF_HAVE_SPRINTF)


#define stdout_								&stdout_file	///< stdout_ used by printf

/*
+=============================================================================+
| strange variables
+=============================================================================+
*/

/// a simplified FILE struct - only basic functionality which can be used by printf_()
typedef struct printf_file_s
{
#if PRINTF_HAVE_SPRINTF == 1
	char *buffer;							///< pointer to buffer for data
#endif

#if PRINTF_HAVE_PRINTF == 1
	void (*put)(char);						///< put() function for writing data
#endif

	int length;								///< user's variable for current length
} printf_file_t;

/*
+=============================================================================+
| global variables
+=============================================================================+
*/

/*
+=============================================================================+
| global functions' declarations
+=============================================================================+
*/

#if PRINTF_HAVE_PRINTF == 1
int printf_(const char *format, ...);
#endif

#if PRINTF_HAVE_SPRINTF == 1
int sprintf_(char *buffer, const char *format, ...);
#endif

#endif /* PRINTF_PRINTF_H_ */
