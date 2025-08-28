#include<iostream>
#include<vector>
using namespace std;

bool check_if_sorted(vector<int>& nums){
    int size = nums.size();
    for(int i=0; i<size-1; i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
}

int main() {
    int number_of_test_cases{};
    cin >> number_of_test_cases;

    for(int i=0; i<number_of_test_cases; i++){
        int number_of_boxes{};
        int max_reverse{};
        cin >> number_of_boxes >> max_reverse;
 
        vector<int> nums(number_of_boxes);
        for(int& x: nums){
            cin >> x;
        }

        if(max_reverse >= 2){
            cout << "YES\n";
        }
        else{
            cout << (check_if_sorted(nums) ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
