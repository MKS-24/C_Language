//                                    Simple method
// #include <stdio.h>
// int main()
// {
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("Nice to meet you..\n");
//     printf("Hello World\n");
//     printf("Hello World\n");
//     printf("How are you?\n");
//     printf("Hello World\n");
//     return 0;
// }
//                                      By using Loop
// #include <stdio.h>
// int main()
// {
//     for (int i = 1; i <= 3; i++)
//     {
//         printf("Hello World\n");
//     }
//     printf("Nice to meet you..\n");
//     for (int i = 1; i <= 2; i++)
//     {
//         printf("Hello World\n");
//     }
//     printf("How are you?\n");
//     printf("Hello World\n");
//     return 0;
// }
//                                         By Using Function
#include <stdio.h>
void Hello(){
    printf("Hello World\n");
    return ;                        // return nh likhu tu bhi work kare ga.... lkn return ke baad koi bhi value nh likhna like (return 0;)
}
int main()
{
    Hello();
    Hello();
    Hello();
    printf("Nice to meet you..\n");
    Hello();
    Hello();
    printf("How are you?\n");
    Hello();
    return 0;
}