#ifndef HELLO_H
#define HELLO_H

#if defined(_WIN32) && defined(DLL_EXPORT)
    #define EXPORT __declspec(dllexport)
#else
    #define EXPORT
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void EXPORT hello(const char*);

#endif