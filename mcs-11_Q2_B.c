#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

findcube(int x){
    int y;
    y=x*x*x;
    printf("\n the cube of the number %d is %d ",x,y);
}

int main(){
    
    system ("cls");
    int x;
    printf("\n Enter the number");
    scanf("%d",&x);
    findcube(x);
    return 0;

}
