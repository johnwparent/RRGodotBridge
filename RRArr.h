#ifndef GODOT_RRArr_H
#define GODOT_RRArr_H


#include <RobotRaconteur.h>


namespace RR
{
    #define RR_SHARED_PTR boost::shared ptr
    template<typename T>
    class RRArr : public Reference
    {
        GDCLASS(RRArr,Reference);

        
    protected:
        static void _bind_methods();
    public:
        RRArr();

        T ptr();
        size_t Length();
        size_t Size();
        size_t ElementSize();
        T& operator[](size_t pos);
    


    };

};

#endif // GODOT_RRArr_H