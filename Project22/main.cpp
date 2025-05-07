#include "gmock/gmock.h"
#include "similarity.cpp"

TEST(TS, Length1) {
	Similarity sim;
	string str1 = "ASD";
	string str2 = "DSA";
	int actual = sim.checkLength(str1, str2);
	int expected = 60;
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}