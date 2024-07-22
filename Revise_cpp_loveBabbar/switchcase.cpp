#include <iostream>
using namespace std;
int main(){
    int num ;
    cin>>num;
    for(;num;){
        switch (num){
            case 1:
            cout<<"exit";
            exit(0);
            case 2:
            cout<<"break";
            break;
            case 3:
            cout<<"continue";
            continue;
            default:
            cout<<"this is default case";
        }
        cout<<"Exit function is not used";
    }
    return 0;
}