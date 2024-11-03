#include <stdio.h>
#include "ColorCoding.h"

void GenerateReferenceManual(char* buffer, int bufferSize) {
    int offset = 0;
    offset += snprintf(buffer + offset, bufferSize - offset, "Color Coding Reference Manual\n");
    offset += snprintf(buffer + offset, bufferSize - offset, "-----------------------------\n");
    for (int i = 0; i < numberOfMajorColors; i++) {
        for (int j = 0; j < numberOfMinorColors; j++) {
            offset += snprintf(buffer + offset, bufferSize - offset, "%s %s: %d\n", majorColorNames[i], minorColorNames[j], i * numberOfMinorColors + j + 1);
        }
    }
}
