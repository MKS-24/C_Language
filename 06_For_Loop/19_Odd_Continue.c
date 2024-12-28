#include <stdio.h>
int main()
{
    for (int i = 1; i <= 100; i++) // AP = 100,50,25,...
    {
        if (i % 2 == 0)
        {
            continue;// agaer condition hit hogai to us part ko skip kerke aage jae ga then new itteration and so on ....
        } 
        printf("%d ", i);
    }
    return 0;
}
