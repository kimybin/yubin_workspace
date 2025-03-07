#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int> > queries) {
    vector<int> answer;
    
    for(int k = 0; k < queries.size(); k++)
    {
        int i = queries[k][0];
        int j = queries[k][1];
        
        swap(arr[i], arr[j]);
    }
    
    answer = arr;
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
    arr.resize(arr_len);

    for(int i = 0; i < arr_len; i++)
    {
        cout << "Enter arr " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "Enter length of queries: ";
    cin >> queries_len;

    for(int i = 0; i < queries_len; i++)
    {
        vector<int> query(2);
        cout << "Enter " << i+1 << " queries: ";
        cin >> query[0] >> query[1];
        queries.push_back(query);
    }

    vector<int> result = solution(arr, queries);
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
