#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int mode = 0;
    
    for(int i = 0; i < code.size(); i++)
    {
        if(mode == 0)
        {
            if(code[i] == '1')
                mode = 1;
            else if(code[i] != '1' && i % 2 == 0)
                answer += code[i];
        }
        else if(mode == 1)
        {
            if(code[i] == '1')
                mode = 0;
            else if(code[i] != '1' && i % 2 == 1)
                answer += code[i];
        }
    }
    
    return answer.empty() ? "EMPTY" : answer;
}

int main()
{
    string code;
    
    cout << "Enter code: ";
    getline(cin, code);

    string result = solution(code);

    cout << "The result is : " << result << endl;

    return 0;
}
