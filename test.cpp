#include <iostream>
#include <string>

auto add = [](auto a) {return a+a;};

void PrintLoveWife(int i){
    while(i-- > 0){
        std::cout<<"Danielle is the best\n";

    }
}
int main()
{
    std::cout<<"what's up dawg?\n";
    int num;
    std::cin>>num;
    PrintLoveWife(num);
    std::cout<<add(3)<<std::endl;
    std::cout<<add(std::string("you"))<<std::endl;
    return 0;
}