#include <stdio.h>

#define ASSERT(truth) if(!truth) {printf("ASSERT FAILED %d:true\n", truth);}
#define ASSERT_EQUALS(value, expected) if(value != expected) {printf("ASSERT FAILED %d:%d\n", value, expected);}
