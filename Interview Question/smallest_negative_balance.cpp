
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>

//print the names of person having negative balance in alphabetical order

std::vector<std::string> calculate_negative_balance(std::vector<std::vector<std::string>> balance)
{
    std::map<std::string,int> account;
    std::vector<std::string> answer{};

    for(auto bal : balance)
    {
        auto lender = bal[0];
        auto borrower = bal[1];
        auto money = std::stoi(bal[2]);

        if(account.find(lender)!= account.end())
        {
            account[lender] += money;
        }
        else
        {
            account[lender] = money;
        }

        if(account.find(borrower)!= account.end())
        {
            account[borrower] -= money;
        }
        else
        {
            account[borrower] = -1 * money;
        }
    for(auto& acc : account)
    {
        std::cout << acc.first << " " << acc.second << std::endl;
    }
    std::cout << "Iteration ends" << std::endl;
    }

    for(auto& acc : account)
    {
        std::cout << acc.first << " " << acc.second << std::endl;
    }

    auto lowest_balance = 9999;
    for(auto& acc : account)
    {
        if(acc.second <= lowest_balance)
        {
            lowest_balance = acc.second;
        }
    }

    for(auto& acc : account)
    {
        if(acc.second == lowest_balance)
        {
            answer.push_back(acc.first);
        }
    }

    std::sort(answer.begin(),answer.end());

    if (answer.size() == 0)
    {
        answer.push_back("Not");
    }

    return answer;
}

int main()
{
    std::vector<std::vector<std::string>> balance;

    std::vector<std::string> entry1{"Alex", "Blake", "5"};
    balance.push_back(entry1);
    std::vector<std::string> entry2{"Alex", "Casey", "10"};
    balance.push_back(entry2);
    std::vector<std::string> entry3{"Blake", "Casey", "5"};
    balance.push_back(entry3);

    auto answer = calculate_negative_balance(balance);

    for(const auto ans : answer)
    {
        std::cout << ans << std::endl;
    }
}