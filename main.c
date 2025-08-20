#include <stdio.h>
#include "ram.h"

int main() {
  struct Memory m_ram;
  m_ram.allocate('a');
  return 0;
}

