#pragma once
template<typename C, typename P>
struct isChild{
    static const bool value = is_base_of<P, C>();  
};

template<typename C, bool>
struct condition;

template<typename C>
struct condition<C, true>{
    typedef C type;
};
