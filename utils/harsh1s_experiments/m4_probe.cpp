#include <cstddef>
#include <cstdint>

namespace harsh1s_yearlong {

struct Case {
    const char* date;
    std::uint32_t seed;
};

constexpr Case kCases[] = {
    {"2025-06-07", 538405u},
    {"2025-06-08", 569745u},
    {"2025-06-15", 646906u},
};

constexpr std::size_t case_count() { return sizeof(kCases) / sizeof(kCases[0]); }

}  // namespace harsh1s_yearlong
