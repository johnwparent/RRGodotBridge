#ifndef GODOT_RRMultiDimArr_H
#define GODOT_RRMultiDimArr_H

#include <RobotRaconteur.h>
//#include "core/reference.h" 
#include <boost/multiprecision/cpp_int.hpp>


namespace RR
{
    template<typename T>
    class RRMultiDimArr : public reference
    {

        int32_t DimCount;
        RobotRaconteur.RRArray 
        RR_SHARED_PTR<RRArray<int32_t> > Dims;
        RR_SHARED_PTR<RRArray<T> > Real;
        bool Complex;
        RR SHARED PTR<RRArray<T> > Imag;



    };
};



#endif // GODOT_RRMultiDimArr_H