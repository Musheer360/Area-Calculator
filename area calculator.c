#include <stdio.h>

float rectangle(float a, float b);
float circle(float r);
float square(float s);
float triangle(float b, float h);
float trapezium(float lb, float ub, float h);
float sector(float t, float r);
float ellipse(float a, float b);
float cube(float a);
float cylinder(float r, float h);

int main() {

    printf("\nFor 2D Shapes - Use 'r' for rectangle, 'c' for circle, 's' for square. 't' for triangle, 'w' for trapezium, 'v' for sector, 'e' for ellipse");
    printf("\nFor 3D Shapes - Use 'q' for cube, 'y' for TSA of cylinder\n");

    printf("\nEnter shape to find the area: ");
    char shape;
    scanf("%c", &shape);
    
    if(shape == 'r') {
        float a, b;
        printf("\nCalculating the area of a rectangle\n");
        printf("\nEnter length of the rectangle: ");
        scanf("%f", &a);
        printf("\nEnter width of the rectangle: ");
        scanf("%f", &b);
        printf("\nArea of the rectangle is: %.3f Unit^2", rectangle(a, b));
    }

    else if(shape == 'c') {
        float r;
        printf("\nCalculating the area of a circle\n");
        printf("\nEnter radius of the circle: ");
        scanf("%f", &r);
        printf("\nArea of the circle is: %.3f Unit^2", circle(r));
    }
    
    else if(shape == 's') {
        float s;
        printf("\nCalculating the area of a square\n");
        printf("\nEnter side of the square: ");
        scanf("%f", &s);
        printf("\nArea of the square is: %.3f Unit^2", square(s));
    }
    
    else if(shape == 't') {
        float b, h;
        printf("\nCalculating the area of a triangle\n");
        printf("\nEnter base of the triangle: ");
        scanf("%f", &b);
        printf("\nEnter height of the triangle: ");
        scanf("%f", &h);
        printf("\nArea of the triangle is: %.3f Unit^2", triangle(b, h));
    }
    
    else if(shape == 'w') {
        float lb, ub, h;
        printf("\nCalculating the area of a trapezium\n");
        printf("\nEnter lower base of the trapezium: ");
        scanf("%f", &lb);
        printf("\nEnter upper base of the trapezium: ");
        scanf("%f", &ub);
        printf("\nEnter height of the trapezium: ");
        scanf("%f", &h);
        printf("\nArea of the trapezium is: %.3f Unit^2", trapezium(lb, ub, h));
    }
    
    else if(shape == 'v') {
        float t, r;
        printf("\nCalculating the area of a sector\n");
        printf("\nEnter the angle subtended by the sector: ");
        scanf("%f", &t);
        printf("\nEnter the radius of the sector: ");
        scanf("%f", &r);
        printf("\nArea of the sector is: %.3f Unit^2", sector(t, r));
    }

    else if(shape == 'e') {
        float a, b;
        printf("\nCalculating the area of an ellipse\n");
        printf("\nEnter the radius at minor axis: ");
        scanf("%f", &a);
        printf("\nEnter the radius at major axis: ");
        scanf("%f", &b);
        printf("\nArea of the ellipse is: %.3f Unit^2", ellipse(a, b));
    }

    else if(shape == 'q') {
        float a;
        printf("\nCalculating the surface area of a cube\n");
        printf("\nEnter the side of the cube: ");
        scanf("%f", &a);
        printf("\nSurface area of the cube is: %.3f Unit^2", cube(a));
    }

    else if(shape == 'y') {
        float r, h;
        printf("\nCalculating the total surface area of a cylinder\n");
        printf("\nEnter the radius of the cylinder: ");
        scanf("%f", &r);
        printf("\nEnter the height of the cylinder: ");
        scanf("%f", &h);
        printf("\nTotal surface area of the cylinder is: %.3f Unit^2", cylinder(r, h));
    }

    else {
        printf("\nPlease enter a valid character for the corresponding shape!\n");
        printf("Read the code comments for more information.");
    }

    return 0;
}

float rectangle(float a, float b) {
    return a * b;
}

float circle(float r) {
    return 3.1415926535 * r * r;
}

float square(float s) {
    return s * s;
}

float triangle(float b, float h) {
    return (h * b) / 2;
}

float trapezium(float lb, float ub, float h) {
    return ((lb + ub) / 2) * h;
}

float sector(float t, float r) {
    return (t / 360) * 3.1415926535 * r * r;
}

float ellipse(float a, float b) {
    return 3.1415926535 * a * b;
}

float cube(float a) {
    return 6 * (a * a);
}

float cylinder(float r, float h) {
    return 2 * 3.1415926535 * r * (r + h);
}
