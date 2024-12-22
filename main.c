#include<stdio.h>
#include "helpers/vector.h"
#include "compiler.h"

int main()
{
    // struct vector* vec = vector_create(sizeof(int));
    // int x=20;
    // vector_push(vec, &x);

    // x=50;
    // vector_push(vec, &x);

    // vector_set_peek_pointer(vec, 1);
    // int* ptr=vector_peek(vec);
    // while(ptr)
    // {
    //     printf("%d\n", *ptr);
    //     ptr=vector_peek(vec);
    // }
    
    int res = compile_file("./test.c", "./test", 0);

    if(res==COMPILER_FILE_COMPILED_OK)
    {
        printf("Compiled ok\n");
    }
    else if(res==COMPILER_FAILED_WITH_ERRORS)
    {
        printf("Compiled error\n");
    }
    else
    {
        printf("Unknown error\n");
    }


    return 0;
}