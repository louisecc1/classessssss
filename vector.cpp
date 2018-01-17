#include "verctor.h"
#include<iostream>
using namespace std;
void point::offset( double offsetX, double offsetY){
    x+=offsetX;
    y+=offsetY;
}
void point::print(){
    cout<<"("<<x<<","<<y<<")";
}
void _vector::offset(double offsetX,double offsetY){
star.offset(offsetX,offsetY);
_end.offset(offsetX,offsetY);
}
void _vector::print(){
    star.print();
    cout<<"->";
    _end.print();
    cout<<endl;
}
