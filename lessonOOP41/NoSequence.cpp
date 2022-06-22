#include "NoSequence.h"

NoSequence::NoSequence(int N)
{
    init = false;
    prevEl = 0;
    this->N = N;
    cont = 0;
}

bool NoSequence::operator()(int el)
{
    if (cont == 1) {
        if (init)
        {
            bool result{ prevEl != el };
            if (result)
            {
                prevEl = el;
                cont++;
            }
            return result;

        }
        init = true;
        prevEl = el;
        return true;
    }
    else if (cont == N) {
        cont = 1;
    }
    else {
        cont++;
    }
    return false;
}

