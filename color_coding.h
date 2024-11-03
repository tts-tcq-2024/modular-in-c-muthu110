#ifndef COLOR_CODING_H
#define COLOR_CODING_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* majorColorNames[];
extern int numberOfMajorColors;
extern const char* minorColorNames[];
extern int numberOfMinorColors;
extern const int maxColorPairNameChars;

#endif // COLOR_CODING_H
