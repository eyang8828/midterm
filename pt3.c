#include <stdio.h>
#include <stdlib.h>
//------ POINT ----------------------------------------------------------------
typedef struct point point;

struct point { double x, y; };

//------ SQUARE -----------------------------------------------------------------
typedef struct square square;

struct square { point ul; size_t side; };

square* square_init(double ulx, double uly, double side){ // TODO
    square* sq = (square* )malloc(sizeof(square));
    sq->ul.x = ulx;
    sq->ul.y = uly;
    printf("%d",side);
    sq->side = side;
    return sq;
}

void square_delete(square* sq){ // TODO
    free(sq);
}

void square_move(square* sq, double x, double y){ // TODO
    sq->ul.x+=x;
    sq->ul.y+=y;
}

void square_expandby(square* sq, double expandby){ // TODO
    sq->side+= expandby;
}

double square_area(square* sq){ // TODO
    return sq->side*sq->side;
}

double square_perimeter(square* r){ // TODO
    return r->side*4;
}

// print location, side, area and perimeter
void square_print(const char* msg, square* sq){ // TODO

    char buf[BUFSIZ];
    sprintf(buf, "(%.1f, %.1f, %d)", sq->ul.x, sq->ul.y, sq->side);
    printf("%s%s\n", msg, buf);
}

void test_square(double ulx, double uly, double side) {
    square* sq = square_init(ulx, uly, side);
    square_print("sq is: ", sq);
    square_move(sq,2, 2);
    square_print("sq is now: ", sq);
    square_expandby(sq, 10);
    square_print("sq has expanded to: ", sq);
    square_delete(sq);
    printf("\n\n");
}
void tests_square() {
    test_square(0, 0, 10);
    test_square(1, 1, 5);
}
int main(int argc, const char* argv[]) {
    tests_square();
    return 0;
}