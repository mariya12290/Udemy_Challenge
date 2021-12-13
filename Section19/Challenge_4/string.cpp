#include <iostream>
#include <string>


int main(){
    std::string line{"Suri"};
    std::string line1{"1"};
    line.insert(0, line1);
    std::cout<<line<<std::endl;
}