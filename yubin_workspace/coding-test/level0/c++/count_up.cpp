#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int start_num, int end_num) {
    vector<int> answer;

    for(int i = start_num; i <= end_num; i++)
        answer.push_back(i);

return answer;
}

int main()
{
    int start_num;
    int end_num;
    vector<int> answer;

    cout << "Enter start_num and end_num(0~50): ";
    cin >> start_num >> end_num;

    vector<int> result = solution(start_num, end_num);
    cout << "The result is: ";
    for(int i = 0; i < result.size(); i++)
        cout << result[i];
    cout << endl;

    return 0;
}
