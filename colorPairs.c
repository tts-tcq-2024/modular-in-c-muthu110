#include <stdio.h>
#include "ColorPair.h"

void colorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        majorColorNames[colorPair->majorColor],
        minorColorNames[colorPair->minorColor]);
}

ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int majorIndex = (pairNumber - 1) / numberOfMinorColors;
    int minorIndex = (pairNumber - 1) % numberOfMinorColors;
    colorPair.majorColor = (enum MajorColor)majorIndex;
    colorPair.minorColor = (enum MinorColor)minorIndex;
    return colorPair;
}

int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors + colorPair->minorColor + 1;
}
