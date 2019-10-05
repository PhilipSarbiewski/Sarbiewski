#include <iostream>
#include "bigint.hpp"


int main (){
bigint x = 100;
std::cout << "100! = " << x.factorial() << '\n';
 std::cout << "Start at 1 and go untill you reach the input number say 4 " << '\n';
 std::cout << "Factoral = 1 * 1; 1 = 1 * 2; 2 = 2 * 3; 6 = 6 * 4" << '\n';
 std::cout << "untill we reach *this ie. the input number." << '\n';
 std::cout << "Return the final result after finnished looping 6 * 4 = 24" << '\n';
 std::cout << "One way to find how many trailing zeros is see how many factors of ten are\
 within the factorial;" << '\n';
}

