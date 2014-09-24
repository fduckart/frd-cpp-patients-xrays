#include <iostream>
#include "patient.h"
#include "xray.h"

using namespace std;

// Main function.
int main(int argc, char* argv[]) 
{     
    // Just load some random values.
    list<Patient> patients;
    for (int i = 0; i < 5; i++) {
        Patient patient(i, "Frank", "Duckart");        
        for (int j = 100; j < 103; j++) {
            Xray xray(j, j%2==0);
            patient.addXray(xray);
        }
        patients.push_back(patient);
    }

    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
              
    // Print out what we just loaded.
    list<Patient>::iterator itor;
    for (itor = patients.begin(); itor != patients.end(); ++itor) {
        cout << itor->to_string() << endl;
        
        list<Xray> xrays = itor->getXrays();     
        list<Xray>::iterator xi;
        for (xi = xrays.begin(); xi != xrays.end(); ++xi) {
            cout << "\t" << xi->to_string() << endl;
        }                
    }
          
    return EXIT_SUCCESS;
}

