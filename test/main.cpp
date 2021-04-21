//
//  main.cpp
//  test
//
//  Created by Michael Haworth on 15/04/2021.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    std::cout << "Please enter two integers " << std::endl;
    int num1 = 0, num2 = 0;
    std::cin >> num1 >> num2;
    
    if (num1 < num2) {
        while (num1 < num2 ) {
            std::cout << num1 << std::endl;
            num1++;
        };
        std::cout << num2 << std::endl;
    };
    
    if (num1 > num2) {
        while (num1 > num2) {
            std::cout << num1 << std::endl;
            num1--;
        };
        std::cout << num2 << std::endl;
    };
    
    return 0;
};
