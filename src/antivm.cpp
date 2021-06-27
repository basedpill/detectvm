#include <stdio.h>

#include "antivm.hpp"

int main(){
    bool isVm = false;

    if (DetectVM::IsVboxVM() == true) {isVm = true; printf("Running in vbox!");}
    else if (DetectVM::IsVMwareVM() == true) {isVm = true; printf("Running in vmware!");}
    else { printf("Not running in a VM!");}

    if (isVm){DetectVM::SelfDelete(); exit(-1);}
}
