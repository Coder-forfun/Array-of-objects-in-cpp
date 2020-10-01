#include <iostream>

using namespace std;
class stu
{
    int id;
    char name[20];
public:
    void getstu();
    void putstu();
};
void stu::getstu()
{
    cout<<"enter id and name\n"<<endl;
    cin>>id>>name;
}
void stu::putstu()
{
    cout<<id<<"\t"<<name<<endl;
}

int main()
{
    stu s[60];
    int n,i;
    cout<<"enter number of students(1-60only)\n"<<endl;
    cin>>n;
    if(n<1||n>60)cout<<"value 1-60 only"<<endl;
    else
        {for(i=0;i<n;i++)s[i].getstu();
    cout<<"ID\tName\n";
    cout<<"______________\n";
    for(i=0;i<n;i++)s[i].putstu();
        }
}
