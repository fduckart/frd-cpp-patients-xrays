===========

Patient Xray C++ Demonstration Application

**Overview**

The program demonstrates a simple Patient to Xray
relationship.

**Technology**

The program was developed on Apple Mac OS X using 
GNU g++ version 4.9.1 and GNU make version 3.8.1. 

Note that GNU g++ version 4.9.1 will probably need
to be installed since Apple has moved away from GNU.

**Building the Program**

    $ make all
    
**Cleaning up**

    $ make clean

**Running the program**

Here are the commands (and their output) 
that you can use to run the program:
    
    duckart:frd-cpp-patients-xrays duckart$ make all
    /usr/local/bin/g++-4.9 -g -Wall -std=c++11 -c patapp.cpp
    /usr/local/bin/g++-4.9 -llber -lldap -o patapp patapp.o patient.o xray.o
    
    duckart:frd-cpp-patients-xrays duckart$ ./patapp 
    +++++++++++++++++++++++++++++++++++++++++++++++++++++
    Person [id=0, name=Frank Duckart]
        Xray [id=100; is_bad=true]
        Xray [id=101; is_bad=false]
        Xray [id=102; is_bad=true]
    Person [id=1, name=Frank Duckart]
        Xray [id=100; is_bad=true]
        Xray [id=101; is_bad=false]
        Xray [id=102; is_bad=true]
    Person [id=2, name=Frank Duckart]
        Xray [id=100; is_bad=true]
        Xray [id=101; is_bad=false]
        Xray [id=102; is_bad=true]
    Person [id=3, name=Frank Duckart]
        Xray [id=100; is_bad=true]
        Xray [id=101; is_bad=false]
        Xray [id=102; is_bad=true]
    Person [id=4, name=Frank Duckart]
        Xray [id=100; is_bad=true]
        Xray [id=101; is_bad=false]
        Xray [id=102; is_bad=true]
