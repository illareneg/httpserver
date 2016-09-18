//
//  http_protocol.hpp
//  httpserver
//
//  Created by Gen Li on 16/08/16.
//  Copyright © 2016 illareneg. All rights reserved.
//

#ifndef http_protocol_hpp
#define http_protocol_hpp

#include "message.hpp"

class protocol
{
public:
    virtual message parse_message() const = 0;
    virtual const std::string &get_name() const = 0;
    virtual ~protocol() = default;
protected:
};


#endif /* http_protocol_hpp */