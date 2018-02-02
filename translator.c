#include "iostream.h"
#include "stdio.h"
//Data structure to hold 3ac instruction
typedef struct {
InstrType typ; // assign, goto...
SymtabEntry *in1;
SymtabEntry *in2
SymtabEntry *out;
int target; // jump target
Operator op
} Instruction3AC;

//Data structure to hold symbol table

