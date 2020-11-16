#include "unity.h"
#include "election.h"

void setUp()
	{	}
void tearDown()
	{	}

void test_election(void)
	{
    void castVote();
	TEST_ASSERT_EQUAL_STRING("thanks for vote !!", 1);
	TEST_ASSERT_EQUAL_STRING("thanks for vote !!", 2);
	TEST_ASSERT_EQUAL_STRING("thanks for vote !!", 3);
	TEST_ASSERT_EQUAL_STRING("thanks for vote !!", 4);
	}

int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_election);

  		return UNITY_END();
	}
