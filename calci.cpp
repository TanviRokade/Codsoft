#include<iostream>
using namespace std;

int main()
{
    char choice;
    do { 
        double a, b, res;
        char op;
        
    cout<<"-------CALCULATOR-------\n";
    cout<<"\nEnter any two Numbers: ";
    cin>>a>>b;
    cout << "Enter operator: +, -, *, /: \n";
    cin >> op;
    cout<<"-----------------------\n";
    
        switch(op)
        {
            case '+':
                res = a+b;
                cout<<"\nResult of the Addition is = \n"<<res;
                break;
            case '-':
                res =a-b;
                cout<<"\nResult of the Subtraction is  = \n"<<res;
                break;
            case '*':
                res = a*b;
                cout<<"\nResult of the Multiplication is = \n"<<res;
                break;
            case '/':
                 if (b!= 0) {
                     cout << "Result of the Division is = \n" << a / b << endl;
                  } 
                else {
                     cout << "Error!!! Division by zero is not allowed." << endl;
                  }
              break;
           
            default:
                cout<<"\nWrong Choice...Plz try with Valid Choice!";
                break;
        }
        cout <<"\nDo you want to perform another calculation? (y/n): \n";
        cin >> choice;
        cout<<"\n-----------------------\n";
    }while (choice == 'y' || choice == 'Y');
   
    return 0;
}
