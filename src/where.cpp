#include <string>
#include <vector>
#include "where.hpp"

using namespace std;
std::string hello() {
   return "Hello World!";
}

int findString(std::string word, char c) {
   for (int i = 0; i < word.length(); i++) {
      if (c == word[i]) {
         return i;
      }
   }
   return -1;
}

int findString(std::string word, char c, bool caseSense) {
   if (caseSense == true) {
      c = tolower(c);
      for (int i = 0; i < word.length(); i++) {
         word[i] = tolower(word[i]);
      }
   }
   for (int i = 0; i < word.length(); i++) {
      if (c == word[i]) {
         return i;
      }
   }
   return -1;
}


int findString(std::string word, std::string c) {
   int index = 0;
   bool isOnTrack = false;
   int temp = 0;

   for (int i = 0; i < word.length(); i++) {
      if (c[0] == word[i] && isOnTrack == false) {
         isOnTrack = true;
         index = i;
      }
      if (isOnTrack == true) {
         if (c[temp] != word[i]) {
            temp = 0;
            isOnTrack = false;
         }
         else if (temp == c.length() - 1) {
            return index;
         }
         else {
            temp++;
         }

      }


   }
   return -1;
}

int findString(std::string word, std::string c, bool caseSense) {
   int index = 0;
   bool isOnTrack = false;
   int temp = 0;

   if (caseSense == true) {
      for (int i = 0; i < word.length(); i++) {
         c[i] = tolower(c[i]);
      }
      for (int i = 0; i < word.length(); i++) {
         word[i] = tolower(word[i]);
      }
   }

   for (int i = 0; i < word.length(); i++) {
      if (c[0] == word[i] && isOnTrack == false) {
         isOnTrack = true;
         index = i;
      }
      if (isOnTrack == true) {
         if (c[temp] != word[i]) {
            temp = 0;
            isOnTrack = false;
         }
         else if (temp == c.length() - 1) {
            return index;
         }
         else {
            temp++;
         }

      }


   }
   return -1;
}