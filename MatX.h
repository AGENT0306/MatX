
#ifndef MATX_H
#define MATX_H
#include <vector>


struct SizeX{
    std::vector<int> dims;
    SizeX();
    SizeX(std::initializer_list<int> d);
    int length();
    SizeX operator=(std::initializer_list<int> const list){
        this->dims = list;
        return *this;
    }
};
class MatX{
private:
    MatX();
    //MatX::MatX(size);

public:
};

#endif //MATX_H
