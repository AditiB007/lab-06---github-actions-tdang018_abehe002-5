#ifndef __CONSTRUCTORS_TEST_H__
#define __CONTRUCTORS_TEST_H__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorsTest, Default){
  Rectangle rect();
  EXPECT_EQ(rect.area , 0);
  EXPECT_EQ(rect.perimeter , 0);
}


#endif // __CONSTRUCTORS_TEST_H__
