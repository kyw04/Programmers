#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;

    int value = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        
        if (value == arr[i])
            continue;
        
        value = arr[i];
        answer.push_back(arr[i]);
    }
    
    return answer;
}
