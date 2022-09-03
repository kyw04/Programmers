#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    
    int w, h;
    int maxN = max(sizes[0][0], sizes[0][1]);
    int minN = min(sizes[0][0], sizes[0][1]);
    for (int i = 1; i < sizes.size(); i++)
    {
        maxN = max(maxN, max(sizes[i][0], sizes[i][1]));
        minN = max(minN, min(sizes[i][0], sizes[i][1]));
    }
    
    answer = maxN * minN;
    
    return answer;
}
