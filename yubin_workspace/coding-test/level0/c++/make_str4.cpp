#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    while(i < arr.size())
    {
        if(stk.empty())
        {
            stk.push_back(arr[i]);
            i++;
        }
        else if(stk.back() < arr[i])
        {
            stk.push_back(arr[i]);
            i++;
        }
        else if(stk.back() >= arr[i])
            stk.pop_back(); 
    }
    return stk;
}

int main()
{
    vector<int> arr;
    int arr_len;

    cout << "Enter the length of the arr: ";
    cin >> arr_len;

    for(int i = 0; i < arr_len; i++)
    {
        int choose;
        cout << "Enter the element of the arr[" << i << "]: ";
        cin >> choose;
        arr.push_back(choose);
    }

    vector<int> result = solution(arr);
     
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0; 
}
