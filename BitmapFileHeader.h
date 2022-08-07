//
// Created by jr on 8/3/2022.
//

#ifndef FRACTALS_BITMAPFILEHEADER_H
#define FRACTALS_BITMAPFILEHEADER_H

#include <cstdint>

#pragma pack(push, 2)

struct BitmapFileHeader
{
    char header[2]{'B', 'M'};
    int32_t fileSize;
    int32_t reserved{0};
    int32_t dataOffset;
};

#pragma pack(pop)

#endif //FRACTALS_BITMAPFILEHEADER_H
