#include <iostream>
#include <string>

using namespace std;

string solution(string str1, string str2) {
    string answer = "";

    for(int i = 0; i < str1.size(); i++) {
        answer += str1[i];
        answer += str2[i];
    }
    return answer;
}

int main() {
    string str1, str2;

    cout << "Enter first string and seconde string: ";
    cin >> str1 >> str2;
    
    string result = solution(str1, str2);
    cout << "The result: " << result << endl;

    return 0;
}