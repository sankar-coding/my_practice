#include <stdio.h>
int sum(int num);
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("%d \n",sum(num));
}
int sum(int num) {
    if(num==0) {
        return 0;
    }
    return num + sum(num-1);
}
