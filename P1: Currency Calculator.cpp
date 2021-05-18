#include<iostream>
using namespace std;
int main()
{      
       int dollars;
       float B,M,J,I;
       cout<<"---------CURRENCY CALCULATOR---------"<<endl;
       
       cout<<"Enter currency in American Dollars ($): "<<endl;
       cin>>dollars;
      
       B=dollars*0.571505;
       M=dollars*10.7956;
       J=dollars*112.212;
       I=dollars*73.04;
       cout<<dollars<<"Your amount in British pound is: "<<B<<endl;
       cout<<dollars<<"Your amount in Mexican peso is: "<<M<<endl;
       cout<<dollars<<"Your amount in Japanese yen is: "<<J<<endl;
       cout<<dollars<<"Your amount in Indian Ruppee is: "<<I<<endl;
       
       
}
