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
