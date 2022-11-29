#include "aoc.h"
#include <stdio.h>
#include <stdlib.h>

#define DATAFILE "string_data.txt"

int main(int argc, const char * argv[])
{
    char *data = read_file_string(DATAFILE);
    printf("data: %s\n", data);
    free(data);
    return 0;
}
