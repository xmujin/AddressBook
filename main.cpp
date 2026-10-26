#include <fmt/core.h>
#include <fmt/color.h>

void loginPage() 
{
    fmt::print("{:*^36}\n", "");
    fmt::print("*{:^34}*\n", "通讯录管理系统");
    fmt::print("{:*^36}\n", "");
}   


int main()
{
    loginPage();


    return 0;
}