#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(int i = 0; i < control.size(); i++)
    {
        switch(control[i])
        {
            case 'w':
                n += 1;
                break;
            case 's':
                n -= 1;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                 break;
        }
    }   
    answer = n;
    return answer;
}

int main()
{
    int n;
    string control;

    cout << "Enter n : ";
    cin >> n;

    cout << "Enter control : ";
    cin >> control;

    int result = solution(n, control);

    cout << "The result is : " << result << endl;

    return 0;
}
