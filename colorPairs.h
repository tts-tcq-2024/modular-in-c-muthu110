#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include "ColorCoding.h"

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void colorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_H
