#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

uint16_t getx(uint16_t *reg){
	uint16_t x=*reg&1;
	x^=(*reg>>2)&1;
	x^=(*reg>>3)&1;
	x^=(*reg>>5)&1;
	return x;
}
void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
		uint16_t head=getx(reg);
		*reg=*reg>>1;
		*reg=*reg|(head<<15);	

}

