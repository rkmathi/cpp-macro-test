#include <iostream>
#include "libhoge/include/libhoge.hpp"

int main(int, char const**) {
  std::cout << "get_version():     [" << libhoge::LibHoge::get_version() << "]" << std::endl;
  std::cout << "get_version_hex(): [" << libhoge::LibHoge::get_version_hex() << "]" << std::endl;
  return 0;
}
