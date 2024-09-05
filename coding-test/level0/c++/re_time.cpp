#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(string my_string, vector<vector<int> > queries) {
    string answer = "";
    
    for(int i = 0; i < queries.size(); i++)
        reverse(my_string.begin() + queries[i][0], my_string.begin() + queries[i][1] + 1);
    
    return my_string;
}

int main()
{
    string my_string;
    vector<vector<int> > queries;
    int queries_rows;

    cout << "Enter string: ";
    cin >> my_string;

    cout << "Enter rows(a two-dimensional arrangement): ";
    cin >> queries_rows;

    queries.resize(queries_rows, vector<int>(2));

    for(int i = 0; i < queries_rows; i++)
    {
        cout << "Enter query " << i+1 << ": ";
        cin >> queries[i][0] >> queries[i][1];
    }

    string result = solution(my_string, queries);
    cout << "The result is: " << result << endl;
    return 0;
}
