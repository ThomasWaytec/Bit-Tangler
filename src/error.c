#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void fatalError(const char *format, ...)
{
    va_list args;
    va_start(args, format);


    fprintf(stderr, "\nError: ");
    vfprintf(stderr, format, args);
    fprintf(stderr, "\n");


    va_end(args);

    exit(EXIT_FAILURE);
}

void unknownArgError(char* arg) {
    fatalError("Unknown argument: \"%s\"", arg);
}