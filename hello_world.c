#include <stdio.h>
#include <math.h>


int add_together(int x, int y){
    int result = x + y;
    return result;
}

// Bonus "Hello World" from function
void hello_world(int n){
    for(int i = 0; i < n; i++){
        puts("Hello World!");
    }
}

typedef struct {
    float x;
    float y;
} point;

int main(int argc, char** argv) {
    puts("Hello, world!");

    int added = add_together(21, 21);

    point p;
    p.x = 0.1;
    p.y = 11.0;

    float length = sqrt(p.x * p.x + p.y * p.y);

    // Bonus - For loop HW 5 times
    for(int i = 0; i < 5; i++){
        puts("Hello World!");
    }

    // Bonus - While loop HW 5 times
    int i = 0;
    while(i < 5){
        puts("Hello World!");
        i++;
    }

    hello_world(10);

    return 0;
}
