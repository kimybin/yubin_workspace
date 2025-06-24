#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    string answer;
    vector<string> answers;
    
    istringstream iss(my_string);
    
    while (iss >> answer)
        answers.push_back(answer);
        
    return answers;
}

int main()
{
    string my_string;
    cout << "Enter string: ";
    getline(cin, my_string);

    vector<string> result = solution(my_string);
    for(int i = 0; i < result.size(); i++)
        cout << "\"" << result[i] << "\"" << " ";
    cout << endl;

    return 0;

}
