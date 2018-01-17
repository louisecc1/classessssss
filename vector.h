#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED
class point {
public:
    double x;
    double y;
    point(){
    x=0.0;y=0.0;}
    point(double nx,double ny){
        x=nx;y=ny;}
    point(point &a){
    x=a.x;y=a.y;}
    void offset(double offsetX,double offsetY);
    void print();
};
class _vector {
public:
    point star;
    point _end;
    void offset(double offsetX, double offsetY);
    void print();
};



#endif // VECTOR_H_INCLUDED
