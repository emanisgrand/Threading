// BELFPC
#include "args_and_returns.h"

int main()
{
    char* str;
    pthread_t thread;

    //create a new thread tha turns hello_return without arguments
    pthread_create(&thread, NULL, hello_return, NULL);

    return 0;
}
