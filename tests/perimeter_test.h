#ifndef __PERIMETER_H__
#define __PERIMETER_H__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(PerimeterTest, Default){
  Rectangle* rect = new Rectangle();
  int perim = rect->perimeter();
  EXPECT_EQ(perim, 0);

  delete rect;
}

TEST(PerimeterTest, Zero){
  Rectangle* rect = new Rectangle(0,2);
  int perim = rect->perimeter();
  EXPECT_EQ(perim, 0);

  delete rect;
}

TEST(PerimeterTest, Negative){
  Rectangle* rect = new Rectangle(-1, 2);
  int perim = rect->perimeter();
  EXPECT_EQ(perim, 0);

  delete rect;
}

#endif // __PERIMETER_H__
