#ifndef stack_h
#define stack_h
#include "boolean.h"

typedef struct stacknode {
	char data;
	struct stacknode *next;
} *cstack;

void init_cstack(cstack *);
boolean is_cempty(cstack);
boolean is_cfull(void);
void cpush(cstack *, char);
char cpop(cstack *);
void print_cstack(cstack);
boolean fsm(char);
boolean isopen(char);
boolean isclose(char);

#endif