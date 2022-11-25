#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void fill_random_nums(int nums[], int n){
    for(int i = 0; i < n; i++){
        nums[i] = 8 + rand() % 21;
    }
}

void output(int nums[], int n){
    for(int i = 0; i < n; i++){
        printf("%2d ", nums[i]);
    }
    puts("");
}



int main(){
    srand(time(0));

    int n;

    printf("n = "); scanf("%d", &n);

    int nums[n];

    fill_random_nums(nums, n);
    output(nums, n);
    select_sort(nums, n);
    output(nums, n);

    return 0;
}