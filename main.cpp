#include <iostream>
#include <math.h>

using namespace std;

class shape{
public:
virtual void area()=0;

};

class square:public shape{
int x;
public:
void area(){
  cout<<endl<<"Square lenght : "<<endl;
  cin>>x;
  cout<<"Square area : "<<x*x;
}

};

class circle:public shape{
float rad;
public:
void area(){
  cout<<endl<<"Radious : "<<endl;
  cin>>rad;
  cout<<"Circle area is : "<<2*3.1415*rad;
}

};

class triangle:public shape{
float x;
int y;
public:
void area(){

  cout<<endl<<"Enter triangle's side : "<<endl;
  cin>>y;
  x = sqrt(3)/4*(y*y);
  cout<<endl<<"Triangle's area : "<<x;
}
};

int main(){
square q;
circle c;
triangle t;
  q.area();
  c.area();
  t.area();


  
}








