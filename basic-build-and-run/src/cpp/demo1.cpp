#include <stdio.h>
#include <iostream>

#include <vector>
using namespace std;

int n=10;

class Apple{
public:
Apple(){name="empty";}
Apple(string param_name):name{param_name}{}

string name;
};