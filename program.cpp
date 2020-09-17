#include<iostream>
#include<iomanip>

namespace function_overloading{

 inline float perimeter(float a){
 return (2*3.14*a);
}

inline int perimeter(int l, int b){
  return 2*(l+b);
}
inline int perimeter(int a, int b , int c){
 return (a+b+c);
}

}

int main(){
 std::cout<<"the perimeter of circle is: "<<std::endl;
 std::cout<<std::setprecision(2)<<function_overloading::perimeter(1.2)<<" unit"<<std::endl;

 std::cout<<"the perimeter of rectangle is: "<<std::endl;
 std::cout<<function_overloading::perimeter(1,2)<<" unit"<<std::endl;

 std::cout<<"the perimeter of triangle is: "<<std::endl;
 std::cout<<function_overloading::perimeter(2,1,3)<<" unit"<<std::endl;
 return 0;

}
