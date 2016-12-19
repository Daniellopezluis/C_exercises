/*
** Para ser usado en Computacion I y II.
** Version 1.01 22/10/2010
*/

/* -- specific C macro (needed for preprocessing!) */
#ifndef	_TRIPLETS_H_INCLUDED
#define _TRIPLETS_H_INCLUDED

#ifndef TRIPLETS_H_INCLUDED
#define TRIPLETS_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>

/* Useful definitions */
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((b)>(a))?(a):(b))
#define ABS(a) ((a)?(a):(-a))

#define and &&
#define or  ||
#define not !

/* Defining boolean constants as enums, small and all caps */
enum {false, true};
enum {FALSE, TRUE};

typedef int bool;
typedef bool bool_t;

/* Defining macros for memory allocation */
#define CREATE(AbstractDataType) ((AbstractDataType*)malloc(sizeof(AbstractDataType)))
#define new(Pointer) Pointer = (void*)malloc(sizeof(*Pointer)))
#define newclearptr(Pointer) (Pointer = (void*)calloc(sizeof(*Pointer),1))
#define delete(Pointer) (free(Pointer), Pointer = NULL)
#define DESTROY(AbstractDataTypePtr) (free(AbstractDataTypePtr), AbstractDataTypePtr = NULL)

/* General assertion (Predicate) */
#define _assert(Predicate) check_assert("Assertion does not hold for", Predicate)

/* Precondition (Predicate) */
#define _pre(Predicate) check_assert("Precondition does not hold for", Predicate)

/* Postcondition (Predicate) */
#define _post(Predicate) check_assert("Postcondition does not hold for", Predicate)

/* Invariant (Predicate) */
#define _inv(Predicate) check_assert("Invariant does not hold for", Predicate)

/* Precondition (integer expression) */
#define _bound(IntExpression) check_assert("Bound does not hold for", (IntExpression) >= 0)

#ifdef NDEBUG

#define check_assert(Message,Predicate) ((void)0)

#else /* Not NDEBUG.  */

#define check_assert(Message,Predicate)  \
    ((void)((Predicate) ? 0 : __check_assert(Message, #Predicate, __FILE__, __LINE__)))

#define __check_assert(Message, Predicate, File, Line) \
    ((void)printf (">>> At %s:%u:  %s '%s'\n<<< Execution will stop now.\n", File, Line, Message, Predicate), exit(1), 0)

/* Note use of ANSI-C \stringize" facility.  */

#endif  /* NDEBUG */

#endif /* ifndef _TRIPLETS_H */

#endif // TRIPLETS_H_INCLUDED
