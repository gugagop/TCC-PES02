#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "interface.h"

static void helpFunction(char *filename)
{
    fprintf (stdout, "Usage: %s [OPTIONS].\n", filename);
    fprintf (stdout, "Options:\n\t-c Path to the file where the code will be evaluated.\n\t-d Debug flag\n\t-h Help function\n");
}

int getInterfaceOptions(int argc, char* argv[], char *codePath, int *debugFlag)
{
    char c;

    while ( (c = getopt (argc, argv, "c:dh")) != -1 )
    {
        switch (c) {
        case 'c':
            codePath = optarg;
            break;
        case 'd':
            *debugFlag = 1;
            return 1;
        case 'h':
            helpFunction(argv[0]);

            return 1;
        default:
            abort ();
        }
    }
    return 0;
}

