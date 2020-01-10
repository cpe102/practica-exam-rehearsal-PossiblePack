#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int x, gpa = 3.50;

    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> x;

    if(x>=gpa){
        cout << name << " Inw Jrim Jrim!!!"; 
    }else{
        cout << "Try harder, " << name << "!!!";
    }
    return 0;
}
