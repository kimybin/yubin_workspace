#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) 
{
    vector<int> answer;

    for(int i = l; i <= r; i++)
    {
        string numTostr = to_string(i); // 정수 i를 문자열로 변환
        bool valid = true;

        for(int j = 0; j < numTostr.length(); j++)
        {
            if(numTostr[j] != '5' && numTostr[j] != '0')
            {
                valid = false;
                break;
            }
        }
        if(valid) // valid == true 이면 answer 벡터에 i 추가
            answer.push_back(i);
    }
    if(answer.empty()) // 벡터에 원소가 하나도 없는지 검사. empty()함수는 벡터가 비어 있으면 true를 반환, 하나 이상의 원소가 있으면 false 반환
            answer.push_back(-1);

    return answer;
}

int main()
{
    int l, r;

    cout << "Enter l and r: ";
    cin >> l >> r;

    vector<int> result = solution(l, r);

    cout << "The result is ";
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
