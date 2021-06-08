#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;

long long maxp(vector<int> &a)
{
    long long result=0;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(((long long)a[i])*a[j]>result)
            {
                result=((long long)a[i])*a[j];
            }
        }
    }
    return result;
}
long long maxp_fast(vector<int> &a)
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
    while(true)
    {
        int n=rand()%100 +2;
        cout<<n<<"\n";
        vector<int> a;
        for(int i=0;i<n;++i)
        {
            a.push_back(rand() % 1000);
        }
        for(int i=0;i<n;++i)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        long long res1=maxp(a);
        long long res2=maxp_fast(a);
        if(res1!=res2){
        cout<<"wrong answer: "<<res1<<" "<<res2<<"\n";
        break;
        }
        else
        cout<<"ok\n";
    }
    /*int n; 
    cout<<"enter size:";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long result=maxp_fast(a);
    cout<<result;
    */
    return 0;
}