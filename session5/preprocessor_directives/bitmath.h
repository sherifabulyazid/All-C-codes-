#ifndef _BITMATH_H_

#define CLEARBIT(num,b) num&=~(1<<b)
#define SETBIT(num,b) num|=(1<<b)
#define TOGGLE(num,b) num^=(1<<b)
#define GETBIT(num,b) (num>>b)&1

#endif
