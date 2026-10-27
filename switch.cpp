#include <iostream>
using namespace std;
int main()
{int choice;
cout<<"welcome\n"<<"enter\n"<<"1 for coffee\n"<<"2 for tea\n"<<"3 for juice\n"<<endl;
cin>>choice;
switch(choice)
{case 1 :  
cout<<"tea"<<endl;
break;
case 2 :
cout << "coffee"<<endl;
break;
case 3 :
cout << "juice"<<endl;
break;
default:
cout<<"invalid input"<<endl;
