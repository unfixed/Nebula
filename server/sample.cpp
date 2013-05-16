#include <iostream>
#include <stack>
#include "fleet.h"
#include "starsystem.h"

using namespace std;

int main () {

int x=10;
int y=20;
int id=0;
int ownerid=89;

StarSystem testStarSystem(id,"My New StarSystem",0,x,y,ownerid);
cout << "Creating StarSystem Object..." << endl
<< "Name:      " << testStarSystem.getName() << endl
<< "ID:        " << testStarSystem.getID() << endl
<< "Resources: " << testStarSystem.getResources() << endl;
testStarSystem.getLocation(x,y);
cout << "Location_x:" << x << endl
<< "Location_y:" << y << endl
<< "Owner:     " << testStarSystem.getOwner() << endl
<< endl;

x=0;
y=0;
testStarSystem.getLocation(x,y);

Fleet testFleet(id,"My New Fleet",0,x,y,ownerid);
cout << "Creating Fleet Object..." << endl
<< "Name:      " << testFleet.getName() << endl
<< "ID:        " << testFleet.getID() << endl
<< "Resources: " << testFleet.getSize() << endl;
testFleet.getLocation(x,y);
cout << "Location_x:" << x << endl
<< "Location_y:" << y << endl
<< "Owner:     " << testFleet.getOwner() << endl
<< endl;

return 0;
}
