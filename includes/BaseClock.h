#pragma once

#include <chrono>

namespace utils { inline namespace time {

struct BaseClock {
    BaseClock(const char *str);
    ~BaseClock();

private:
    const char *name;
    std::chrono::system_clock::time_point start;
};

}} // namespace utils::timer