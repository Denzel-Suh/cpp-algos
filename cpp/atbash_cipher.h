#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>
#include <iostream>

namespace atbash_cipher {
    std::string encode(std::string text);
    std::string encode2(std::string intext);
    std::string decode(std::string text);
    std::string decode2(std::string intext);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H