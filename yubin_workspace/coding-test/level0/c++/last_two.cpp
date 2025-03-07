#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    
    if(num_list[num_list.size()-1] > num_list[num_list.size()-2])
        num_list.push_back(num_list[num_list.size() - 1] - num_list[num_list.size() - 2]);
    else
        num_list.push_back(num_list[num_list.size()-1] * 2);
    
    answer = num_list;
    return answer;
}

int main()
{
    int num_list_len;
    int i = 0;
    vector<int> num_list;

    cout << "Enter num_list_len(2~10): ";
    cin >> num_list_len;

    num_list.resize(num_list_len);

    for(i = 0; i < num_list.size(); i++)
    {
        cout << "Enter num_list[" << i << "]: ";
        cin >> num_list[i]; 
    }
    
    vector<int> result = solution(num_list);
    cout << "The result is: ";
    for(int i = 0; i < result.size(); i++)
        cout << result[i];
    cout << endl;

    return 0;
}
