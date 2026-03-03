#include <stdio.h>

    
    int add();
    int sub();
    int muilt();
    int div();


int add(){
    int a,b,sum;
     printf("Enter no. a : ");
        scanf("%d", &a);
        printf("Enter no. b : ");
        scanf("%d", &b);
        sum=a+b;
        printf("value of sum. = %d\n\n",sum);
}
int sub(){
    int c,d,sub;
     printf("Enter no. c : ");
        scanf("%d", &c);
        printf("Enter no. d : ");
        scanf("%d", &d);
        sub=c-d;
        printf("value of sub. = %d\n\n",sub);
}
int muilt(){
    int e,f,muilt;
     printf("Enter no. e : ");
        scanf("%d", &e);
        printf("Enter no. f : ");
        scanf("%d", &f);
        muilt=e*f;
        printf("value of muilti. = %d\n\n",muilt);
}
int div(){
    int g,h,div;
     printf("Enter no. g : ");
        scanf("%d", &g);
        printf("Enter no. h : ");
        scanf("%d", &h);
        div=g/h;
        printf("value of muilti. = %d\n\n",div);
}

// Calling of function
int main (){
    add();
    sub();
    muilt();
    div();

}
