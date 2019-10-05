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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }


    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(3);

      // Test
      bi = bi.timesDigit(2);

      // Verify
      assert(bi == 6);  
    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint bi(12);

      // Test
      bi = bi.timesDigit(12);

      // Verify
      assert(bi == 144);
    }
    
    std::cout << "Done testing bigint * digit" << std::endl;
}
