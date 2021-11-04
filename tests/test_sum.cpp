#include <gtest/gtest.h>

#include "tcg/sum.h"

TEST(TestSum, BasicSum) {
	EXPECT_EQ(2, tcg::sum(1, 1));
}
