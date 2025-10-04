#include <iostream>

#include "src/where.hpp"
using namespace std;
int main() {
  // Your driver program goes here
  cout <<  "Where the character e first shows up in 'The quick brown fox' is at: " << (findString("The quick brown fox", 'e')) << endl;
  cout <<  "Where the string e first shows up in 'The quick brown fox' is at: " << (findString("The quick brown fox", "e")) << endl;
  cout <<  "Where a space first shows up in 'The quick brown fox' is at: " << (findString("The quick brown fox", ' ')) << endl;
  cout <<  "Where 'quick' first shows up in 'The quick brown fox' is at: " << (findString("The quick brown fox", "quick")) << endl;
  cout <<  "Where 'quiet' first shows up in 'The quick brown fox' is at: " << (findString("The quick brown fox", "quiet")) << endl;
}
