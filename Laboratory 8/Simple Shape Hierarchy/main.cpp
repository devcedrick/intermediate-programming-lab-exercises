#include <iostream>
#include "circle.h"
#include "cylinder.h"

using namespace std;

int main()
{
    cout << "CIRCLE" << endl;
    circle cc;
    cc.setRadius(5);
    cc.print();

    cout << "\nCYLINDER" << endl;
    cylinder cy;
    cy.setRadius(5);
    cy.setHeight(5);
    cy.print();
}
