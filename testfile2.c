#include "testfile.c"
/* Required by the unity test framework */
void setUp()
{          }
/* Required by the unity test framework */
void tearDown()
{          }


int academic_year(int a)
	{
                 TEST_ASSERT_EQUAL(2020,a);
	}
		int test_main(void)
	{
	  	UNITY_BEGIN();


	  	RUN_TEST(academic_year);

  		return UNITY_END();
	}
