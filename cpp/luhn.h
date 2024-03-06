#if !defined(LUHN_H)
#define LUHN_H

#include <string>

namespace luhn {
    bool valid(std::string card_no);
}  // namespace luhn

#endif // LUHN_H