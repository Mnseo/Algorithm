#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n)
{
    int answer = 0;
    int temp1, temp2 = 0;
    while (n % 10 != 0)
    {
        temp1 = n / 10;
        temp2 = n % 10;
        n = temp1;
        answer += temp2;
        if (n < 10)
        {
            answer += n;
        }
    }

    return answer;
}