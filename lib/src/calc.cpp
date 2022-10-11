#include "../include/calc.h"
#include <iostream>

double Calc::num = 0.2;

Calc::Calc(double number){
    num = number;
 }

Calc::Calc(){
    num = 0.2;
 }

int Calc::add(int a, int b) {
    return a+b;
}
 
int Calc::sub(int a, int b) {
    return a-b;
}

int Calc::mult(int a, int b) {
    return a*b;
}

void Calc::accumul(){
    for (auto i: this->v)
        std::cout<<i<<' ';
    std::cout<<std::endl;
}