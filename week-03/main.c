#include <stdio.h>
int main( int argc, char** argv)
{
    printf("現在的 argv是:%d\n", argc);
    for(int i=0; i<argc; i++){
        printf("argv[%d]是%s\n", i, argv[i] );
    }
}
