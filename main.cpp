#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int input;
    cin>>input;

    for(int i = 0; i<input ; i++){
        int ControlWatt;
        cin>>ControlWatt;
        int TotalWatt =0;
        int X[9];
        cin>>X[0]>>X[1]>>X[2]>>X[3]>>X[4]>>X[5]>>X[6]>>X[7]>>X[8];
        for(int i =0; i<9 ; i++){
            TotalWatt += X[i];
        }
        if( ControlWatt >= TotalWatt){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
