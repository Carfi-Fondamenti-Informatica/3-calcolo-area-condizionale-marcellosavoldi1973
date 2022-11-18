#include <iostream>
using namespace std;

//Marcello Savoldi 57130621

int main()
{
    double a = 0.0;
    double b = 0.0;

    std::cout <<"exercise 3 by Marcello Savoldi 57130621\n";
    std::cout << "insert dimension a = ";
    std::cin >> a;
    std::cout << "insert dimension b = ";
    std::cin >> b;

    int opzione=0;

    std::cout <<"\n";
    std::cout <<"What do you wish to calculate?\n";
    std::cout <<"0 for triangle area option\n";
    std::cout <<"1 for square area option\n";
    std::cout <<"2 for rectangle area option\n";
    std::cout <<"write number option =";
    cin>>opzione;

    switch (opzione)
    {
        case 0: cout <<"\n" << "triangle area=" <<((a*b)/2);
            break;

        case 1:cout <<"\n" << "square area=" <<(a*a);
            break;

        case 2: cout <<"\n" << "rectangle area=" <<(a*b);
            break;

        default:
            cout  <<"\n" <<"invalid option!!!";

    }


    return 0;
}
