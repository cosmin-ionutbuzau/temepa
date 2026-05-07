#include "header.h"


ldi::ldi()
{
    head = nullptr;
}


void ldi::insereaza(int value, int pos)
{
    node* newnode = new node;
    newnode->data = value;
    newnode->next = nullptr;
    newnode->prev = nullptr;


    if (head == nullptr)// lista goala
    {
        head = newnode;
        return;
    }


    if (pos == 0)//poz 0
    {
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return;
    }




    node* p = head;//ins la o anumit poz
    int i = 0;


    while (i < pos - 1 && p->next != nullptr)
    {
        p = p->next;
        i++;
    }




    if (p->next != nullptr)//ins la mijloc
    {
        newnode->next = p->next;
        newnode->prev = p;
        p->next->prev = newnode;
        p->next = newnode;
    }


    else//ins la final
    {
        p->next = newnode;
        newnode->prev = p;
    }
}


void ldi::afisare()
{
    node* p = head;
    while (p != nullptr)
    {
        std::cout << p->data << " ";
        p = p->next;
    }


    std::cout << "\n";
}
