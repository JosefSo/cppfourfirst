#include "Captain.hpp"

namespace coup
{
    void Captain::block(Player player){
        std::cout<<"block\n";
    }
    void Captain::steal(Player player){
        std::cout<< "steal\n";
    }
    void Captain::role(){
        std::cout<<"Captain\n";
    }
}