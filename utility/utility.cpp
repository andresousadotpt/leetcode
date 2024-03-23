#include <iostream>

class Utility {
public:
    template <typename T>
    static void print(const T& message){
        std::cout << message << "\n";
    }

};