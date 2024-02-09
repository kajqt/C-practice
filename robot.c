#include <stdio.h>
typedef enum { Nord, Est, Sud, Ouest } Orientation;
typedef struct  {
    int x, y;
    Orientation o;
} Robot;

void init_robot(Robot *r, int x, int y, Orientation o){
    r->x = x;
    r->y = y;
    r->o = o;
}

// void init_robot2(Robot r, int x, int y, Orientation o){
//     r.x = x;
//     r.y = y;
//     r.o = o;
// }

int main(){
    Robot *r;
  
    Orientation o;
    o = Sud;
    int x = 8;
    int y = 9;
    init_robot(r, x, y, o);
    
    // r.x = x;
    // r.y = y;
    // printf("1. Robot %d  %d\n", r.x, r.y);
    // // in ra Robot 8 9
    // x = 10;
    // printf("2. Robot %d  %d\n", r.x, r.y);
    // // in ra Robot 8 9
    // int a = 11;
    // r.y = a;
    // printf("3. Robot %d  %d\n", r.x, r.y);

    // printf("4.  %d  %d", x, a);




    // z = 9;
    // printf("z = %p \n", z);
    // printf("x = %d \n", x);



    return 0;
}
