#include <stdint.h>
#include <stdio.h>

#ifndef ram
#define ram
struct Memory {
  void allocate(char v) {
    printf("test { }");
  }
  union {
    struct {
        uint8_t test[0x10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    };
	    uint8_t data[0x100];
  };
};
#endif
