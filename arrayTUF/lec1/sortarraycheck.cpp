#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,5,4};
    for(int i=1;i<5;i++){
        if (a[i]<a[i-1])
        {
            cout<<"not sorted";
            break;
        }
        
    }
}