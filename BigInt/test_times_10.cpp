// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test
        int pow = 0;
        bi = bi.times10(pow);

        // Verify
        assert(bi == 3);  //Wrong. Will FAIL, fix and add tests cases

        std::cout << "3" << " * " << "10"  << "^" << pow << " = " << bi << '\n';
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3);

      // Test
      int pow = 1;
      bi = bi.times10(pow);

      // Verify
      assert(bi == 30);  //Wrong. Will FAIL, fix and add tests cases
      std::cout << "3" << " * " << "10"  << "^" << pow << " = " << bi << '\n';

    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3);

      // Test
      int pow = 2;
      bi = bi.times10(pow);

      // Verify
      assert(bi == 300);  //Wrong. Will FAIL, fix and add tests cases
      std::cout << "3" << " * " << "10"  << "^" << pow << " = " << bi << '\n';
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3);

      // Test
      int pow = 3;
      bi = bi.times10(pow);

      // Verify
      assert(bi == 3000);  //Wrong. Will FAIL, fix and add tests cases
      std::cout << "3" << " * " << "10"  << "^" << pow << " = " << bi << '\n';
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(4);

      // Test
      int pow = 4;
      bi = bi.times10(pow);

      // Verify
      assert(bi == 40000);  //Wrong. Will FAIL, fix and add tests cases
      std::cout << "4" << " * " << "10"  << "^" << pow << " = " << bi << '\n';
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi("4");

      // Test
      int pow = 3;
      bi = bi.times10(pow);

      // Verify
      assert(bi == "4000");  //Wrong. Will FAIL, fix and add tests cases
      std::cout << "4" << " * " << "10"  << "^" << pow << " = " << bi << '\n';
    }
    std::cout << "Done testing times10" << std::endl;
}

