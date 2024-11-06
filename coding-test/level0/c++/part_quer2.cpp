#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int> > queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        int min_value = INT_MAX; //이해 안됨 
        bool flag = false;
        
        for(int j = s; j <= e; j++)
        {
            if(arr[j] > k && arr[j] < min_value)
            {
                min_value = arr[j];
                flag = true;
            }    
        }
        
        if(!flag)
            answer.push_back(-1);
        else
            answer.push_back(min_value);
    }
    return answer;
}

int main() 
{
    vector<int> arr;
    vector<vector<int> > queries;
    int arr_len;
    int queries_len;

    cout << "Enter length of arr: ";
    cin >> arr_len;
    arr.resize(arr_len); // arr 벡터 크기를 arr_len만큼 미리 설정

    for(int i = 0; i < arr_len; i++)
    {
        cout << "Enter arr " << i+1 << " : ";
        cin >> arr[i]; 
    }

    cout << "Enter length of queries: ";
    cin >> queries_len;

    for(int i = 0; i < queries_len; i++)
    {
        vector<int> query(3); // 3개의 요소를 가지는 벡터(애초에 3으로 정해짐)
        cout << "Enter " << i+1 << " queries: ";
        cin >> query[0] >> query[1] >> query[2]; // cin은 기본적으로 공백문자를 입력구분자로 인식
        // 공백문자 허용:  숫자나 문자열 입력에서 공백은 값 구분자로 허용
        // 공백문자 허용 불가: getline과 같이 문자열 전체를 입력받는 경우는 공백 포함, cin으로 단일 문자열 입력을 받을 때는 공백 구분.
        queries.push_back(query);
    }

    vector<int> result = solution(arr, queries);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0; 
}
