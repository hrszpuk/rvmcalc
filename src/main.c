//
// Created by hrs on 26/06/24.
//

#include <stdio.h>
#include "../rvm/src/lib/headers/vm.h"

int main(int argc, char** argv) {
    printf("Hello");

    VM* vm = CreateVM(10);

    //RunVM(vm);

    DestroyVM(vm);

    return 0;
}