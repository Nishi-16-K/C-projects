#include<iostream>
#include<conio.h>

using namespace std;
void main()
{
int arr[100];
int key, ar_value, i, first, last;
cout<<“Enter Array Value. “;
cin>>ar_value;
cout<<“\nEnter Any “<<ar_value<<” Values.\n”;

   for (i = 0; i < ar_value; i++)
{
           cin>>arr[i];
}
       cout<<“\nEnter Find Value. “;
       cin>>key;
       cout<<“\nEnter First Value. “;
       cin>>first;
       cout<<“\nEnter Last Value. “;
       cin>>last;

       int mid=(first+last)/2;
       while(first <= last)
       {
              if (key == arr[mid])
              {
                     cout<<“\nValue found at “<<mid<<” index.”;
                     break;
              }
              else if (key > arr[mid])
              {
                     first = mid+1;
              }
              else
              {
                     last = mid -1;
              }
              mid=(first+last)/2;
       }
       if (first > last)
       {
              cout<<“\nValue not found!!!”<<endl;
       }
       getch();
}
