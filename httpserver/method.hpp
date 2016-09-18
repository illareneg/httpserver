//
//  method.hpp
//  httpserver
//
//  Created by Gen Li on 12/09/16.
//  Copyright © 2016 illareneg. All rights reserved.
//

#ifndef method_hpp
#define method_hpp

#include "message.hpp"

class method
{
public:
    virtual response perform(const request&) const = 0;
};

#endif /* method_hpp */
