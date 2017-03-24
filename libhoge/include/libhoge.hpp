#ifndef LIBHOGE_H
#define LIBHOGE_H

#include <string>

#define VERSION_MAJOR 1
#define VERSION_MINOR 2
#define VERSION_PATCH 3

#define VERSION_HEX \
  ((VERSION_MAJOR << 16) | (VERSION_MINOR << 8) | (VERSION_PATCH))

std::string get_version();

uint64_t get_version_hex();

#endif  // LIBHOGE_H
