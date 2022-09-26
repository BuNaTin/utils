#include "Hex.h"

namespace {
inline char getSymb(char b) noexcept {
    if (47 < b && b < 58) {
        b -= 48;
    } else if (64 < b && b < 71) {
        b -= 55;
    } else if (96 < b && b < 103) {
        b -= 87;
    } else {
        b = '\0';
    }
    return b;
}

std::string _strFromHexImpl(const char *data, std::size_t size) {
    std::string ans;
    ans.reserve(size / 2);
    size -= (size != 0);
    for (std::size_t i = 0; i < size; i += 2) {
        unsigned char character = getSymb(data[i]) * 0x10;
        character |= getSymb(data[i + 1]);
        ans.push_back(character);
    }
    return ans;
}

} // namespace

namespace utils { inline namespace hex {

std::string strFromHex(const std::string &str) noexcept {
    return _strFromHexImpl(str.c_str(), str.size());
}

std::string operator"" _from_hex(const char *data,
                                 std::size_t size) noexcept {
    return _strFromHexImpl(data, size);
}

}} // namespace utils::hex
