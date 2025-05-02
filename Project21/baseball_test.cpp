#include "baseball.cpp"

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(guessNumber);
			FAIL();
		}
		catch (std::exception e) {
			//PASS
		}
	}
};

TEST_F(BaseballFixture, TryGameTest) {
	EXPECT_EQ(1, 1);
}

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidCase) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}