#include <iostream>
using namespace std;
int main ()
{
  float h,w;
  int Gen;
  int I;
  int B;
  cout<<"The number of people: ";
  cin>>B;
  {
    for(I=0 ; I<B ; I++ )
    {
    cout<<"Select Gender: 1.Male 2.Female\n"<<"->";
    cin>>Gen;
    cout<<"Enter Height: ";
    cin>>h;
    cout<<"Enter Mass: ";
    cin>>w;
    float Bmi;
    Bmi = w/(h*h);
    cout<<Bmi<<"\n";
    switch(Gen)
    {
      case 1:
    if (Bmi<=20)
    {
      cout<<"Under Weight\n";
    }
    else if (Bmi>20 && Bmi<25)
    {
      cout<<"Healthy\n";
    }
    else if (Bmi>=25)
    {
      cout<<"Over Weight\n";
    }
    else
    {
      cout<<"Select the appropriate numb\n";
    }
    break;
    case 2:
    if (Bmi<=18)
    {
      cout<<"Under";
    }
    else if (Bmi>18 && Bmi<23)
    {
      cout<<"Healthy";
    }
    else if (Bmi>=23)
    {
      cout<<"Over";
    }
    else
    {
      cout<<"Select the appropriate number";
    }
    }
    }
  }
}