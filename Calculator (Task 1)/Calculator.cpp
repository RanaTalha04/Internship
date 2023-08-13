#include<iostream>
 
using namespace std;
 
int main()
{
    int num1,num2;
    int sum,subtract,multiply;
    float divide;

    cout << "Enter first Number: "<<endl;
    cin>>num1;

    cout << "Enter second Number: "<<endl;
    cin>>num2;

    cout << "Which operation you want to use : "<<endl;
    cout << "1. Addition"<<endl;
    cout << "2. Subtraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division"<<endl;

    int choice;

    cout << "Enter Your Choice: "<<endl;
    cin>>choice;

    if(choice==1)
    {
        sum=num1+num2;

        cout<<"Sum is: "<<sum<<endl;

        cout << "\n";

        cout << "Do you want to continue?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        char choices;

        cout << "Enter Your Choice: "<<endl;
        cin>> choices;

        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Calculator"<<endl;
        }
    }

    else if(choice==2)
    {
        subtract=num1-num2;

        cout<<"Subtraction is: "<<subtract<<endl;
        cout << "\n";

        cout << "Do you want to continue?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        char choices;

        cout << "Enter Your Choice: "<<endl;
        cin>> choices;

        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Calculator"<<endl;
        }
    }
    else if(choice==3)
    {
        multiply=num1*num2;

        cout<<"Multiplication is: "<<multiply<<endl;
        cout << "\n";

        cout << "Do you want to continue?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        char choices;

        cout << "Enter Your Choice: "<<endl;
        cin>> choices;
        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Calculator"<<endl;
        }
    }
    else if(choice==4)
    {
        divide=num1/num2;

        cout<<"Division is: "<<divide<<endl;
        cout << "\n";

        cout << "Do you want to continue?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        char choices;

        cout << "Enter Your Choice: "<<endl;
        cin>> choices;

        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Calculator"<<endl;
        }
    }
    else
    {
        cout <<"Invalid Choice"<<endl;

        cout << "Do you want to continue?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        char choices;

        cout << "\n";
        cout << "Enter Your Choice: "<<endl;

        cin>> choices;
        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Calculator"<<endl;
        }
    }
    

    return 0;
}