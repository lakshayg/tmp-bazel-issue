#include <iostream>
#include <string>

#include "src1.h"

int main() {
  std::cout << "sizeof(string) = " << SizeOf<std::string>::value << '\n';
}
