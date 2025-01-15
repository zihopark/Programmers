#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    
     answer=  (k - (n/10))*2000 + 12000*n;
    
    
    return answer;
}