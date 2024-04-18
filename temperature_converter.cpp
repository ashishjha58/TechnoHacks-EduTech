#include<iostream>
using namespace std;
int main()
{
    //initalizing
    float fahrenheit, celsius;
    cout<<"Enter the Temperature in Fahrenheit:= ";
    cin>>fahrenheit;
    //formula of converting
    celsius = (fahrenheit-32)/1.8;    
    cout<<"\nEquivalent Temperature in Celsius:= "<<celsius<<endl;
    cout<<endl;
    return 0;
}