#include <cmath>
#include <iostream>
#include <string>

using namespace std;

// return int 4 for exercise 0
int exercise0() { return 4; }

// return distance between the points (x1, y1), (x2, y2)
double exercise1(double x1, double y1, double x2, double y2) {
  double distance;
  distance = sqrt(pow((y1 - y2), 2) + pow((x1 - x2), 2));
  return distance;
}

// return the voewl count in the string
unsigned int exercise2(string s) {
  unsigned vowelCnt = 0;
  for (unsigned int i = 0; i < s.length(); i++) {
    if (s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' ||
        s.at(i) == 'u') {
      vowelCnt++;
    }
  }
  return vowelCnt;
}

// return the sum from 1 to n
int exercise3(int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;
}

// return the string reversed
string exercise4(string s) {
  string reverseStr = "";
  for (int i = s.size() - 1; i >= 0; i--) {
    reverseStr += s[i];
  }  // should I not use vector? is there a better method?
  return reverseStr;
}

// Return true if the string is a palindrome. Otherwise, return false.
bool exercise5(string s) {
    string reverseStr = "";
    for (int i = s.size() - 1; i >= 0; i--) {
    reverseStr += s[i];
  // use formula above once decided
    }
  return s == reverseStr;
}

// Return true if one of the arguments is true, but not both.
bool exercise6(bool x, bool y) {
  if (x && y) {
    return false;
  }
  if (y) {
    return true;
  }
  if (x) {
    return true;
  }
  return false;
} 

// Return a L33t version of the string.
// Make the following character substitutions. You only need to handle
// lowercase letters.
// a -> 4
// e -> 3
string exercise7(string s) {
  string newStr = "";
  for (unsigned int i = 0; i < s.size(); i++) {
    if (s.at(i) == 'a') {
      newStr += '4';
    }
    if (s.at(i) == 'e') {
      newStr += '3';
    } else {
      newStr += s.at(i);
    }
  }
  return newStr;
}

// Return the ROT13 rotation of the letters in the string.
string exercise8(string s) {
  char n;
  string rotString = "";
  for (unsigned int i = 0; i < s.size(); i++) {
    n = s.at(i);
    if (n >= 'a' && n <= 'm') {
        n = n + 13;
    } else if (n >= 'n' && n <= 'z') {
        n = n - 13;
    }
    rotString += n;
  }
  return rotString;
}

// Of the three function arguments, return the maximum.
int exercise9(int x, int y, int z) {
  int maxNum = x;
  if (y > maxNum) {
    maxNum = y;
  }
  if (z > maxNum) {
    maxNum = z;
  }
  return maxNum;
}
