#ifndef __CONSTRUCTORS_TEST_H__
#define __CONTRUCTORS_TEST_H__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(ConstructorsTest, Default){
  Rectangle* rect = new Rectangle();
  int area = rect->area();
  int perim = rect->perimeter();
  EXPECT_EQ(area, 0);
  EXPECT_EQ(perim, 0);

  delete rect;
}


#endif // __CONSTRUCTORS_TEST_H__
