#include <iostream>
using namespace std;
int main ()
{
    int age1=25;
    cout<<sizeof(age1) <<endl;

    float pi=3.14f;
    cout<<sizeof(pi) <<endl;

    char c='A';
    int value = c;
    cout<<value <<endl;

    double price = 19.99;
    int newPrice = (int)price;
    cout<<newPrice <<endl;
    return 0;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old." << endl;
    
}