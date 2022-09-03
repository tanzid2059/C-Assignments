#include <stdio.h>
#include <string.h>

#define string_limit 100

void swap_letter(char *letter1, char* letter2){
    char temp_letter = *letter1;
    *letter1 = *letter2;
    *letter2 = temp_letter;
}

int main() {
    
    char str[string_limit];
    scanf("%s", &str);
    
    int strSize = strlen(str);
    
    for(int i=0, j=strSize-1; i<(strSize/2); i++,j--){
        swap_letter(&str[i], &str[j]);
    }
    
    printf("%s", str);
    
    return 0;
}
