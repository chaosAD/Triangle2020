#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleType_given_2_2_1_expect_ISOSCELES() {
  TriangleType type = getTriangleType(2, 2, 1);
  TEST_ASSERT_EQUAL(ISOSCELES, type);
}

void test_getTriangleType_given_3_4_4_expect_ISOSCELES() {
  TEST_IGNORE_MESSAGE("not yet ready to test");
  TriangleType type = getTriangleType(3, 4, 4);
  TEST_ASSERT_EQUAL(ISOSCELES, type);
}

void test_getTriangleType_given_55_23_55_expect_ISOSCELES() {
  TEST_IGNORE_MESSAGE("not yet ready to test");
  TriangleType type = getTriangleType(55, 23, 55);
  TEST_ASSERT_EQUAL(ISOSCELES, type);
}

void test_getTriangleType_given_3_3_3_expect_EQUILATERAL() {
  TEST_IGNORE_MESSAGE("not yet ready to test");
  TriangleType type = getTriangleType(3, 3, 3);
  TEST_ASSERT_EQUAL(EQUILATERAL, type);
}

void test_getTriangleType_given_1_2_3_expect_SCALENE() {
  TEST_IGNORE_MESSAGE("not yet ready to test");
  TriangleType type = getTriangleType(1, 2, 3);
  TEST_ASSERT_EQUAL(SCALENE, type);
}

