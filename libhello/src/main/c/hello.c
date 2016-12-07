#include "hello.h"

void EXPORT hello(const char *str)
{
    char msg[255];

    sprintf(msg, "Hello, %s!", str);
    printf("%s\n", msg);
}
