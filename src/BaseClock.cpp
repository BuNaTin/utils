#include "BaseClock.h"

#include <iostream>

namespace utils { inline namespace time {

BaseClock::BaseClock(const char *str)
        : name(str), start(std::chrono::system_clock::now()) {}
BaseClock::~BaseClock() {
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> diff = end - start;
    std::cout << name << ":" << diff.count() << std::endl;
}

}} // namespace utils::timer