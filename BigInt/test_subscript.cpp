// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {

    {
        // Setup
        bigint bi(764321);

        // Test
        int digit0 = bi[0];
        int digit1 = bi[1];
        int digit2 = bi[2];
        int digit3 = bi[3];
        int digit4 = bi[4];
        int digit5 = bi[5];


        // Verify
        assert(bi    == 764321);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit0 == 1);
        assert(digit1 == 2);
        assert(digit2 == 3);
        assert(digit3 == 4);
        assert(digit4 == 6);
        assert(digit5 == 7);

    }
    {
      // Setup
      bigint bi(893604132);

      // Test
      int digit0 = bi[0];
      int digit1 = bi[1];
      int digit2 = bi[2];
      int digit3 = bi[3];
      int digit4 = bi[4];
      int digit5 = bi[5];
      int digit6 = bi[6];
      int digit7 = bi[7];
      int digit8 = bi[8];

      // Verify
      assert(bi    == 893604132);  //Wrong.  Will FAIL.  Fix and add test cases.
      assert(digit0 == 2);
      assert(digit1 == 3);
      assert(digit2 == 1);
      assert(digit3 == 4);
      assert(digit4 == 0);
      assert(digit5 == 6);
      assert(digit6 == 3);
      assert(digit7 == 9);
      assert(digit8 == 8);

    }
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
}

