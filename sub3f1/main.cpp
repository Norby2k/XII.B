#include <iostream>
using namespace std;
void prime (int n,int x,int y)
{
    for (int i=n; i>1; i--)
    {
        bool is_prim=true;
        for(int d=2; d<i/2+1; d++) {
            if (i%d==0) {
                is_prim=false;
            }
        }

    if (is_prim)
    {
        if (i>y)
            y=i;
        if (i>x && i<y)
        {
            x=i;
            break;
        }
    }

}  cout<<x<<" "<<y;

}
int main()
{
    prime (50,1,1);
    return 0;
}
