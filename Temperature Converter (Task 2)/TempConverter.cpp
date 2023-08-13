#include<iostream>
 
using namespace std;
 
int main()
{
    int temprature;

    cout << "From which temperature scale you want to change your temperature to the other scale: "<<endl;

    cout << "1. From Celsius to Fahrenheit"<<endl;
    cout << "2. From Fahrenheit to Celsius"<<endl;

    cout << "Enter Option: "<<endl;

    int option;
    cin>>option;

    if(option==1)
    {
        cout << "Enter temperature in celsius: ";
        cin>>temprature;
       

        int temp;

        temp=(temprature * 9/5) +32;

        cout << "\n";
        cout << "The temperature in Fahrenheit is "<<temp<<" F."<<endl;
        cout << "\n";
        
        cout << "Do you want to continue again?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        cout << "\n";
        cout << "Enter Your Choice: "<<endl;

        char choices;
        cin>> choices;

        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Temperature Converter"<<endl;
        }
    }

    else if(option==2)
    {
        cout << "Enter temperature in fahrenheit: ";
        cin>>temprature;
        
        int temp;

        temp=(temprature -32) * 5/9;

        cout << "\n";
        cout << "The temperature in Celsius is " <<temp<<" C."<<endl;
        cout << "\n";

        cout << "Do you want to continue again?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        cout << "\n";
        cout << "Enter Your Choice: "<<endl;

        char choices;
        cin>> choices;

        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Temperature Converter."<<endl;
        }
    }

    else 
    {
        cout << "Invalid Option"<<endl;

        cout << "Do you want to continue again?"<<endl;
        cout << "(Y/y or N/n)"<<endl;

        cout << "\n";
        cout << "Enter Your Choice: "<<endl;

        char choices;
        cin>> choices;
        
        if(choices == 'Y'|| choices=='y')
        {
            main();
        }
        else
        {
            cout << "Thank You for using My Temperature Converter"<<endl;
        }
    }
    return 0;
}