#include <iostream>
using namespace std;
  
// Main program
main()
{
    char op;
    float num1, num2;
    cout<<"Enter the number1: ";
    cin>>num1;
    cout<<"Enter the number 2: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin >> op;
   
    switch (op) {
        case '+':
            cout<<num1 + num2;
            break;
 
        case '-':
            cout<<num1 - num2;
            break;
       
        case '*':
            cout<<num1 * num2;
            break;
          
      case '/':
            cout<<num1 / num2;
            break;
         
        default:
            cout<<"Error! operator is not correct. Try again";
            break;
    } 
  
    return 0; 
}
