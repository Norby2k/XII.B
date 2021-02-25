#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("cheltuieli.in");
    //tipus-db-ár | maxi-> maxKoltottPenz
    int tip,db,ar,n=0,maxi=-1,maxtip,a[100]={0},c=0;
    while (in>>tip>>db>>ar)
    {
        a[tip]+=db*ar;
    }
    for (int i=0;i<100;i++)
    {
        if (a[i]==maxi)
            c++;
        if (a[i]>maxi){
            maxi=a[i];
            c=1;
        }
    }
    cout<<maxi<<" "<<c;
    return 0;
}
