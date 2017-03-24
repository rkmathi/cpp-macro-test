#include <iostream>
#include "libhoge/include/libhoge.hpp"

int main(int, char const**) {
  std::cout << "get_version():     [" << get_version() << "]" << std::endl;
  std::cout << "get_version_hex(): [" << get_version_hex() << "]" << std::endl;
  return 0;
}
