#include<bits/stdc++.h>s
using namespace std;

int main() {
    char shift;
    string typed, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    cin >> shift >> typed;
    string result = "";

    for(char c : typed) {
        size_t index = keyboard.find(c);

        if(shift == 'R') {
            result += keyboard[index - 1];
        } else if(shift == 'L') {
            result += keyboard[index + 1];
        }
    }

    cout << result << endl;
    return 0;
}
