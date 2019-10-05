#include <iostream>
#include "bigint.hpp"

// default constr
bigint::bigint(){
  for(int i = 0; i < Capacity; ++i){
    numArray[i] = 0;
  }
}
///////////////////////////////////////////////////////////////////
//Int constructor
bigint::bigint(int a) : bigint(){
  for (int i = 0; i < Capacity; ++i){
    numArray[i] = a%10;
    a = a/10;
  }
}
///////////////////////////////////////////////////////////////////
// const char consructor
bigint::bigint(const char g[]) : bigint(){
  int i = 0;
  while (g[i] != 0){
    ++i;
  }
    for (int a = 0; a<i; ++a){
      numArray[a] = int(g[i -1 -a]) - int('0');
    }
}
///////////////////////////////////////////////////////////////////
//equal operator
bool bigint::operator==(const bigint& rhs) const {
  for (int i = 0; i < Capacity; ++i){
    if (numArray[i] != rhs.numArray[i]) return false;
  }
  return true;
}
///////////////////////////////////////////////////////////////////
//output operator
std::ostream& operator<<(std::ostream& out, const bigint& rhs){
  bool Ex = false;
   for (int i = Capacity - 1;i >= 0; i--){
    if (rhs.numArray[i] != 0)
      Ex = true;

    if (Ex == true)
      out << rhs.numArray[i];
    }
  if  (Ex == false)
  out << "0";
  return out;
}
///////////////////////////////////////////////////////////////////
//debug print seperat numbers does print leading zeros
void bigint::debugprint(std::ostream& out) const{
  for (int i = Capacity - 1; i >= 0; --i){
    out << numArray[i];
    out << " | ";
  }
  out << std::endl;
}
///////////////////////////////////////////////////////////////////
//Add operator
bigint bigint::operator+(const bigint& rhs) const{
  bigint result;
  for (int i = 0; i < Capacity; ++i){
    if (result.numArray[i] + numArray[i] + rhs.numArray[i] < 10){
      result.numArray[i] += (numArray[i] +rhs.numArray[i]);
    }
    else if (result.numArray[i] + numArray[i] + rhs.numArray[i] >=10){
      result.numArray[i] += (numArray[i] + rhs.numArray[i] - 10);
      if (i + 1 > Capacity){
        std::cout << "Too Large of Number: " << std::endl;
        break;
      }
      result.numArray[i + 1] += 1;
    }
  }
  return result;
}
///////////////////////////////////////////////////////////////////
// [] Operator
int bigint::operator[](int c) const{
  return numArray[c];
}
///////////////////////////////////////////////////////////////////
// >> Operator
 std::istream& operator >> (std::istream& inputN, bigint& rhs) {
   char cha;
   char tmp[Capacity];
   inputN >> cha;
   int i;
   for(i = 0; i < Capacity && cha != ';'; ++i){
    tmp[i] = cha;
    inputN >> cha;
   }
   tmp[i] = '\0';
   rhs = bigint(tmp);
   return inputN;
}
///////////////////////////////////////////////////////////////////
// Bigint times single digits
bigint bigint::timesDigit(int num) const{
bigint product = 0;
  int carry = 0;
  for(int i = 0;i < Capacity; ++i){
    product.numArray[i] = num * numArray[i] +  carry;
    carry = product.numArray[i] / 10;
    product.numArray[i] = product.numArray[i] % 10;
  }
  return product;
}
///////////////////////////////////////////////////////////////////
// Bigint times power of tens
bigint bigint::times10(int pow) const {
  bigint tmp;
  for (int i = pow; i < Capacity - 1; ++i){
    tmp.numArray[i] = numArray[i - pow];
  }
  return tmp;
}
///////////////////////////////////////////////////////////////////
// Bigint Mult Operator
bigint bigint::operator * (const bigint& a) const{
bigint product = 0;
bigint tmp = 0;
for (int i = 0; i < Capacity - 1; ++i){
  tmp = timesDigit(a.numArray[i]);
    // product = product + ((a * numArray[i]) * 10^i)
    product = product + tmp.times10(i);
 }
 return product;
}
///////////////////////////////////////////////////////////////////
// Bigint times power of tens
bigint bigint::times10(int pow) const {
  bigint tmp;
  for (int i = pow; i < Capacity - 1; ++i){
    tmp.numArray[i] = numArray[i - pow];
  }
  return tmp;
}
///////////////////////////////////////////////////////////////////
// Bigint Mult Operator
bigint bigint::operator * (const bigint& a) const{
bigint product = 0;
bigint tmp = 0;
for (int i = 0; i < Capacity - 1; ++i){
  tmp = timesDigit(a.numArray[i]);
    // product = product + ((a * numArray[i]) * 10^i)
    product = product + tmp.times10(i);
 }
 return product;
}
///////////////////////////////////////////////////////////////////
// Challenge Question Facotorial
bigint bigint::factorial() const{
  bigint factorial = 1;                            // Because 0 will result in 0;
  for (bigint i(1); !(i == *this + 1); i = i + 1){ // Start at 1 and go untill you reach the\
 input number say 4;
    factorial = factorial * i;                     // Factoral = 1 * 1; 1 = 1 * 2; 2 = 2 * 3\
; 6 = 6 * 4; untill we reach *this ie. the input number.
  }
  return factorial;                                // Return the final result after finnishe\
d looping 6 * 4 = 24;
}
