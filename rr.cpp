#include "rr.h"

#include <RobotRaconteur.h>

RR:RR(T x)
{
    RRShare = RR_MAKE_SHARED<T>(x);
}

RR_SHARED_PTR<T> RR::Call()
{
    return RRShare;
}

void RR::Set(T x)
{
    RRShare = RR_MAKE_SHARED<T>(x);
}