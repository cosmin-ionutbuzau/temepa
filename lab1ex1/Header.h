#pragma once
#include <iostream>


struct node
{
    int data;
    node* next;
    node* prev;
};


class ldi
{
private:
    node* head;


public:
    ldi();
    void insereaza(int value, int pos);
    void afisare();
};
