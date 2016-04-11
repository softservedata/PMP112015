#ifndef STACK_H
#define STACK_H
#include "Node.h"
void push(Node *Stack, char el);
char pop(Node *Stack);
bool isEmpty(Node *Stack);
bool isnCons(char el);
#endif