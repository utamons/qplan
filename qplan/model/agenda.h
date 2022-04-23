#ifndef AGENDA_H
#define AGENDA_H
#include "list.h"


class Agenda
{
public:
    Agenda();
private:
    std::vector<List> lists;
};

#endif // AGENDA_H
