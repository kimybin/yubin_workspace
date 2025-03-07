#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> index_list) {
    string answer = "";
    
    for(int i = 0; i < index_list.size(); i++)
        answer += my_string[index_list[i]];
    
    return answer;
}

int main()
{
    string my_string;
    vector<int> index_list;
    int index_list_len;

    cout << "Enter my_string: ";
    cin >> my_string;

    cout << "Enter index_len: ";
    cin >> index_list_len;

    cout << "Enter index: ";
    for(int i = 0; i < index_list_len; i++)
    {
        int choose;
        cin >> choose;
        index_list.push_back(choose);
    }

    string result = solution(my_string, index_list);
    cout << "The result is: " << result << endl;

    return 0;
}
