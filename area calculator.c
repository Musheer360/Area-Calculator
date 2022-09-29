#include <stdio.h>

int main() {

char ch;
char shape;
float result;
float a, b, r, s, bt, ht, w, lb, ub, htt, th, rs, ae, be, qb, rc, hc;

print:
    printf("For 2D Shapes:\nUse 'r' for rectangle,\nUse 'c' for circle,\nUse 's' for square\nUse 't' for triangle,\nUse 'w' for trapezium,\nUse 'v' for sector,\nUse 'e' for ellipse");
    printf("\n\nFor 3D Shapes:\nUse 'q' for cube,\nUse 'y' for TSA of cylinder\n");

    printf("\nEnter shape to find the area: ");
    scanf("%s", &shape);

    switch(shape) {
        case 'r' :
        printf("\nCalculating the area of a rectangle\n");
        printf("\nEnter length of the rectangle: ");
        scanf("%f", &a);
        printf("\nEnter width of the rectangle: ");
        scanf("%f", &b);
        result = a * b;
        printf("\nArea of the rectangle is: %.3f Unit^2", result);
                break;
        
        case 'c' :
        printf("\nCalculating the area of a circle\n");
        printf("\nEnter radius of the circle: ");
        scanf("%f", &r);
        result = 3.1415926535 * r * r;
        printf("\nArea of the circle is: %.3f Unit^2", result);
                break;
        
        case 's' :
        printf("\nCalculating the area of a square\n");
        printf("\nEnter side of the square: ");
        scanf("%f", &s);
        result = s * s;
        printf("\nArea of the square is: %.3f Unit^2", result);
                break;
        
        case 't' :
        printf("\nCalculating the area of a triangle\n");
        printf("\nEnter base of the triangle: ");
        scanf("%f", &bt);
        printf("\nEnter height of the triangle: ");
        scanf("%f", &ht);
        result = (ht * bt) / 2;
        printf("\nArea of the triangle is: %.3f Unit^2", result);
                break;
        
        case 'w' :
        printf("\nCalculating the area of a trapezium\n");
        printf("\nEnter lower base of the trapezium: ");
        scanf("%f", &lb);
        printf("\nEnter upper base of the trapezium: ");
        scanf("%f", &ub);
        printf("\nEnter height of the trapezium: ");
        scanf("%f", &htt);
        result = ((lb + ub) / 2) * htt;
        printf("\nArea of the trapezium is: %.3f Unit^2", result);
                break;
        
        case 'v' :
        printf("\nCalculating the area of a sector\n");
        printf("\nEnter the angle subtended by the sector: ");
        scanf("%f", &th);
        printf("\nEnter the radius of the sector: ");
        scanf("%f", &rs);
        result = (th / 360) * 3.1415926535 * rs * rs;
        printf("\nArea of the sector is: %.3f Unit^2", result);
                break;
        
        case 'e' :
        printf("\nCalculating the area of an ellipse\n");
        printf("\nEnter the radius at minor axis: ");
        scanf("%f", &ae);
        printf("\nEnter the radius at major axis: ");
        scanf("%f", &be);
        result = 3.1415926535 * ae * be;
        printf("\nArea of the ellipse is: %.3f Unit^2", result);
                break;

        case 'q' :
        printf("\nCalculating the surface area of a cube\n");
        printf("\nEnter the side of the cube: ");
        scanf("%f", &qb);
        result = 6 * (qb * qb);
        printf("\nSurface area of the cube is: %.3f Unit^2", result);
                break;

        case 'y' :
        printf("\nCalculating the total surface area of a cylinder\n");
        printf("\nEnter the radius of the cylinder: ");
        scanf("%f", &rc);
        printf("\nEnter the height of the cylinder: ");
        scanf("%f", &hc);
        result = 2 * 3.1415926535 * rc * (rc + hc);
        printf("\nTotal surface area of the cylinder is: %.3f Unit^2", result);
                break;
        
        default : printf("\nPlease enter a valid character for the corresponding shape!");
    }

again:
    printf ("\n\nDo you want to repeat the operation? (Y/N) ");
    scanf (" %c", &ch);

    if(ch == 'y' || ch == 'Y') {
        goto print;
    }
    
    else if(ch == 'n' || ch == 'N') {
        printf("\nExiting the program...\n");
        printf("\nDone!\n\n");
    }
    
    else {
        printf("\nPlease enter Yes or No!");
        goto again;
    }

    return 0;
}
