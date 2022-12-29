#include <iostream>
using namespace std;

int main() {

char ch;
char shape;
float result;
float a, b, r, s, bt, ht, w, lb, ub, htt, th, rs, ae, be, qb, rc, hc;

print:
    cout << "For 2D Shapes:\nUse 'r' for rectangle,\nUse 'c' for circle,\nUse 's' for square\nUse 't' for triangle,\nUse 'w' for trapezium,\nUse 'v' for sector,\nUse 'e' for ellipse";
    cout << "\n\nFor 3D Shapes:\nUse 'q' for cube,\nUse 'y' for TSA of cylinder\n";

    cout << "\nEnter shape to find the area: ";
    cin >> shape;

    switch(shape) {
        case 'r' :
        cout << "\nCalculating the area of a rectangle\n";
        cout << "\nEnter length of the rectangle: ";
        cin >> a;
        cout << "\nEnter width of the rectangle: ";
        cin >> b;
        result = a * b;
        cout << "\nArea of the rectangle is: " <<   result << " Unit^2";
        break;
    
        case 'c' :
        cout << "\nCalculating the area of a circle\n";
        cout << "\nEnter radius of the circle: ";
        cin >> r;
        result = 3.1415926535 * r * r;
        cout << "\nArea of the circle is: " <<  result << " Unit^2";
        break;
    
        case 's' :
        cout << "\nCalculating the area of a square\n";
        cout << "\nEnter side of the square: ";
        cin >> s;
        result = s * s;
        cout << "\nArea of the square is: " <<  result << " Unit^2";
        break;
    
        case 't' :
        cout << "\nCalculating the area of a triangle\n";
        cout << "\nEnter base of the triangle: ";
        cin >> bt;
        cout << "\nEnter height of the triangle: ";
        cin >> ht;
        result = (ht * bt) / 2;
        cout << "\nArea of the triangle is: " <<    result << " Unit^2";
        break;
    
        case 'w' :
        cout << "\nCalculating the area of a trapezium\n";
        cout << "\nEnter lower base of the trapezium: ";
        cin >> lb;
        cout << "\nEnter upper base of the trapezium: ";
        cin >> ub;
        cout << "\nEnter height of the trapezium: ";
        cin >> htt;
        result = ((lb + ub) / 2) * htt;
        cout << "\nArea of the trapezium is: " <<   result << " Unit^2";
        break;

        case 'v' :
        cout << "\nCalculating the area of a sector\n";
        cout << "\nEnter the angle subtended by the sector: ";
        cin >> th;
        cout << "\nEnter the radius of the sector: ";
        cin >> rs;
        result = (th / 360) * 3.1415926535 * rs * rs;
        cout << "\nArea of the sector is: " <<  result << " Unit^2";
        break;

        case 'e' :
        cout << "\nCalculating the area of an ellipse\n";
        cout << "\nEnter the radius at minor axis: ";
        cin >> ae;
        cout << "\nEnter the radius at major axis: ";
        cin >> be;
        result = 3.1415926535 * ae * be;
        cout << "\nArea of the ellipse is: " <<     result << " Unit^2";
        break;

        case 'q' :
        cout << "\nCalculating the surface area of a cube\n";
        cout << "\nEnter the side of the cube: ";
        cin >> qb;
        result = 6 * (qb * qb);
        cout << "\nArea of the cube is: " <<    result << " Unit^2";
        break;

        case 'y' :
        cout << "\nCalculating the total surface area of a cylinder\n";
        cout << "\nEnter the radius of the cylinder: ";
        cin >> rc;
        cout << "\nEnter the height of the cylinder: ";
        cin >> hc;
        result = 2 * 3.1415926535 * rc * (rc + hc);
        cout << "\nTotal surface area of the cylinder is: " <<  result << " Unit^2";
        break;

    default : cout << "\nPlease enter a valid character for the corresponding shape!";

}

again:
    cout << "\n\nDo you want to repeat the operation? (Y/N) ";
    cin >> ch;
    if(ch == 'y' || ch == 'Y') {
    goto print;
    }

    else if(ch == 'n' || ch == 'N') {
    cout << "\nExiting the program...\n";
    cout << "\nDone!\n\n";
    }

    else {
    cout << "\nPlease enter Yes or No!";
    goto again;
    }

    return 0;
    
}
