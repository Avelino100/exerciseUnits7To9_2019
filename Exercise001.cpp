//Avelino Martinez Rodriguez

#include <iostream>

using namespace std;

int main()
{
    int num[10],increments=0,decrements=0,equal=0;
    
    cout<<"Introduzca 10 numeros: "<<endl;
    
    for(int i=0;i<=9;i++)
    {
        cin>>num[i];
        if(num[i]<0)
        {
            cout<<"Reinserte el dato"<<endl;
            i--;
        }
    }
    for(int i=0;i<9;i++)
    {
        if(num[i]>num[i+1])
            decrements++;
        else if((num[i]<num[i+1]))
            increments++;
        else
            equal++;
    }
    cout<<"Increment: "<<increments<<" Decrement: "<<decrements<<" Equal: "<<equal;
}
