#include <iostream>
#include "verctor.h"

using namespace std;

int main()
{

    point a1(12.45,12.67);
    a1.print();
    point r=a1;
    cout<<endl;
    r.print();

    return 0;
}
