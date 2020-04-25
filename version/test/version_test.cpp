//
// Created by victoria on 27.03.20.
//

#include "../include/version.h"

#include <gtest/gtest.h>

TEST(version, major)
{
	ASSERT_GE(0, version_major());
}