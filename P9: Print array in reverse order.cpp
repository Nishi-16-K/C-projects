#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
      int num[5],i;
      int *pi[5];
      cout<<“Enter Fives Numbers:\n”;
      for(i=0;i<5;i++)
      {
          cin>>num[i];
          pi[i]=&num[i];
      }
      cout<<“Original Order:\n”;
      for(i=0;i<5;i++)
      {
          cout<<*pi[i]<<” “;
      }
      cout<<“\nReverse Order:\n”;
      for(i=4;i>=0;i–)
      {
          cout<<*pi[i]<<” “;
      }
      getch();
}
