#ifndef CALCLIB_INCLUDE_CALC_CALC_H_
#define CALCLIB_INCLUDE_CALC_CALC_H_

#include <vector>

class Calc {

public:
    static double num;
    std::vector<int> v = {0, 1, 2, 3, 4, 5};

    int add(int a,int b);
    int sub(int a,int b);
    int mult(int a, int b);
    void accumul();

Calc(double number);
Calc();    
};
 
#endif /* CALCLIB_INCLUDE_CALC_CALC_H_ */