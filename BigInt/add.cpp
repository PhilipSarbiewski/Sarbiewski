#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"


int main() {
  std::ifstream in("data1-1.txt");    // Define stream for input
  if(!in) {                           // Make sure it opened correctly.
    std::cout << "Could not open data1-1.txt, exiting." << std::endl;
    return 1;
  }
  bigint lhs;
  bigint rhs;
  bigint sum;
  while (in >> lhs && in >> rhs){
    std::cout << "Left = " << lhs << std::endl;
    std::cout << "Right + " << rhs << std::endl;
    sum = lhs + rhs;
    std::cout << "Sum = " << sum << std::endl;
  }

  in.close();
  return 0;
}
