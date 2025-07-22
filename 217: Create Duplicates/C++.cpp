#include<iostream>
#include <unordered_set>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> num;
        for(int h1: nums) {
            if (num.contains(h1)) {
                return true;
            }
            num.insert(h1);
        }
        return false;
    }
};
