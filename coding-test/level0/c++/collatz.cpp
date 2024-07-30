#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int element = 0;
    
    answer.push_back(n);
    
    while(n != 1)
    {
        if(n % 2 == 0)
            n = n / 2;
        else if(n % 2 == 1)
            n = 3 * n + 1;
        
        answer.push_back(n);
    }
    
    return answer;
}

int main()
{
    int n;

    cout << "Enter n: ";
    cin >> n;

    vector<int> result = solution(n);
    
    cout << "The result is: ";
    for(int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
    cout << endl;

    return 0;
}
