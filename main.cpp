#include <iostream>
#include <cmath>
using namespace std;
int main() {

    int n;
    string a;
    string answer;
    cin >> n ;
    cout << endl;
    getline(cin,a);
    int i = 0;
    string input;

    while(i < n){
        getline(cin,input);
        if (input.length() > 10){
            a = input[0];
            answer.append(a);
            a = to_string(input.length()-2);
            answer.append(a);
            a = input[input.length()-1];
            answer.append(a);
            a = ".";
            answer.append(a);

        }else{
            answer.append(input);
            answer.append(".");
        }
        i++;

    }
    int j =0;
    while (j < answer.length()){
        if ((char)answer[j] != '.'){
            cout<<answer[j];
        }else if ((char)answer[j] == '.'){
            cout<<endl;

        }
        j++;
    }
    return 0;
}
