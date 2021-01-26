#include<iostream>
#include<vector>
#include <map>

int calculate_count(std::vector<int> numbers)
{
    std::map<int,int> frequency;
    int count = 0;
    for(auto num:numbers)
    {
        if (frequency.find(num) != frequency.end())
        {
            frequency[num] +=1;
        }
        else
        {
             frequency[num] =1;
        }
    }

    for(auto& freq:frequency)
    {
        if (freq.second > 1)
        {
            count += 1;
        }
    }

    return count;
}

int main()
{
    std::vector<int> numbers{1,2,1,3,4,5,3,5};

    auto count = calculate_count(numbers);
    std::cout << count << std::endl;
}