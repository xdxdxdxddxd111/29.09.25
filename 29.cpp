#include <iostream>

void task_1() {
    
    int number; 
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number > 0) {
        std::cout << "Number " << number << " positive." << std::endl;
    } else if (number < 0) { 
        std::cout << "Number " << number << " negative." << std::endl;
    } else { 
        std::cout << "Number = 0." << std::endl;
    }
}

void task_2() {
    
    int number;
        
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number % 2 == 0) {
        std::cout << "Number even" << std::endl;
    } else {
        std::cout << "Number odd" << std::endl;
    }
}

void task_3() {
    
    int a, b; 
    
    std::cout << "Enter first number: ";
    std::cin >> a;
    
    std::cout << "Enter second number: ";
    std::cin >> b;
    
    if (a == b) {
        std::cout << "Number are equal" << std::endl;
    }
}

void task_4() {
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number % 5 == 0) {
        std::cout << "Share" << std::endl;
    } else {
        std::cout << "Doesn`t Share" << std::endl;
    }
}

void task_5() {
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number <= 18) {
        std::cout << "Adlut" << std::endl;
    } else {
        std::cout << "Minor" << std::endl;
    }
}

void task_6() {
    int number; 
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number > 0) {
        std::cout << "Number " << number << " positive." << std::endl;
    } else if (number < 0) { 
        std::cout << "Number " << number << " negative." << std::endl;
    } else { 
        std::cout << "Number = 0." << std::endl;
    }
}

void task_7() {
    char symbol;
    
    std::cout << "Enter symbol: ";
    std::cin >> symbol;
    
    if (symbol == 'A') {
        std::cout << "Capital" << std::endl;
    } else {
        std::cout << "Not capitalized" << std::endl;
    }
}

void task_8() {
    int num1, num2;
    
    std::cout << "Enter fitst number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    
    if (num1 > 0 && num2 > 0) {
        std::cout << "Positive" << std::endl; 
    } else {
        std::cout << "Negative" << std::endl;
    }
}

void task_9() {
    int num1, num2;
    
    std::cout << "Enter dwo number: ";
    std::cin >> num1 >> num2;
    
    if (num1 == 0 || num2 == 0) {
        std::cout << "At least one is equal to 0" << std::endl;
    } else {
        std::cout << "None that equals 0" << std::endl;
    }
}

void task_10() {
    int number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number != 10) {
        std::cout << "Number != 10" << std::endl;
    } else {
        std::cout << "Number = 10" << std::endl;
    }
}

int main() {
    task_1();
    task_2();
    task_3();
    task_4();
    task_5();
    task_6();
    task_7();
    task_8();
    task_9();
    task_10();
    
    
    
    return 0;
}


