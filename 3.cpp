#include<iostream>
using namespace std;
struct empolye
{
 int id;
 char name[50];
 int age;
}s;
int main()
{
    int i,n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the id of employee "<<i+1<<": ";
        cin>>s.id;
        cout<<"Enter the name of employee "<<i+1<<": ";
        cin>>s.name;
        cout<<"Enter the age of employee "<<i+1<<": ";
        cin>>s.age;
    
    }
    for(i=0;i<n;i++)
    {
        cout<<"Employee "<<i+1<<" details are: "<<endl;
        cout<<"Id: "<<s.id<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Age: "<<s.age<<endl;
        
    }


}