#include <iostream>

using namespace std;
class stu
{
    int id;
    char name[20];
public:
    void getstu()
    void putstu();
};
void stu::getstu()
{
    cout<<"enter id and name"<<endl;
    cin>>id>>name
}
void stu::putstu()
{
    cout<<id<<"\t"<<name<<endl;
}

int main()
{
    stu s[60];
    int n,i;
    cot<<"enter number of students(1-60only)"<<endl;
    cin>>n;
    if(n<1||n>60)cout<<"value 1-60 only"<<endl;
    else
        {for(i=0;i<n;i++)s[i].getstu();
    cout<<"ID\tName\n";
    cot<<"______________\n";
    for(i=0;i<n;i++)s[i].putstu();
        }
}
