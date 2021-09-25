#include<stdio.h>
#include<math.h>
void main();
void pn(){
    float a;
    printf("Enter number:");
    scanf("%.3f",&a);
    if(a<0){printf("Number is negative");}
    else if(a>0){printf("Number is Positive");}
    else{printf("Number is neither positive nor negative");}
}
void eo(){
    int a;
    printf("Enter number:");
    scanf("%.3f",&a);
    if(a%2==0){printf("Number is Even");}
    else{printf("Number is Odd");}
}
void sq(){
    float a;
    printf("Enter number:");
    scanf("%.3f",&a);
    printf("Square of number=%.3f",a*a);
}
void sqroot(){
    float a;
    printf("Enter number:");
    scanf("%.3f",&a);
    printf("Square Root of number=%.3f",sqrt(a));
}
void choice(){
    char c;
    printf("Want to Go back to Menu[y/n]:");
    scanf("%c",c);
    if(c=='y'){
        main();
        }
    else{printf("Bye");}
}
void main(){
    char x;
    printf("Select any option\n(a):Check number even or odd.\n(b):Check number is positive or negative.\n(c):Printing square of the number.\n(d):Print square root of number.\nEnter your choice:");
    scanf("%s",&x);
    switch(x){
        case'a':eo();break;
        case'b':pn();break;
        case'c':sq();break;
        case'd':sqroot();break;
        default:printf("Invalid input");
    }
}
