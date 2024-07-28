#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    
    for(int i = 1; i < numLog.size(); i++)
    {
        int diff = numLog[i] - numLog[i-1];
        switch(diff)
        {
            case 1:
                answer += 'w';
                break;
            case -1:
                answer += 's';
                break;
            case 10:
                answer += 'd';
                break;
            case -10:
                answer += 'a'; 
                break;
        }
    }
    
    return answer;
}

int main()
{
    vector<int> numLog;
    int numLog_len;

    cout << "Enter numLog_len: ";
    cin >> numLog_len;

    numLog.resize(numLog_len);

    for(int i = 0; i < numLog_len; i++)
    {
        cout << "Enter numLog element[" << i << "]: ";
        cin >> numLog[i];
    }

    string result = solution(numLog);
    cout << "The result is: " << result << endl;

    return 0; 
}
