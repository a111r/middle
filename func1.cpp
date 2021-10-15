#include "middle.h"

void itc_num_print(int number)
{
    cout << number;
}

int itc_len_num(long long number)
{
   int k = 0;
   if (number == 0)
      return 1;
   if (number)
      number *= -1;
   while(number > 0)
   {
    k++;
    number = (number - number % 10) / 10;
   }
   return k;
}

int itc_sum_num(long long number)
{
    int sum = 0;
    if(number < 0) number *= -1;
    while(number > 0){
        sum += number % 10;
        number = (number - number % 10) / 10;
    }
    return sum;
}

long long itc_multi_num(long long number)
{
    int sum = 0;
    if(number < 0)
        number *= -1;
    while(number > 0){
        sum += number % 10;
        number = (number - number % 10) / 10;
    }
    return sum;
}

int itc_max_num(long long number)
{
    int maxi = 0;
    if(number < 0) number *= -1;
    while(number > 0){
        if(number % 10 == 9)
            return 9;
        if(number % 10 >= maxi)
            maxi = number % 10;
        number = (number - number % 10) / 10;
    }
    return maxi;
}
