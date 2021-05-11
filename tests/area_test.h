#ifndef __AREA_TEST_H__
#define __AREA_TEST_H__

#include "gtest/gtest.h"
#include "../header/rectangle.hpp"

TEST(AreaTest, Default){
  Rectangle* rect = new Rectangle();
  int area = rect->area();
  EXPECT_EQ(area, 0);

  delete rect;
}

TEST(AreaTest, Negative) {
  Rectangle* rect = new Rectangle(-1, -8);
  int area = rect->area();
  EXPECT_EQ(area, 0);

  delete rect;
}

TEST(AreaTest, Big) {
  Rectangle* rect = new Rectangle(5000, 8000);
  int area = rect->area();
  EXPECT_EQ(area, 40000000);

  delete rect;
}

#endif // __AREA_TEST_H__
