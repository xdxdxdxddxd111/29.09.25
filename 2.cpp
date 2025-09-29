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
        std::cout << "Even" << std::endl;
    } else {
        std::cout << "Odd" << std::endl;
    }
}

void task_3() {
    
    int num1, num2;
    
    std::cout << "Enter first number: ";
    std::cin >> num1;
    
    std::cout << "Enter second number: ";
    std::cin >> num2;
    
    int max_num = std::max(num1, num2);
    
    std::cout << "Max number: " << max_num << std::endl;
}

void task_4() {
    
    int grade;
    
    std::cout << "Enter grade 1-5: ";
    std::cin >> grade;
    
     if (grade >= 1 && grade <= 2) { 
        std::cout << "bad" << std::endl;
    } else if (grade >= 3 && grade <= 5) { 
        std::cout << "good" << std::endl;
    } else { 
        std::cout << "enter grade 1-5" << std::endl;
    }
}

void task_5() {
    
    char symbol;

    std::cout << "Enter symbol: ";
    std::cin >> symbol;

    if (symbol >= 'A' && symbol <= 'Z') {
        symbol = symbol + 32; 
    }

    if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u') {
        std::cout << "Enter symbol '" << symbol << "' vowel" << std::endl;
    }
    else if ((symbol >= 'a' && symbol <= 'z')) {
        std::cout << "Enter symbol '" << symbol << "' consonant" << std::endl;
    }
}

void task_6() {
    
    int year;
    
    std::cout << "Enter year: ";
    std::cin >> year;
    
    if ( year %4 == 0) {
        std::cout << "Vis" << std::endl;
    } else if (year %4 != 0) {
        std::cout << "Ne vis" << std::endl;
    }
}

void task_7() {
    
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    double result;

    if (op == '+') {
        result = num1 + num2;
        std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
    } else if (op == '-') {
        result = num1 - num2;
        std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
    } else if (op == '*') {
        result = num1 * num2;
        std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
    } else if (op == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
        }
    }
}

void task_8() {
    double number;
    
    std::cout << "Enter number: ";
    std::cin >> number;
    
    if (number >= 10 && number <= 20) {
        std::cout << "Number " << number << " belongs to the interval" << std::endl;
    } else { 
        std::cout << "Number " << number << " does not belong to the interval" << std::endl;
    }
}

void task_9() {
    
    int month;

    std::cout << "Enter a number from 1-12: ";
    std::cin >> month;

    std::string season;

    if (month == 12 || month == 1 || month == 2) {
        season = "Winter";
    } else if (month == 3 || month == 4 || month == 5) {
        season = "Spring";
    } else if (month == 6 || month == 7 || month == 8) {
        season = "Summer";
    } else if (month == 9 || month == 10 || month == 11) {
        season = "Autumn";
    } else {
        season = "not mounth";
    }

    std::cout << "Time of year: " << season << std::endl;
}

void task_10() {

    int number; 

    std::cout << "Enter a three-digit number: ";
    std::cin >> number;

    if (number >= 100 && number <= 999) {
        int digit1 = number / 100;
        int digit3 = number % 10;

        if (digit1 == digit3) {
            std::cout << number << " - this is a palindrome." << std::endl;
        } else {
            std::cout << number << " - this is not a palindrome." << std::endl;
        }
    } else {
        std::cout << "Error." << std::endl;
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


