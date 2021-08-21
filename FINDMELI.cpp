#include <iostream>
using namespace std;

int linear_search(int a[],int n, int k)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            return 1;
        }
        
    }
    return -1;

}
int main()
{
    int n ,k ;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int ans = linear_search(a,n,k);
    cout<<ans;
    return 0;
}