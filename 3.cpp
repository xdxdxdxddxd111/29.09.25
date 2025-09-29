#include <iostream> 
using namespace std;  



void task_1() {
    int number;  
      
    
    cout << "Enter number: ";  
    cin >> number;  
      
     
    if (number > 0 && number >= 10 && number <= 99) {  
        cout << "Positive" << endl;  
    } else {  
        cout << "Negative" << endl;  
    }  
      
 
}

void solveQuadratic(double a, double b, double c) {  

    if (a == 0) {  
        if (b == 0) {  
            if (c == 0)  
                cout << "Infinite Solution" << endl;  
            else  
                cout << "No Solutions" << endl;  
        } else {  
            double x = -c / b;  
            cout << "Linear alignment x = " << x << endl;  
        }  
        return;  
    }  
  
    double discriminant = b * b - 4 * a * c;  
      
    if (discriminant > 0) {  
    
        double x1 = (-b + sqrt(discriminant)) / (2 * a);  
        double x2 = (-b - sqrt(discriminant)) / (2 * a);  
        cout << "Two Root:" << endl;  
        cout << "x1 = " << x1 << endl;  
        cout << "x2 = " << x2 << endl;  
    } else if (discriminant == 0) {  
       
        double x = -b / (2 * a);  
        cout << "One Root " << x << endl;  
    } else {  
        
        double realPart = -b / (2 * a);  
        double imaginaryPart = sqrt(-discriminant) / (2 * a);  
        cout << "Complex Root" << endl;  
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;  
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;  
    }  
}  
  
void task_2() {  
  double a, b, c;  
      
    cout << "Enter the Coefficient (A x^2 + Bx + C = 0):" << endl;  
    cout << "A = ";  
    cin >> a;  
    cout << "B = ";  
    cin >> b;  
    cout << "C = ";  
    cin >> c;  
      
    solveQuadratic(a, b, c); 
}  

bool checkPassword(const string& password) {
 
    if (password.length() < 8) {
        return false;
    }

    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {  
            hasDigit = true;
            break;
        }
    }
    
    return hasDigit;  
}

void task_3() {  

    string password;
    
    cout << "Enter password: ";
    getline(cin, password);  
    
    if (checkPassword(password)) {
        cout << "True" << endl;
    } else {
        cout << "False "
             << "It must contain at least 8 characters and at least one digit." << endl;
    }
}

void task_5() {  
      
     int a, b, c;

    cout << "Enter the three sides of the triangle ";
    cin >> a >> b >> c;
    
    if (a*a + b*b == c*c || 
        a*a + c*c == b*b || 
        b*b + c*c == a*a) {
        cout << "The triangle is right-angled" << endl;
    } else {
        cout << "The triangle is not right-angled" << endl;
    }
    
}

bool isTriangle(double a, double b, double c) {  
   
    return (a + b > c) && (a + c > b) && (b + c > a);  
} 

void task_4() {  

{
    double a, b, c;  
      
    cout << "Enter the length of the sides of the rectangle";  
    cin >> a >> b >> c;  
      
    if (isTriangle(a, b, c)) {  
        cout << "Triangle exist" << endl;  
    } else {  
        cout << "Triangle of notes exists" << endl;  
    }  
}
 
}  

void task_6()  {  
double num1, num2; 
    char operation;   
    
    cout << "first: ";
    cin >> num1;
    
    cout << "second: ";
    cin >> num2;
    
    cout << "operation (+, -, *, /): ";
    cin >> operation;
    
   
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
            
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
            
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
            
        case '/':
        
            if (num2 == 0) {
                cout << "ERROR" << endl;
            } else {
                cout << "Result: " << num1 / num2 << endl;
            }
            break;
            
        default:
            cout << "ERROR: " << endl;
    }
}  

void task_7() {

    double a, b, c;
    
   
    cout << "Enter 3 side: ";
    cin >> a >> b >> c;
    
    
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Triangle of notes exists!" << endl;
       
    }
  

    if (a == b && b == c) {
        cout << "Equilateral" << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "Equicoxal" << endl;
    }
    else {
        cout << "Versatile" << endl;
    }
}  

void task_8() {

   
    double x1, y1, x2, y2;
   
    double x, y;
    
  
    cout << "Enter Cords Left Corner (x1 y1): ";
    cin >> x1 >> y1;
    
    cout << "Enter Cords Left Corner (x2 y2): ";
    cin >> x2 >> y2;
    
    cout << "Enter cords point (x y): ";
    cin >> x >> y;
    
   
    double minX = (x1 < x2) ? x1 : x2;
    double maxX = (x1 > x2) ? x1 : x2;
    double minY = (y1 < y2) ? y1 : y2;
    double maxY = (y1 > y2) ? y1 : y2;
    
    
    if (x >= minX && x <= maxX && y >= minY && y <= maxY) {
        cout << "POINT BELONGS TO" << endl;
    } else {
        cout << "POINT NOT BELONGS TO" << endl;
    }
}

void task_9() {

    int day, month;
    
   
    cout << "Enter day ";
    cin >> day;
    cout << "Enter month (count from 1 to 12): ";
    cin >> month;
    
   
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        cout << "ERROR" << endl;

    }
    
  
    string zodiac;
    switch (month) {
        case 1:
            zodiac = (day <= 19) ? "KOZEROG" : "VODOLEY";
            break;
        case 2:
            zodiac = (day <= 18) ? "VODOLEY" : "FISH";
            break;
        case 3:
            zodiac = (day <= 20) ? "FISH" : "OVEN";
            break;
        case 4:
            zodiac = (day <= 19) ? "OVEN" : "TELEC";
            break;
        case 5:
            zodiac = (day <= 20) ? "TELEC" : "BLIZNEC";
            break;
        case 6:
            zodiac = (day <= 20) ? "BLIZNEC" : "RAK";
            break;
        case 7:
            zodiac = (day <= 22) ? "RAK" : "LEV";
            break;
        case 8:
            zodiac = (day <= 22) ? "LEV" : "DEVA";
            break;
        case 9:
            zodiac = (day <= 22) ? "DEVA" : "VESI";
            break;
        case 10:
            zodiac = (day <= 22) ? "VESI" : "SKORPION";
            break;
        case 11:
            zodiac = (day <= 21) ? "SKORPION" : "CTPELEC";
            break;
        case 12:
            zodiac = (day <= 21) ? "CTPELEC" : "KOZEROG";
            break;
    }
    
    cout << "Your zodiac sign: " << zodiac << endl;
    
}

bool isLeapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    return false;
}


void task_10() {

   int year;
    
    cout << "ENTER YEAR ";
    cin >> year;
    
    
    if (isLeapYear(year)) {
        cout << year << " THE YEAR IS HIGH" << endl;
        
        
        if (year % 4 == 0) {
            cout << year << "THE YEAR IS OLYMPUS" << endl;
        }
    }
    else {
        cout << year << " THE YEAR IS NOT A HIGH YEAR " << endl;
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
