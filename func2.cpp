#include "middle.h"

int itc_min_num(long long number)
{
    int mini = 9;
    if(number == 0)
    if(number < 0) number *= -1;
    while(number > 0){
        if(number % 10 == 0)
            return 0;
        if(number % 10 <= mini)
        mini = number % 10;
        number = (number - number % 10) / 10;
    }
    return mini;
}

int itc_rev_num(long long number)
{
    if(number == 0)
        return 0;
    while(number % 10 == 0)
         number /= 10;
    return itc_len_num(number);
}

int itc_null_count(long long number)
{
    if(number == 0) return 1;
    int k = 0;
    if(number < 0) number *= -1;
    while(number > 0){
        if(number % 10 == 0) k++;
        number = (number - number % 10) / 10;
    }
    return k;
}

bool itc_mirror_num(long long number)
{
    if(number == 0)
        return 1;
    int k = 0;
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 == 0)
           k++;
           number = (number - number % 10) / 10;
    }
    return k;
}

int itc_mirror_count(long long number)
{
    int coun = 0;
    for(int i = 1; i <= number; i++){
        if(itc_mirror_num(i))
            coun++;
    }
    return coun;
}
