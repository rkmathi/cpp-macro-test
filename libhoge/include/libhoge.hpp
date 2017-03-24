#ifndef LIBHOGE_H
#define LIBHOGE_H

#include <string>

#define VERSION_MAJOR 1
#define VERSION_MINOR 2
#define VERSION_PATCH 3

#define VERSION_HEX \
    ((VERSION_MAJOR << 16) | (VERSION_MINOR << 8) | (VERSION_PATCH))

//#define VERSION_STRINGIFY_HELPER(v) #v
//#define VERSION_STRINGIFY(v) VERSION_STRINGIFY_HELPER(v)
//#define VERSION_STRING \
//    VERSION_STRINGIFY(VERSION_MAJOR) "." \
//    VERSION_STRINGIFY(VERSION_MINOR) "." \
//    VERSION_STRINGIFY(VERSION_PATCH)

namespace libhoge {

class LibHoge {
 public:
  static std::string get_version();
  static uint64_t get_version_hex();

  //static std::string get_version() { return VERSION_STRING; }
  //static uint64_t get_version_hex() { return VERSION_HEX; }
};
} // namespace libhoge

#endif  // LIBHOGE_H
