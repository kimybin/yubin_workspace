#include <iostream>
#include <vector>
#include <string>

using namespace std;

int solution(string my_string, string is_suffic) {
    int answer = 0;
    vector<string> sfcIndex;

    for(int i = 0; i < my_string.size(); i++)
        sfcIndex.push_back(my_string.substr(i));
        // i부터 끝까지의 글자가 sfcIndex에 저장됨
        // ex) "banana", "anana", "nana", "ana", "na", "a"

    for(int i = 0; i < sfcIndex.size(); i++) {
        if (sfcIndex[i] == is_suffic)
            answer = 1;
    }

    return answer;
}

int main() {
    string my_string;
    string is_suffic;

    cout << "Enter the string: ";
    cin >> my_string;

    cout << "And Enter the suffic: ";
    cin >> is_suffic;

    int result = solution(my_string, is_suffic);
    cout << "The result is: " << result << endl;

    return 0;
}