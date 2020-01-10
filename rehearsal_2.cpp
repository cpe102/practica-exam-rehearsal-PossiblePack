#include<iostream>
using namespace std;

int main(){
    float sum = 0, x;
    cout << "Enter x: ";
    cin >> x;

    if(x==0){
        cout << "sum = " << sum;
    }else{
        while(x!=0){
            if(x>0){
                sum = sum+x;
                cout << "Enter x: ";
                cin >> x;
        }else{
            cout << "Enter x: ";
            cin >> x;
        }
            }
            cout << "sum = " << sum;
    }
    return 0;
}