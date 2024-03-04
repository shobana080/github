
#include<iostream>
using namespace std;
int main(){
    double num1,num2;
    char ope;
    while(true){
        cout<<"Enter the operator to perform calculation(+,-,*,/) or 'E' to exit from  the calculation program : "<<endl;
        cin>>ope;
    
    if(ope == 'E'){
        break;
    }
    cout<<"enter two numbers to perform operation : "<<endl;
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    switch(ope){
        case '+':
                cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
                break;
         case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
         case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
         case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << " Division by zero is not allowed." <<endl;
                }
                break;
         default:
                cout << "Invalid operator is entered !!!"<<endl;
                cout<<"Please try again." << endl;
                cout<<endl;
        }

    }
}