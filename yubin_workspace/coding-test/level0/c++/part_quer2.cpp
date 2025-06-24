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
        
        int min_value = INT_MAX; // INT_MAX는 정수형의 최솟값을 구하기 위해 사용됨. 
        // 배열이나 벡터에서 특정 조건을 만족하는 가장 작은 값을 찾으려고 할 때 초기값으로 INT_MAX를 설정하면 어떤 값과 비교해도 해당 값이 작게 나오게 됨. 
        // 배열의 첫 번째 값과 비교할 때 자동으로 min_value가 배열의 첫 번째 값으로 설정됨. 
        // min_value보다 작은 값이 나타나면 그 값으로 min_value를 업데이트하므로 결국 min_value에는 배열 전체에서 가장 작은 값이 저장됨. 
        bool flag = false;
        
        for(int j = s; j <= e; j++)
        {
            if(arr[j] > k && arr[j] < min_value)
            {
                min_value = arr[j]; // 최솟값 업데이트
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
