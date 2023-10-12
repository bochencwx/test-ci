#include "dir/tool.h"

#include "gtest/gtest.h"

TEST(Tool, Add) {
    ASSERT_EQ(2, Add(1, 1));
    ASSERT_EQ(1, Sub(2, 1));
}
