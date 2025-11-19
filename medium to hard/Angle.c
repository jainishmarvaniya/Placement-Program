// WAP that finds an angle between clock hands for the provided value of Minutes and Hours. 

#include<stdio.h>
void main(){
    int h,m;

    printf("Enter a hours: ");
    scanf("%d",&h);

    printf("Enter a minutes: ");
    scanf("%d",&m);

    if(h<0 || m<0 || h>12 || m>60){
        printf("Invalid input\n");
        return;
    }

    h= h*30 + m*0.5;
    m=m*6;

    int angle= h-m;

    if(angle<0){
        angle=-angle;
    }

    // if(angle>180){
    //     angle=360-angle; // Uncomment this block if you want the smaller angle between the hands
    // }

    printf("Angle between clock hands: %d degrees\n", angle);
}