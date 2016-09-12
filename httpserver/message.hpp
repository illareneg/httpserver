//
//  message.hpp
//  httpserver
//
//  Created by Gen Li on 16/08/16.
//  Copyright © 2016 illareneg. All rights reserved.
//

#ifndef message_hpp
#define message_hpp

#include <set>
#include <string>
#include <utility>

class message_header
{
public:
    message_header(const std::string&);
    virtual const std::string &get_name() const = 0;
    virtual ~message_header() = default;
};

class message_body
{
};

class message
{
public:
    
protected:
    std::set<message_header> headers;
};

class request : public message
{
protected:
};

class response : public message
{
protected:
};

#endif /* message_hpp */