using namespace std;
#include <fstream>
#include <assert.h>
#include <iostream>

union IpAdress {
    uint32_t adress;
    char octets[4];
};

struct Time {
    int hh;
    int mm;
    int ss;
};

struct Log {
    char name[16];
    IpAdress ip;
    Time time;
};


int main()
{

}