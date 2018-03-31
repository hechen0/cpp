#include <stdio.h>
#include <string.h>

int main(){
    int lines;
    scanf("%d", &lines);
    int i;
    char res[100] = "";
    for(i=0;i<lines;i++){
        int feet;
        scanf("%d", &feet);
        char tmp[10];
        if((feet % 2) != 0){
            sprintf(tmp,"0 0\n");
            strcat(res, tmp);
        }else if((feet % 4) == 0 ){
            sprintf(tmp,"%d %d\n", feet / 4, feet/2);
            strcat(res, tmp);
        }else{
            sprintf(res,"%d %d\n", (feet / 4)+1, feet/2);
            strcat(res, tmp);
        }
    }
    printf("%s",res);
}

