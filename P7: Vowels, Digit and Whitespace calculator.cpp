#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void main()
{
string tex;
int i,vol,dig,whtsp;
vol=dig=whtsp=0;
cout<<“Writer any string: “;
getline(cin,tex);
for(i=0;tex[i]!=’\0′;i++)
{
if(tex[i]==’a’||tex[i]==’e’||tex[i]==’i’||tex[i]==’o’||tex[i]==’u’||tex[i]==’A’||tex[i]==’E’||tex[i]==’O’||tex[i]==’U’)
{
vol++;
}
else if(tex[i]>=’0’&&tex[i]<=’9′)
{
dig++;
}
else if(tex[i]==’ ‘)
{
whtsp++;
}
}
cout<<“Vowels in this string: “<<vol<<endl;
cout<<“\nDigits in this string: “<<dig;
cout<<“\nWhite-Spaces in this string: “<<whtsp;
getch();
}
