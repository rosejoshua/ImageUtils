//
// Created by jr on 8/4/2022.
//

#ifndef FRACTALS_RGB_H
#define FRACTALS_RGB_H

class MyRGB
{
public:
    double r;
    double g;
    double b;
    MyRGB();
    MyRGB(double r, double g, double b);
};

MyRGB operator-(const MyRGB& first, const MyRGB& second);

#endif //FRACTALS_RGB_H
