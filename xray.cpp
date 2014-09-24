#include <assert.h>
#include <iostream>
#include "xray.h"

using namespace std;

// Standard constructor.
Xray::Xray(int i, bool isBad) 
{ 
    id = i;
    is_bad = isBad;
}

// Copy constructor.  
// Make sure this doesn't get accidentally 
// called in some way.  Assert statement inside.
Xray::Xray(const Xray & x) 
{ 
    id = x.id;
    is_bad = x.is_bad;
}

// Destructor.  
Xray::~Xray() 
{
    // Clean up.
}

bool Xray::isBad() {
    return is_bad;
}

string Xray::to_string() {
    string s("Xray [");
    s.append("id=");
    s.append(std::to_string(id));
    s.append("; ");
    s.append("is_bad=");
    s.append(isBad() == true ? "true" : "false");
    s.append("]");
    return s;
}
