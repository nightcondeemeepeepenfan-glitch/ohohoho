#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int j = 0;
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    while(x!=0){
        if(x%2==0){
            i++;
        }
        else{
            j++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    cout << "#Even numbers = " << i << endl;
    cout << "#Odd numbers = " << j << endl;
    return 0;
}