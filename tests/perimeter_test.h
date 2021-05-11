#ifndef __PERIMETER_H__
#define __PERIMETER_H__

#include "gtest/gtest"
#include "../headers/rectangle.hpp"

TEST(PerimeterTest, Default){
  Rectangle rect();
  EXPECT_EQ(rect.perimeter, 0);
}

#endif // __PERIMETER_H__
