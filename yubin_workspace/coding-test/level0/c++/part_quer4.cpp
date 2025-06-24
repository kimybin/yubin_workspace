#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int> > queries) {
    vector<int> answer;
    
    for(int i = 0; i < queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        for(int j = s; j <= e; j++)
        {
            if(j % k == 0)
                arr[j] += 1;
        }
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

    for(int i = 0; i < arr_len; i++) {
        cout << "Enter " << i+1 << " elements of arr: ";
        cin >> arr[i];
    }

    cout << endl;
    cout << "Enter length of queries: ";
    cin >> queries_len;

    for(int i = 0; i < queries_len; i++) {
        vector<int> query(3);
        cout << "Enter " << i+1 << " elements of queries: ";
        cin >> query[0] >> query[1] >> query[2];
        queries.push_back(query);
    }

    cout << endl;
    vector<int> result = solution(arr, queries);
    for(int i = 0; i < result.size(); i++) 
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
