//
// Created by atm on 5/12/21.
//

#ifndef RTTNW_RTW_STB_IMAGE_HPP
#define RTTNW_RTW_STB_IMAGE_HPP

// Disable pedantic warnings for this external library.
#ifdef _MSC_VER
    // Microsoft Visual C++ Compiler
    #pragma warning (push, 0)
#endif

#define STB_IMAGE_IMPLEMENTATION
#include "external/stb_image.h"

// Restore warning levels.
#ifdef _MSC_VER
    // Microsoft Visual C++ Compiler
    #pragma warning (pop)
#endif

#endif //RTTNW_RTW_STB_IMAGE_HPP
