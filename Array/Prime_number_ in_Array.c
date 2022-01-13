#include <stdio.h>
int main(){
int num[9] = {1, 23, 10, 15, 17, 21, 44, 43, 53};
int i, j;

for(i = 0; i<9; i++){
    if(num[i] > 1){
    int counter = 0;
    for(j = 2; j<num[i]; j++){
        if(num[i] % j == 0){
            counter++; //count = 1;
            break;
        }
    }
    if(counter == 0){
        printf("%d is a prime, index: %d\n", num[i], i);//prime with index
    }

    }
}

return 0;
}
