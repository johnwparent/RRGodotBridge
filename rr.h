#ifndef GODOT_RR_H
#define GODOT_RR_H

#include <RobotRaconteur.h>
#include "core/reference.h"
namespace RR
{



    template <typename T>
    class RR : public Reference
    {
        GDCLASS(RR, Reference);

    protected:
        static void _bind_methods();

    public:
        RR(T x);
        RR_SHARED_PTR<T> Call();
        void Set(T x);
    


        RR_SHARED_PTR<T> RRShare;

    };
};
#endif // GODOT_RR_H