#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

findpower (int x, int y){
    
    int result = 1;
    for (int i=0; i<y ; i++){
        result = x*result;
    }
    printf  ("\n %d to the power %d is %d ",x,y,result);
}

int main(){
    system("cls");
    int x,y;
    printf("\n Enter the number ");
    scanf("%d",&x);
    printf("\n Enter the number to be raised ");
    scanf("%d",&y);
    findpower(x,y);
    return 0;
}
