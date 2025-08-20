#include <stdint.h>
#ifndef ram
#define ram
struct Memory {
	uint8_t data[128];
	Memory() {
	data = { 0 };
	}	
}
#endif
