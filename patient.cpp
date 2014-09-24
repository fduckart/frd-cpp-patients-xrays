#include <assert.h>
#include <iostream>
#include "patient.h"

using namespace std;

// Standard constructor.
Patient::Patient(int i, const string fname, const string lname) 
{ 
    id = i;
    first_name = trim(fname);
    last_name = trim(lname);
}

// Copy constructor.  
// Make sure this doesn't get accidentally 
// called in some way.  Assert statement inside.
Patient::Patient(const Patient & p) 
{ 
    id = p.id;
    first_name = p.first_name;
    last_name = p.last_name;
    
    // Add xrays.
    list<Xray> xrs = p.getXrays();
    list<Xray>::const_iterator xi;
    for (xi = xrs.begin(); xi != xrs.end(); ++xi) {
        xrays.push_back(*xi);
    }
    
}

// Destructor.  
Patient::~Patient() 
{
    // Clean up.
    xrays.clear();
    assert(xrays.size() == 0); 
}

const string Patient::getName() const {    
    string name(first_name);
    name.append(" ");
    name.append(last_name);
    
    return name;
}

const string Patient::to_string() const {
    string s("Person [id=");
    s.append(std::to_string(id));
    s.append(", name=");
    s.append(getName());
    s.append("]");
    
    return s;
}


void Patient::addXray(Xray &xray)
{
    xrays.push_back(xray);
}

list<Xray> Patient::getXrays() const
{       
    list<Xray> lst;
    vector<Xray>::const_iterator itor;
    for (itor = xrays.begin(); itor != xrays.end(); ++itor) {
        lst.push_back(*itor);
    } 

    return lst;    
}

// Helper function to trim whitespace off ends of a string.
const string Patient::trim(const string& s)  
{
    if (s.length() == 0)
        return s;
        
    int f = s.find_first_not_of(" \t");  // Find first char.
    int e = s.find_last_not_of(" \t");   // Find ending char.
    
    if (e == -1)
        return "";  // Didn't find any chars.
        
    return string(s, f, e - f + 1);  // Trim off spaces.
}
