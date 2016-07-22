#include <iostream>

using namespace std;

int main()
{   int a=5;
    int b=6;
    const int *p=&a;
    p=&b;
    //*p=b;
    cout <<*p << endl;
    return 0;
}

