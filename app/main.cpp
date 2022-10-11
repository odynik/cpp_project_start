#include <iostream>
#include "../lib/include/calc.h"
#include "./app_config.h"

int print_version()
{
    // report version
    std::cout << " Version " << cpp_example_VERSION_MAJOR << "."
              << cpp_example_VERSION_MINOR << std::endl;
    return 1;
}

int main() {
    Calc calc0();
    Calc calc(0.7);
    std::cout << "Hello World! 12 + 7 = " << calc.add(12,7) << std::endl;
    print_version();
}