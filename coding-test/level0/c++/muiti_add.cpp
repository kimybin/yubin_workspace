#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int multi = 1;
    int sum = 0;
    
    for(int i = 0; i < num_list.size(); i++)
    {
        multi *= num_list[i];
        sum += num_list[i];
    }
    
    int all_sum = sum * sum;
    
    if(multi < all_sum)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}

int main()
{
    int num_list_len;
    vector<int> num_list;

    cout << "Enter num_list_len (between 2 and 10): ";
    cin >> num_list_len;

    cout << "Enter num_list (between 1 and 9): ";
    for(int i = 0; i < num_list_len; i++)
    {
        int choose;
        cin >> choose;
        num_list.push_back(choose);
    }

    int result = solution(num_list);
    cout << "The result is : " << result << endl;

    return 0;
}
