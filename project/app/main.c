#include <stdio.h>
#include "interface.h" 

int main(int argc, char* argv[])
{
    char *codePath;
    int debugFlag = 0;
    getInterfaceOptions(argc, argv, codePath, &debugFlag);

}