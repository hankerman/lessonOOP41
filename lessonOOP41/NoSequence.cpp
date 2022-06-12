#include "NoSequence.h"

bool NoSequence::operator()(int el)
{
    if (init)
    {
        bool result{ prevEl != el };
        if (result)
        {
            prevEl = el;
        }
        return result;
    }
    init = true;
    prevEl = el;
    return true;
}

