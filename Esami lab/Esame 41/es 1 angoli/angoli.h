#pragma once 
#include <stdint.h>
struct angolo {
	uint16_t gradi;
	uint8_t primi;
	uint8_t secondi;
};
extern struct angolo somma_angoli(struct angolo a, struct angolo b);