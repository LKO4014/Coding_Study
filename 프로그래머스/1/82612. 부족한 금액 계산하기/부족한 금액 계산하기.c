#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long total = 0;
    
    for(int i=1; i<=count; i++){
        total+=i*price;
    }
    if(total>money){
        answer = total-money;
    }
    else{
        answer=0;
    }
    return answer;
}