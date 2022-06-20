#include<stdio.h>
int main(){
    char s[] = "Hello Palash";
  
    print_reverse(s);

    return 0;
}

void print_reverse(char *s){
    if(*s != '\0'){
        print_reverse(s+1);//calling function
        printf("%c", *s);
    }
}
