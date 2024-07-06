#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) 
{
    int answer = 0;
    
    for (int i = 0; i < included.size(); i++)
    {
        if (included[i] == true)
            answer += a + i*d;
    }
    
    return answer;
}

int main()
{
    int a, d;
    int included_len;
    vector<bool> included;
    int choose;

    cout << "Enter a, d and included_len: ";
    cin >> a >> d >> included_len;

    included.resize(included_len);
    
    cout << "Enter true(1) or false(0): " << endl;
    for (int i = 0; i < included.size(); i++)
    {
        cin >> choose;
        
        if(choose == 0)
            included[i] = false;
        else
            included[i] = true;
    }

    int result = solution(a, d, included);
    cout << "The result is: " << result << endl;

    return 0;   
}
