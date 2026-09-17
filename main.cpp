#include <iostream>
#include <array>

int main(){
    short int sintNum;
    int intNum;
    long int lintNum;
    long long int llintNum;
    unsigned short int usintNum;
    unsigned int uintNum;
    unsigned long int ulintNum;
    unsigned long long int ullintNum;
    bool sintOvf = false;
    bool intOvf = false;
    bool lintOvf = false;
    bool llintOvf = false;
    bool usintOvf = false;
    bool uintOvf = false;
    bool ulintOvf = false;
    bool ullintOvf = false;
    bool allOvf = false;
    int overflowedNums[8];
    for(int i = 1; i < 100; i++){
        for(int o = i; o > 0; o--){
            if(o == i){
                sintNum = o;
                intNum = o;
                lintNum = o;
                llintNum = o;
                usintNum = o;
                uintNum = o;
                ulintNum = o;
                ullintNum = o;
                continue;
            }
            if(((sintNum) > (sintNum*o)) && !sintOvf){
                overflowedNums[0] = i;
                sintOvf = true;
            }
            if(((intNum) > (intNum*o)) && !intOvf){
                overflowedNums[1] = i;
                intOvf = true;
            }
            if(((lintNum) > (lintNum*o)) && !lintOvf){
                overflowedNums[2] = i;
                lintOvf = true;
            }
            if(((llintNum) > (llintNum*o)) && !llintOvf){
                overflowedNums[3] = i;
                llintOvf = true;
            }
            if(((usintNum) > (usintNum*o)) && !usintOvf){
                overflowedNums[4] = i;
                usintOvf = true;
            }
            if(((uintNum) > (uintNum*o)) && !uintOvf){
                overflowedNums[5] = i;
                uintOvf = true;
            }
            if(((ulintNum) > (ulintNum*o)) && !ulintOvf){
                overflowedNums[6] = i;
                ulintOvf =true;
            }
            if(((ullintNum) > (ullintNum*o)) && !ullintOvf){
                overflowedNums[7] = i;
                ullintOvf = true;
            }
            //allOvf = (sintOvf && intOvf && lintOvf && llintOvf && usintOvf && uintOvf && ulintOvf && ullintOvf);
            allOvf = (sintOvf && intOvf && lintOvf && llintOvf);
            sintNum *= o;
            intNum *= o;
            lintNum *= o;
            llintNum *= o;
            /*
            usintNum *= o;
            uintNum *= o;
            ulintNum *= o;
            ullintNum *= o;*/
            if(allOvf){
                break;
            }
        }
        std::cout << "Factorial of " << i << " is: " << llintNum << std::endl;
        if(allOvf){
            std::cout << "Factorial with type short int overflowed at " << overflowedNums[0] << std::endl;
            //std::cout << "Factorial with type unsigned short int overflowed at " << overflowedNums[4] << std::endl;
            std::cout << "Factorial with type int overflowed at " << overflowedNums[1] << std::endl;
            //std::cout << "Factorial with type unsigned int overflowed at " << overflowedNums[5] << std::endl;
            std::cout << "Factorial with type long int overflowed at " << overflowedNums[2] << std::endl;
            //std::cout << "Factorial with type unsigned long int overflowed at " << overflowedNums[6] << std::endl;
            std::cout << "Factorial with type long long int overflowed at " << overflowedNums[3] << std::endl;
            //std::cout << "Factorial with type unsigned long long int overflowed at " << overflowedNums[7] << std::endl;
            break;
        }
    }
    return 0;
}
