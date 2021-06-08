#include<iostream>
#include<vector>
using namespace std;

int fib(int n, vector<int> &A)
{
    A[0]=0;
    A[1]=1;
    for (int i=2;i<=n;++i)
    {
        A[i]=A[i-1]+A[i-2];
    }
    return A[n];    
}
int main()
{
    int n;
    cin>>n;
    vector<int> A;
    cout<<fib(n,A);
}