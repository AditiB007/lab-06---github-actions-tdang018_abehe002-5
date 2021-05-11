#include "gtest/gtest.h"

//#include "perimeter_test.h"
#include "constructors_test.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
