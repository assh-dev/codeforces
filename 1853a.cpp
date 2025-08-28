#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <climits>
 
int main() {
	int test_cases{};
	std::cin >> test_cases;
	
	while(test_cases--){
	    int n{};
	    std::cin >> n;
	    
	    int min_diff{INT_MAX};
	    
	    int prev{};
	    std::cin >> prev;
	    
	    int current{};
 
	    for(int i=1; i<n; i++){
	        std::cin >> current;
	        min_diff = std::min(min_diff, current - prev);
	        prev = current;
	    }
	    
	    if(min_diff < 0) std::cout << 0 << '\n';
	    else std::cout << min_diff / 2 + 1 << '\n';
	}
    return 0;
}
