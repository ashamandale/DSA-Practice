#include<iostream>
using namespace std;

class complex{
int real;
int img;

public:
complex(int r, int i){
    real=r;
    img=i;
}
void showNum(){
    cout<< real <<" + " << img <<"i \n";
}
complex operator +(complex &c2){
    int resReal=this->real+c2.real;
    int resImg=this->img+c2.img;
    complex c3(resReal,resImg);
    return c3;

}
};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    c1.showNum();
    c2.showNum();
    complex c3= c1+c2;
    c3.showNum();
    return 0;
}