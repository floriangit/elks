#ifndef _MALLOC_H
#define	_MALLOC_H

typedef union mem_cell
{
   union mem_cell *next;	/* A pointer to the next mem */
   unsigned int size;		/* An int >= sizeof pointer */
   char *depth;			/* For the alloca hack */
}
mem;

#ifdef VERBOSE
void __noise(char *y, mem *x);
#else
#define __noise(y,x)
#endif

#define m_deep(p)  ((p) [0].depth)	/* For alloca */
#define m_next(p)  ((p) [1].next)	/* For malloc and alloca */
#define m_size(p)  ((p) [0].size)	/* For malloc */

extern mem *__freed_list;

#endif
