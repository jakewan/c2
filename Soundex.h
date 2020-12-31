#ifndef SOUNDEX_H
#define SOUNDEX_H

#include <string>

class Soundex {
   public:
   std::string encode(const std::string& word) {
      return zeroPad(word);
   }
   private:
   std::string zeroPad(const std::string& word) {
      return word + "000";
   }
};

#endif
