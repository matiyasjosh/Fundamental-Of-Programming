#include <iostream>
using namespace std;
int main ()
{
  float h,w;
  int Gen;
  int Loop_Bound;
  cout<<"The number of people: ";
  cin>>Loop_Bound;
  float Main_Tab[Loop_Bound][5];
    for(int I=0;I<Loop_Bound;I++)
    {
      cout<<"Select Gender: 1.Male 2.Female\n"<<"->";
      cin>>Main_Tab[I][0];
      Gen=Main_Tab[I][0];
      cout<<"Enter Mass: ";
      cin>>Main_Tab[I][1];
      cout<<"Enter Height: ";
      cin>>Main_Tab[I][2];
      Main_Tab[I][3]=Main_Tab[I][1]/(Main_Tab[I][2]*Main_Tab[I][2]);
      switch(Gen)
        {
            case 1:
            if (Main_Tab[I][3]<=20)
            {
              Main_Tab[I][4]=0;
            }
            else if (Main_Tab[I][3]>20 && Main_Tab[I][3]<25)
            {
              Main_Tab[I][4]=1;
            }
            else if (Main_Tab[I][3]>=25)
            {
              Main_Tab[I][4]=2;
            }
            break;
            case 2:
            if (Main_Tab[I][3]<=18)
            {
              Main_Tab[I][4]=0;
            }
            else if (Main_Tab[I][3]>18 && Main_Tab[I][3]<23)
            {
              Main_Tab[I][4]=1;
            }
            else if (Main_Tab[I][3]>=23)
            {
              Main_Tab[I][4]=2;
            }
        }
    }
    cout<<"User-Number"<<"\t"<<"Gender"<<"\t"<<"Mass"<<"\t"<<"Height"<<"\t"<<"BMI"<<"\t"<<"Health"<<"\n";
    for(int I=0;I<Loop_Bound;I++)
    {
        cout<<I+1<<"\t"<<"\t";
        for(int Colum=0;Colum<5;Colum++)
        {
            if(Colum==0)
            {
                if(Main_Tab[I][0]==1)
                {
                    cout<<"Male\t";
                }
                else if(Main_Tab[I][0]==2)
                {
                    cout<<"Female\t";
                }
            }
            else if(Colum==4)
            {
                if(Main_Tab[I][4]==0)
                {
                    cout<<"Under\t";
                }
                else if(Main_Tab[I][4]==1)
                {
                    cout<<"Healthy\t";
                }
                else if(Main_Tab[I][4]==2)
                {
                    cout<<"Over\t";
                }
            }
            else 
            {
                cout<<Main_Tab[I][Colum]<<"\t";
            }
        }
    cout<<endl;    
    }

}