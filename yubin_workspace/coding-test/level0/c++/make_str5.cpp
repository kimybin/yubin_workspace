#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    for(int i = 0; i < intStrs.size(); i++)
    {
        string subStr = intStrs[i].substr(s, l); //intStrs 문자열의 i번째 원소에서, s부터 l만큼의 길이까지 추출해 문자열 subStr에 저장.
        int strToNum = stoi(subStr); //문자열 subStr을 정수 strToNum으로 변환해서 저장. 
    
        if(strToNum > k)
            answer.push_back(strToNum); 
    } 
    
    return answer;
}

int main()
{
    vector<string> intStrs;
    int k, s, l;
    int intStrs_len;

    cout << "Enter len of intStrs: ";
    cin >> intStrs_len;

    intStrs.resize(intStrs_len); //벡터 크기를 미리 설정. 

    for(int i = 0; i < intStrs_len; i++)
    {
        string choose;
        cout << "Enter len of intStrs[" << i <<"]: ";
        cin >> choose;
        intStrs[i] = choose; //문자열 전체를 벡터에 할당. 
    }
    
    cout << "Enter k, s and l: ";
    cin >> k >> s >> l;

    vector<int> result = solution(intStrs, k, s, l);

    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
