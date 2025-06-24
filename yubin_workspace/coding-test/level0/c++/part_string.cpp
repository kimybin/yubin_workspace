#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int> > parts) {
    string answer = "";
    
    for (int i = 0; i < parts.size(); i++) {
        answer += my_strings[i].substr(parts[i][0], parts[i][1] - parts[i][0] + 1);
        // parts[i][0] 위치부터 시작해서 parts[i][1] - parts[i][0] + 1 길이만큼 서브스트링 반환
    }
    
    return answer;
}

int main()
{
    vector<string> my_strings;
    vector<vector<int> > parts;
    int parts_rows; // parts의 열 
    int my_strings_len; // 문자열 길이 

    cout << "Enter string len: ";
    cin >> my_strings_len;
    cin.ignore(); // cin과 getline 혼용 문제 방지

    my_strings.resize(my_strings_len); // my_strings 벡터의 크기를 my_strings_len으로 설정, 이 단계가 없으면 my_strings은 비어 있는 상태
    for(int i = 0; i < my_strings_len; i++)
    {
        cout << "Enter string "<< i + 1 << ": ";
        getline(cin, my_strings[i]); // 벡터의 각 요소에 문자열 저장
    }

    cout << "Enter parts rows: ";
    cin >> parts_rows;

    parts.resize(parts_rows, vector<int>(2)); // parts 벡터의 크기를 parts_rows로 설정, 이차원 배열이므로 각 요소를 2로 초기화 
    for(int i = 0; i < parts_rows; i++)
    {
        cout << "Enter parts element " << i + 1 << ": ";
        cin >> parts[i][0] >> parts[i][1]; // 벡터의 각 요소에 인덱스 쌍 저장
    }

    string result = solution(my_strings, parts);
    cout << "The result is: " << result << endl;

    return 0;    
}
