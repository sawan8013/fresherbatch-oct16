#include<bits/stdc++.h>
using namespace std;

int costofgarden(int n, int len, int brea, int rs)
{
    
    int cost=0;
    int rem=0;
    if(n<=0 || len<=0 || brea<=0 || n<len || n<brea)
    {
       cout<<"Invalid input"<<endl;
    }
    else
    {
        int land= n * n;
        int dimension_of_house= len * brea;
        rem = land - dimension_of_house;
        cost= ((rem*rs)/100);
        cout<<cost<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int len, brea,rs;
    cin>>len>>brea>>rs;
    if(len==1)
    {
        cout<<"done"<<endl;
    }
    else
    {
        cout<<"kelaow"<<endl;
    }
    
    costofgarden(n,len,brea,rs);    
}