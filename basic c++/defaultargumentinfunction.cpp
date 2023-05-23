#include<iostream>
using namespace std;


    //if we wand a default value we can simply specifiy it in parameter
    //all the default values must be written at last of the argument
    //writing default vaue in the defination and in parameter also is not possible

/*void details(int roll,string name,string address)
{

}*///compiler error
    void details(int roll, string name ="defaultvalue",string address ="defaultaddress" )
    {
        cout<<"\n"<<"roll no is "<<roll<<"\n";
        cout<<"name is "<<name<<"\n";
        cout<<"address is "<<address<<"\n";
    }
    
int main()
{
    cout<<"entering some defaults details ";
    details(45, "ramesh", "raipur");
    details(50);
    return 0;

}
