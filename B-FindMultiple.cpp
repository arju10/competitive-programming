// Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a

#include <iostream>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >>B >> C;

    bool found = false;
    for(int i=A; i<=B; i++){
        if(i % C == 0){
            cout << i;
            found =true;
            break;
        }

    }
    if(found == false){
        cout << -1;
    }

    return 0;

}