#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    
    for(int i = 0; i < my_string.size(); i++)
    {
        string alpa = my_string.substr(i);
        answer.push_back(alpa);
    }
    
    sort(answer.begin(), answer.end());
    
    return answer;
}

int main()
{
    string my_string;

    cout << "Enter string: ";
    cin >> my_string;

    vector<string> result = solution(my_string);
    for(int i = 0; i < result.size(); i++)
        cout << "\"" << result[i] << "\"" << " ";
    cout << endl;

    return 0;
}
