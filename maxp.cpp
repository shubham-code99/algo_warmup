#include<iostream>
#include<vector>
using namespace std;
long long maxp(vector<int> &a)
 {
     int max1=-1,max2=-1,max1i,max2i;
     for(int i=0;i<a.size();i++)
     {
         if(a[i]>max1)
         {
            max1=a[i];
            max1i=i;            
         }
     }
     for(int i=0;i<a.size();i++)
     {
         if((a[i]>=max2)&&(i!=max1i))
         {
            max2=a[i];
            max2i=i;            
         }
     }
     return ((long long)a[max1i]) * a[max2i];
 }
int main()
{
    int n; 
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long result=maxp(a);
    cout<<result;
    return 0;
}