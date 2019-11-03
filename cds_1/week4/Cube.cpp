#include <iostream>
#include "Cube.h"

Cube::Cube(double length) 
{
    length_ = length;
};

double Cube::getLength() 
{
    return length_;
}

double Cube::getVolume() 
{
    return length_ * length_ * length_;
}