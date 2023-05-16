#include <stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>b){
        if(a>c){
            if(a>d){
                if(b>d){
                    printf("0\n");
                    return 0;
                }
                else{
                    printf("1\n");
                    return 0;
                }
            }
            else{
                printf("2\n");
                return 0;
            }
        }
        else{
            printf("3\n");
            return 0;
        }
    }
}