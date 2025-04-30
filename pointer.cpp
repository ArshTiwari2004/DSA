# include <iostream>
# include <vector>
using namespace std;


int main (){


    int arr[5]={1,2,3,4,5};

    int a=10;
    int *ptr=&a;
    cout << ptr <<endl; // address of a
    ptr ++ ;
    cout <<ptr <<endl; // address of a+1
    cout <<a <<endl; // address of arr
    return 0;
}