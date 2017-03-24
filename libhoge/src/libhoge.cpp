#include "libhoge.hpp"

#define VERSION_STRINGIFY_HELPER(v) #v
#define VERSION_STRINGIFY(v) VERSION_STRINGIFY_HELPER(v)
#define VERSION_STRING             \
  VERSION_STRINGIFY(VERSION_MAJOR) \
  "." VERSION_STRINGIFY(VERSION_MINOR) "." VERSION_STRINGIFY(VERSION_PATCH)

std::string get_version() { return VERSION_STRING; }

uint64_t get_version_hex() { return VERSION_HEX; }
