#include <iostream>
#include <vector>
#include <map>

int main()
{
    
    std::vector<int> num1{2,4,1};
    std::vector<int> num2{4};
    std::vector<int> num3{1,2,3,4};
    std::vector<int> num4{2,2,3,4};
    
   /*
    std::vector<int> num1{1,1};
    std::vector<int> num2{2,3};
    std::vector<int> num3{3,3,3};
    std::vector<int> num4{2,4,3};
    */
    int target = 10;
    int count = 0;
    std::map<int,int> difference;

    for(auto i:num1)
    {
        for(auto j : num2)
        {
            int sum = i +j;
            if(difference.find(sum)!= difference.end())
            {
                difference[sum] +=1;
            }
            else
            {
                difference[sum] =1;
            }
            

        }
    }

    for(auto i:num3)
    {
        for(auto j : num4)
        {
            int sum = target - i  - j;
            if(difference.find(sum)!= difference.end())
            {
               count += difference[sum];
            }
 
        }
    }
    std::cout << count << std::endl;
}