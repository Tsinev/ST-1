// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"



TEST(AlgTest, CheckPrimeBasic) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_TRUE(checkPrime(13));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(15));
}

TEST(AlgTest, CheckPrimeZeroAndOne) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
}

TEST(AlgTest, CheckPrimeComposite) {
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
}

TEST(AlgTest, NPrimeBasic) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(10), 29);
}

TEST(AlgTest, NPrimeLarge) {
  EXPECT_EQ(nPrime(500), 3571);
}

TEST(AlgTest, NextPrimeBasic) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(2), 3);
}

TEST(AlgTest, NextPrimeFromLarge) {
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(AlgTest, SumPrimeBasic) {
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(AlgTest, SumPrimeSmallBoundary) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
}

TEST(AlgTest, SumPrimeNoPrimes) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
}


