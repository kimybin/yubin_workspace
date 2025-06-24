#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string even;
    string odd;
    
    for(int i = 0; i < num_list.size(); i++)
    {   
        if(num_list[i] % 2 == 0)
            even += to_string(num_list[i]);
        else
            odd += to_string(num_list[i]);
    }

    answer = stoi(even) + stoi(odd);
    return answer;
}

int main()
{
    int num_list_len;
    vector<int> num_list;

    cout << "Enter num_list_len(2~9): ";
    cin >> num_list_len;

    num_list.resize(num_list_len);

    for(int i = 0; i < num_list_len; i++)
    {
        cout << "Enter num_list[" << i << "]: ";
        cin >> num_list[i];
    }

    int result = solution(num_list);
    cout << "The result is : " << result << endl;

    return 0;
}
