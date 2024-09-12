#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    set<int> S;
    for(int i = 0; i < nums.size(); i++) {
        S.insert(nums[i]);
    }
    if(S.size() <= nums.size() / 2) {
        answer = S.size();
    } else {
        answer = nums.size() / 2;
    }
    return answer;
}