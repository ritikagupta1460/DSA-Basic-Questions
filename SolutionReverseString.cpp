#include <iostream>
#include <stack>
#include <string>

using namespace std;
 
void reverseString(string &str) {
    stack<int> stk;
 
    for (int i = 0; i < str.length(); i++){
    	stk.push(i);
	}
 
    for (int i = 0; i < str.length(); i++) {
        str[i] = stk.top();
        stk.pop();
    }
}
 
int main() {
    string str = "hi-educative";
    cout << "Original String - " << str << endl;
    reverseString(str);
    cout << "Reversed String - " << str;
}
