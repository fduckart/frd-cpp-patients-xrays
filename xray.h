#ifndef FRD_XRAY_H
#define FRD_XRAY_H

#include <string>

using namespace std;

class Xray {
    public:
        Xray(int, bool); 
        Xray(const Xray &);
        ~Xray();
      
        bool isBad();
        string to_string();
        
    private:  
        int id;
        bool is_bad;
        
};

#endif
