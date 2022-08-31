
/*selection sort 
 time complexity 0(n^2)
*/

#include <iostream>
using namespace std;

void selection_sort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp=0;
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}


int main()
{
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;

    int a[n];
    int i;
    for(i=0;i<n;i++)
        cin>>a[i];

    selection_sort(a,n);
    return 0;
}