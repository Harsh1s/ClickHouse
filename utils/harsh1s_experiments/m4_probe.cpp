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
    {"2025-06-21", 371629u},
    {"2025-06-22", 566098u},
    {"2025-06-26", 625352u},
    {"2025-07-01", 846261u},
    {"2025-07-04", 244350u},
};

constexpr std::size_t case_count() { return sizeof(kCases) / sizeof(kCases[0]); }

}  // namespace harsh1s_yearlong
