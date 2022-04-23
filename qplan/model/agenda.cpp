#include "agenda.h"

Agenda::Agenda()
{

}

const std::vector<List> &Agenda::getLists() const
{
    return lists;
}

void Agenda::setLists(const std::vector<List> &newLists)
{
    lists = newLists;
}
