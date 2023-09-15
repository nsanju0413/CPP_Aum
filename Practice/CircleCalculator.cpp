#include<iostream>

using namespace std;

int main()
{
    cout<<"Circle Calculator\n";
    double radius, diameter,cir,area;
    
    cout<<"Enter radius: ";
    cin>>radius;
    diameter=radius*2;
    cout<<"Diameter: "<<diameter<<endl;
    cir=diameter*3.14159;
    cout<<"Circumference: "<<cir<<endl;
    area=3.14159*radius*radius;
    cout<<"Area: "<<area<<endl<<endl;
    cout<<"Bye!";
    return 0;   
}