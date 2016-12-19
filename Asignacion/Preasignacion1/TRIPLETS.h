/*
** Para ser usado en Computacion I y II.
*/

/* -- specific C macro (needed for preprocessing!) */
#ifndef	_TRIPLETS_H
#define _TRIPLETS_H

#include <stdlib.h>
#include <stdio.h>

/* Useful definitions */
#define MAX(a, b) ((a) > (b)) ? (a) : (b)
#define MIN(a, b) ((b) > (a)) ? (a) : (b)

/* Defining boolean constants as enums, small and all caps */
enum {false, true};
enum {FALSE, TRUE};

typedef int bool;
typedef int bool_t;

/* Defining macros for memory allocation */
#define new(POINTER) (POINTER = malloc(sizeof(*POINTER)))
#define newcleared(POINTER) (POINTER = calloc(sizeof(*POINTER), 1))
#define delete(POINTER) (free(POINTER), POINTER = NULL)

/* General assertion (predicate) */
#define _assert(predicate) check_assert("Assertion does not hold for",     predicate)

/* Precondition (predicate) */
#define _pre(predicate)    check_assert("Precondition does not hold for",  predicate)

/* Postcondition (predicate) */
#define _post(predicate)   check_assert("Postcondition does not hold for", predicate)

/* Invariant (predicate) */
#define _inv(predicate)    check_assert("Invariant does not hold for",     predicate)

/* Precondition (integer expression) */
#define _bound(intexpr)    check_assert("Bound does not hold for",    (intexpr) >= 0)

#ifdef	NDEBUG

#define check_assert(message, predicate)   ((void)0)

#else /* Not NDEBUG.  */

#define check_assert(message, predicate)  \
    ((void) ((predicate) ? 0 : __check_assert (message, #predicate, __FILE__, __LINE__)))

#define __check_assert(message, predicate, file, line) \
    ((void)printf (">>> At %s:%u:  %s '%s'\n<<< Execution will stop now.\n", file, line, message, predicate), exit(1), 0)

#endif  /* NDEBUG */

/* Note use of ANSI-C \stringize" facility.  */

#endif /* _TRIPLETS_H */
