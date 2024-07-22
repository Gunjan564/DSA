#include <iostream>
using namespace std;
int main()
{   
    //Brute approach 
    int i, j, b[2], a[]={3,4,2,1,5}, n = 5;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1] && j < n - 1)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    b[0] = a[1];
    b[1] = a[n - 2];
    cout <<"second smallest: "<< b[0] << endl
         <<"second largest: "<< b[1];
    //Better approach
    int largest=a[0],seclargest=-1,smallest=a[0],secsmallest=largest+1;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if (a[i]>seclargest&&a[i]<largest)
        {
            seclargest=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i]<secsmallest&&a[i]>smallest)
        {
            secsmallest=a[i];
        }
    }
    cout<<endl<<seclargest<<endl<<secsmallest;
    //optimal approach
    seclargest=-2;largest=-1;secsmallest=INT32_MAX;smallest=INT32_MAX-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            seclargest=largest;
            largest=a[i];
        }
        else if(a[i]>seclargest&&a[i]!=largest)
        {
            seclargest=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<smallest)
        {
            secsmallest=smallest;
            smallest=a[i];
        }
        else if(a[i]<secsmallest&&a[i]!=smallest)
        {
            secsmallest=a[i];
        }
    }
    cout<<endl<<"seclargest: "<<seclargest<<endl<<"secsmallest: "<<secsmallest;
} 