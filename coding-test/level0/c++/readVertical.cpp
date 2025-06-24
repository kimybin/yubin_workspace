#include <iostream>
#include <string>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    
    for(int i = c - 1; i < my_string.size(); i += m)
        answer += my_string[i];
    return answer;
}

int main() {
    string my_string;
    int m, c;

    cout << "Enter the string: ";
    cin >> my_string;

    cout << "Enter the letter 'm' and row 'c' ('m' and 'c' are integer): ";
    cin >> m >> c;

    string result = solution(my_string, m, c);
    cout << "The result is: " << result << endl;

    return 0;
}