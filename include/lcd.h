#pragma once
#include <mbed.h>

class LCD{
  public:
    void print(const char *,int line=1);
    void printf(int, const char*,...);
    void clr();
    void init(int num=0,int cont=38);
    void write(int,int);
};
