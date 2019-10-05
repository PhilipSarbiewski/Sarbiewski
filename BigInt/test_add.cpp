// bigint Test Program
//
// Tests:  int constructor, uses ==
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
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }
    {
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(11);
      bigint right(11);
      bigint result;

      // Test
      result = left + right;

      // Verify
      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 11);
      assert(right  == 11);
      assert(result == 22);



    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(20);
      bigint right(20);
      bigint result;

      // Test
      result = left + right;

      // Verify
      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 20);
      assert(right  == 20);
      assert(result == 40);

    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(50);
      bigint right(50);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 50);
      assert(right  == 50);
      assert(result == 100);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(75);
      bigint right(75);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 75);
      assert(right  == 75);
      assert(result == 150);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(90);
      bigint right(90);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 90);
      assert(right  == 90);
      assert(result == 180);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(100);
      bigint right(100);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 100);
      assert(right  == 100);
      assert(result == 200);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(150);
      bigint right(150);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 150);
      assert(right  == 150);
      assert(result == 300);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(200);
      bigint right(200);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 200);
      assert(right  == 200);
      assert(result == 400);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(500);
      bigint right(500);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 500);
      assert(right  == 500);
      assert(result == 1000);



    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(700);
      bigint right(700);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 700);
      assert(right  == 700);
      assert(result == 1400);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1000);
      bigint right(1000);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 1000);
      assert(right  == 1000);
      assert(result == 2000);



    }

    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1500);
      bigint right(1500);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 1500);
      assert(right  == 1500);
      assert(result == 3000);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(2500);
      bigint right(2500);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 2500);
      assert(right  == 2500);
      assert(result == 5000);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(15000);
      bigint right(15000);
      bigint result;

      // Test
      result = left + right;

      // Verify

      std::cout<<left<<" + "<<right<<" = "<<result<<std::endl;

      assert(left   == 15000);
      assert(right  == 15000);
      assert(result == 30000);
    }

    std::cout << "Done with testing addition." << std::endl;
}


