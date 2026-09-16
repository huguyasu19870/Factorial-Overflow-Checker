#include <iostream>

int main(){
    int n;
    bool hasOverflowed = false;
    for(int i = 1; i < 100; i++){
        for(int o = i; o > 0; o--){
            if(o == i){
                n = o;
                continue;
            }
            n *= o;
            if((n) < 0){
                hasOverflowed = true;
                break;
            }
        }
        std::cout << "Factorial of " << i << " is: " << n << std::endl;
        if(hasOverflowed){
            std::cout << "Factorial overflowed at " << i << std::endl;
            break;
        }
    }
    return 0;
}
