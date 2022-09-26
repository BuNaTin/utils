#include "BaseClock.h"
#include "Types.h"

#include <iostream>

namespace utils { inline namespace time {

template<typename Func, typename... Args>
void BenchFunc(const char *name,
               u64 from,
               u64 to,
               Func &&func,
               Args... args) {
    std::cout << name << " bench:\n";
    for (u64 end = from; end < to; end *= 10) {
        std::string time = std::to_string(end);
        BaseClock _(time.c_str());
        for (u64 i = 0; i < end; ++i) {
            func(args...);
        }
    }
}

}} // namespace utils::time
