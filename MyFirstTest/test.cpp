#include "pch.h"

#include "../test/LessThen.h"

TEST(LessThen_unit, isIt_working) {
	LessThen m(1, 4);

	ASSERT_FALSE(m.is());
}

TEST(LessThen_unit, isitNot_working) {
	LessThen m(5, 4);

	ASSERT_TRUE(m.is());
}