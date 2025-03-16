
#include "MatX.h"

SizeX::SizeX() {
    dims = {};
}

SizeX::SizeX(std::initializer_list<int> d) {
    dims = d;
}

int SizeX::length() {
    return dims.size();
}

