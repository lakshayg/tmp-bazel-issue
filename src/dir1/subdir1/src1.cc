#include <iostream>
#include <string>

#include "dir1/subdir1/src1.h"

int main() {
  std::cout << "sizeof(string) = " << SizeOf<std::string>::value << '\n';
}
