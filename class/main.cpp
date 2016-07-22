#include <iostream>

using namespace std;

class coord
{
public:
    int x;
    int y;

    int printx()
    {
        cout<<x<<endl;
        return 0;
    }

    int printy()
    {
        cout<<y<<endl;
        return 0;
    }
};

int main()
{   //Stack:zhan
    coord coor;
    coor.x= 10;
    coor.y= 21;
    coor.printx();
    coor.printy();


    // heap:dui
    coord *p= new coord();
    if (NULL==p)
    {
        return 0;
    }
    p->x= 100;
    p->y= 200;
    p->printx();
    p->printy();
    delete p;
    p=NULL;
    return 0;

}

