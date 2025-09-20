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
    {"2025-07-21", 525856u},
    {"2025-07-27", 179679u},
    {"2025-08-02", 561014u},
    {"2025-08-16", 798875u},
    {"2025-08-18", 243627u},
    {"2025-08-29", 384453u},
    {"2025-08-30", 693879u},
    {"2025-09-07", 769377u},
    {"2025-09-11", 857513u},
    {"2025-09-20", 644421u},
};

constexpr std::size_t case_count() { return sizeof(kCases) / sizeof(kCases[0]); }

}  // namespace harsh1s_yearlong
