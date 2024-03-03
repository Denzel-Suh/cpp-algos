#if !defined(LUHN_H)
#define LUHN_H

#include <string>
#include <iostream>

namespace luhn {
    bool valid(std::string card_no);
}  // namespace luhn

#endif // LUHN_H