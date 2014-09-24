#ifndef FRD_PATIENT_H
#define FRD_PATIENT_H

#include <list>
#include <sstream>
#include <string>
#include <vector>
#include "xray.h"

using namespace std;

class Patient {
    public:
        Patient(int, const string, const string); 
        Patient(const Patient &);
        ~Patient();

        const string getName() const;
        list<Xray> getXrays() const;
        void addXray(Xray &xray);
        const string to_string() const;

    private:
        long id;
        string first_name;
        string last_name;
        vector<Xray> xrays;
        
        const string trim(const string&);        
};

#endif
