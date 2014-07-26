//
//  main.cpp
//  google-test
//
//  Created by wk on 7/26/2557 BE.
//  Copyright (c) 2557 wk. All rights reserved.
//

#include <iostream>
#include "gtest/gtest.h"
#include "get.h"
#include "sample4.h"

TEST(Counter, Increment) {
    Counter c;
    EXPECT_EQ(0, c.Increment());
    EXPECT_EQ(1, c.Increment());
    EXPECT_EQ(2, c.Increment());
}

TEST(Get, Int)
{
    int i100 = GetInt100();
    int i200 = GetInt200();
    int i300 = GetInt300();
    
    EXPECT_EQ(i100, 100);
    EXPECT_EQ(i200, 200);
    EXPECT_EQ(i300, 300);
}

 GTEST_API_ int main(int argc, char **argv) {
     printf("Running main() from gtest_main.cc\n");
     testing::InitGoogleTest(&argc, argv);
     return RUN_ALL_TESTS();
 }