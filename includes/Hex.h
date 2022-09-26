#pragma once

#include <string>

namespace utils { inline namespace hex {

std::string strFromHex(const std::string &data) noexcept;
std::string operator"" _from_hex(const char *data,
                                 std::size_t size) noexcept;

}} // namespace utils::hex
