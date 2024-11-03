#include <assert.h>
#include "ColorPairs.h"
#include "TestColorPair.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor) {
    ColorPair colorPair = getColorFromPairNumber(pairNumber);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = getPairNumberFromColor(&colorPair);
    assert(pairNumber == expectedPairNumber);
}
