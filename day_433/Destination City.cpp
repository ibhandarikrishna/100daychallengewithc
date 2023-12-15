#include <vector>
#include <string>

class Solution {
public:
    // Function to find the destination city from paths
    std::string destCity(std::vector<std::vector<std::string>>& paths) {
        // Loop through each path
        for (int i = 0; i < paths.size(); i++) {
            std::string candidate = paths[i][1]; // Get the candidate destination city from the current path
            bool good = true; // Flag to determine if the candidate is the destination city
            
            // Check if the candidate city is also a starting city in other paths
            for (int j = 0; j < paths.size(); j++) {
                if (paths[j][0] == candidate) { // If the candidate is found as a starting city in another path
                    good = false; // Update flag to indicate it's not the destination city
                    break; // Exit the loop, as we've found the candidate is not the destination
                }
            }

            if (good) {
                return candidate; // If the candidate is not a starting city in any other path, it's the destination city
            }
        }
        
        return ""; // If no destination city found (shouldn't reach here if every path is valid)
    }
};

