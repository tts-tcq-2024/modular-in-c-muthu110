#include "ColorCoding.h"

const char* majorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(majorColorNames) / sizeof(majorColorNames[0]);
const char* minorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int maxColorPairNameChars = 16;
int numberOfMinorColors =
    sizeof(minorColorNames) / sizeof(minorColorNames[0]);
