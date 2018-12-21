#include<iostream>
using namespace std;

int cutrod(int val[],int n)
{
    if(val[n] >= 0)
        return val[n];
    int j,q=-1;

        for(j=1;j<=n/2;j++)
            q = max( q , ( cutrod(val,j) + cutrod(val,(n-j))) );
        val[n]=q;
    
    return q;
}
int main()
{
    int n,i;int price[] = {0,1,5,8,10,13,17,18,22,25,30};
    cin>>n;

    int val[INT8_MAX];
    for(i=0;i<=n;i++)
        val[i]=-1;
   for(i=0;i<=10;i++)
    val[i]=price[i]; 
    cout<<cutrod(val,n)<<endl;
   
    return 0;
}           
