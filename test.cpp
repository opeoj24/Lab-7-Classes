/**
 * test.cpp
 *
 * EECS 183
 * Lab 7
 *
 * <#Name#>
 * <#uniqname#>
 *
 * <#Description#>
 */

#include <iostream>
#include <fstream>
using namespace std;

#include "Point.h"

void test_Point();

int main() {
    test_Point();

    return 0;
}

void test_Point() {
    Point pt1;
    pt1.setX(15);
    cout << "Expected: (15,0), actual: " << pt1 << endl;
    
    pt1.setY(15);
    cout << "Expected: (15,15), actual: " << pt1 << endl;
        
    ifstream input_file;
    input_file.open("data1.txt");
    pt1.read(input_file);
    cout << "Expected: (42,7), actual: " << pt1 << endl;
  
    Point pt2;
    cout << "Expected: (0,0), actual: " << pt2 << endl;
        
    Point pt3(12,7);
    cout << "Expected: (12,7), actual: " << pt3 << endl;
    
    
    cout << "Expected: (42,7), actual: " << "(" << pt1.getX() << "," << pt1.getY() << ")" << endl;
    
    Point pt4(-70,0);
    cout << pt4;
    return;
}
