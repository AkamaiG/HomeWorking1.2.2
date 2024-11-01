
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    
    int valueInt = 10;
    short valueShort = 10;
    long valueLong = 10;
    long long valueLongLong = 10;
    float valueFloat = 10.0;
    double valueDouble = 10.0;
    long double valueLongDouble = 10.0;
    bool valueBool = true;

    std::cout << "short: " << &valueShort << " " << sizeof(valueShort) << std::endl;
    std::cout << "int: " << &valueInt << " " << sizeof(valueInt) << std::endl;
    std::cout << "long: " << &valueLong << " " << sizeof(valueLong) << std::endl;
    std::cout << "long long: " << &valueLongLong << " " << sizeof(valueLongLong) << std::endl;
    std::cout << "float: " << &valueFloat << " " << sizeof(valueFloat) << std::endl;
    std::cout << "double: " << &valueDouble << " " << sizeof(valueDouble) << std::endl;
    std::cout << "long double: " << &valueLongDouble << " " << sizeof(valueLongDouble) << std::endl;
    std::cout << "bool: " << &valueBool << " " << sizeof(valueBool) << std::endl;

    return EXIT_SUCCESS;
}