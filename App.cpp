#include <iostream>
using namespace std;

class Solution 
{
public:
    int hammingWeight(uint32_t n) 
    {

        // accumulator to be returned
        int count = 0;

        // iterate through n
        while (n != 0)
        {
            // if current bit & 1 = 1
            if (n & 1) {

                // add to accumulator
                count++;
            }

            // right shift n for next bit
            n = n >> 1;
        }

        return count;
    }
};

int main()
{
    Solution solution;
    uint32_t example_one = 11;
    cout << "Example One : " << solution.hammingWeight(example_one);
	return 0;
}
