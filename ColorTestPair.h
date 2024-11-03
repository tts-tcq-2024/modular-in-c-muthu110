#ifndef TEST_COLOR_PAIR_H
#define TEST_COLOR_PAIR_H

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif // TEST_COLOR_PAIR_H
