#include "middle.h"

int itc_second_max_num(long long number)
{
    if(number <= 9 && number >= 0)
        return -1;
    if(itc_min_num(number) == itc_max_num(number))
        return itc_max_num(number);
    int sec = 0;
    int numcopy = number;
    if(number < 0)
      number *= -1;
    while(number > 0){
        if(number % 10 > sec && number % 10 < itc_max_num(numcopy))
        sec = number % 10;
        number = (number - number % 10) / 10;
    }
    return sec;
}

int itc_second_simple_max_num(long long number)
{
    if(itc_min_num(number) == itc_max_num(number))
        return -1;
    int sec = 0;
    int numcopy = number;
    if(number < 0) number *= -1;
    while(number > 0){
        if(number % 10 > sec&& number % 10 < itc_max_num(numcopy))
        sec = number % 10;
        number = (number - number % 10) / 10;
    }
    return sec;
}

long long itc_bin_num(long long number)
{
    int bin = 0;
    int k = 0;
    while(number > 0){
        bin += number % 2 * itc_pow(10, k);
        number /= 2;

        k++;
    }
    return bin;

}

long long itc_oct_num(long long number)
{
    int bin = 0;
    int k = 0;
    while(number > 0){
        bin += number % 8  * itc_pow(10, k);
        number /= 8;
        k++;
    }
    return bin;
}

int itc_rev_bin_num(long long number)
{
    int dec= 0;
    int step = 0;
    while(number > 0){
        dec += number % 10 * itc_pow(2, step);
        number /= 10;
        step++;
    }
    return dec;
}
