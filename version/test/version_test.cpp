//
// Created by victoria on 27.03.20.
//

#include <gtest/gtest.h>

#include "../include/version.h"

TEST(version, major)
{
	ASSERT_GE(0, version_major());
}