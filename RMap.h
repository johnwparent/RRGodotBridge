#ifndef GODOT_RMap_H
#define GODOT_RMap_H


#include <RobotRaconteur.h>
#define RR_SHARED_PTR boost::shared ptr
namespace RR
{


    

    /// <summary>
    /// RR map module Godot wrapper
    /// </summary>
    template <typename K, typename T>
    class RMap {


    protected:
        static void _bind_methods();

    public:
        RMap();
        RMap(std::map<K,RR_SHARED_PTR<T> >mapin)
    

    };
};
#endif // GODOT_RMap_H