#include<iostream>
#include<set>
#include<string>
#include"employee.h"
#include"node.h"
using namespace std;

void create(point &Head)
{
    Head=new node;
    Head->next=NULL;
    return;
}
