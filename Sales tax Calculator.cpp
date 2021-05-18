#include<iostream>
#include<conio.h>

using namespace std;
void main()
{
double tax,product,total,cal;
cout<<“\n\t***********************************************\n”;
cout<<“\t\t:S a l e s T a x C a l c u l a t o r:\n”;
cout<<“\t***********************************************\n”;
cout<<“\nPlease Enter herer Your Product Price : $”;
cin>>product;
cout<<“Enter here how many Percent Sales tax in this Product (please Enter tax %): “;
cin>>tax;
cal=product*(tax*0.01);
total=product+cal;
cout<<“\n\nYour Product Price is : $”<<product<<endl;
cout<<“Sales tax in this Product is : $”<<cal<<endl;
cout<<“Total Product Price with Tax is : $”<<total;
getch();
}
