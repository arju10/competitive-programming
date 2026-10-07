// Promlem Link:https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en

#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    string str = to_string(N);

    int str_length = str.length();

    if((str_length == 4)){
        cout << str;
    }else if(str_length == 3){
        cout << "0" << str;
    }else if(str_length ==2){
        cout << "00" << str; 
    }else if(str_length == 1){
        cout << "000" << str;
    }else{
        cout << str.substr(0,4);
    }

    return 0;
}