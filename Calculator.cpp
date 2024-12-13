#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double num1;
    double num2;
    char symbol;
    double result;
    
while(num1 !=0 || num2 != 0 || symbol == '/', '*', '+', '-'){


cout << "select num1: ";
cin >> num1;
    
cout << "select num2: ";
cin >> num2;

cout << "select + - / *: ";
cin >> symbol; 
 

switch (symbol){
    case '/':
      result = num1 / num2;
    
     if(num2 == 0){
     cout << "MATH ERROR" << '\n';
     }
    
     else{
     cout << "The product of num1 and num2 is " << result << '\n';
     }
break; 
    case '*':
      result = num1 * num2;
    
     cout << "The multiplication of num1 and num2 is " << result << '\n';
break; 
    case '+':
      result = num1 + num2;
    
     cout << "The sum of num1 and num2 is " << result << '\n';
break;
    case '-':
      result = num1 - num2;
    
     cout << "The difference of num1 and num2 is " << result << '\n';


     
    }
  

  }
 return 0;
}