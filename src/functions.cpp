#include <iostream>
#include "functions.h"

int max(int i1, int i2)
{
    if (i1 > i2) return i1;
    return i2;
}

int sum(int a, int b)
{
    return a + b;
}

int screan_area (int height, int width )
{
    if (!((height > 0) && (width > 0)))
    {
        throw screan_area_error();
    }
    return height * width;
}


int contrast(std::vector<int> v) 
{
    int max {v[0]};
    int min {v[0]};

    for (auto element: v)
    {
        if (element < min) min = element;
        if (element > max) max = element;
    }

    return (max - min);

}


int contrast_2(std::vector<int> v) 
{
    if (!(v.size() > 1)) throw int();

    auto[min, max] = std::minmax_element(begin(v), end(v));
    return (*max-*min);
}
