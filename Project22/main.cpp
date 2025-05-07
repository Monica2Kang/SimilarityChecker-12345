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

TEST(TS, Length2) {
	Similarity sim;
	string str1 = "A";
	string str2 = "BB";
	int actual = sim.checkLength(str1, str2);
	int expected = 0;
	EXPECT_EQ(expected, actual);
}

TEST(TS, Length3) {
	Similarity sim;
	string str1 = "AAABB";
	string str2 = "BAA";
	int actual = sim.checkLength(str1, str2);
	int expected = 20;
	EXPECT_EQ(expected, actual);
}

TEST(TS, Length4) {
	Similarity sim;
	string str1 = "AA";
	string str2 = "AAE";
	int actual = sim.checkLength(str1, str2);
	int expected = 30;
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}