#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H
#include <string>

namespace atbash_cipher {
    std::string encode(std::string text);
    std::string encode2(std::string intext);
    std::string char_swap(std::string text, int l);
    std::string grouper(std::string text, int l);
    std::string decode(std::string text);
    std::string decode2(std::string intext);
    std::string stripper(std::string text, int l);
}  // namespace atbash_cipher

#endif // ATBASH_CIPHER_H