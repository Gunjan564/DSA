#include <iostream>
using namespace std;
int main()
{
   int a[]={1,2,3,1,1,1,4,2,3},i,j,from=-1,to=-5,k=5,sum=0,size=-1;
   //brute approach
   for(i=0;i<sizeof(a)/4;i++)
   {
      sum=0;
      for(j=1;j<sizeof(a)/4;j++)
      {
         sum=sum+a[i+j-1];
         if(sum==k&&size<j){
            from=i;
            to=i+j-1;
            size=j;
            break;
         }
         if(sum>k){
            break;
         }         
      }
   }
   cout<<from<<endl<<to<<endl<<size;
   return 0;
}