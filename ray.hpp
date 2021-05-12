//
// Created by atm on 5/12/21.
//

#ifndef RTTNW_RAY_HPP
#define RTTNW_RAY_HPP

#include "vec3.hpp"

class ray {
public:
    ray() {}
    ray(const point3& origin, const vec3& direction, double time = 0.0) : orig(origin), dir(direction), tm(time) {}

    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }
    double time() const { return tm; }

    point3 at(double t) const {
        return orig + t*dir;
    }

public:
    point3 orig;
    vec3 dir;
    double tm;
};

#endif //RTTNW_RAY_HPP
