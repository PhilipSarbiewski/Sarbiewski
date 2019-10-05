#include <iostream>

#ifndef CS2_BIGINT_HPP
#define CS2_BIGINT_HPP


const int Capacity = 400;
class bigint{
public:
  bigint();
  bigint(int);
  bigint(const char []);
  void debugprint(std::ostream&) const;
  bool operator==(const bigint&) const;
  bigint operator+(const bigint&)const;
  int operator [] (int) const;
  friend std::ostream& operator << (std::ostream&, const bigint&);
  friend std::istream& operator >> (std::istream&, bigint&);
  bigint timesDigit(int) const;
  bigint times10(int) const;
  bigint operator * (const bigint&) const;
  bigint factorial() const;
private:
  int numArray[Capacity];
};


#endif

