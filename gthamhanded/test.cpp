#include "pch.h"
#include "../hamhanded/hamhanded.h"

TEST(HhCalc, MultiSign) {
	EXPECT_EQ(hhCalc("20*2-2+2"), 40);
	EXPECT_TRUE(true);
}
TEST(HhCalc, OneSign) {
	EXPECT_EQ(hhCalc("2+2"), 4);
	EXPECT_TRUE(true);
}
TEST(HhCalc, Error) {
	EXPECT_EQ(hhCalc("auaidhfkdjbkjddbcnk"), -1);
	EXPECT_TRUE(true);
}

TEST(HhCalc, MultiPriority) {
	EXPECT_EQ(hhCalc("22+20*2/10-2+2"), 40);
	EXPECT_TRUE(true);
}

TEST(HhCalc, MultiPriorityFloat) {
	EXPECT_EQ(hhCalcFloat("22.0+20.012*2.34/10.34-2.12+2.33"), 40);
	EXPECT_TRUE(true);
}

TEST(HhCalc, hhCalcAddFloat) {
	EXPECT_EQ(hhCalcAddFloat("add(1.234, 2.345,  34.456, 23.45)"), 40);
	EXPECT_TRUE(true);
}
