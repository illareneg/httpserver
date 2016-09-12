//
//  server.hpp
//  httpserver
//
//  Created by Gen Li on 16/08/16.
//  Copyright © 2016 illareneg. All rights reserved.
//

#ifndef server_hpp
#define server_hpp

class server
{
public:
    server();
    server(const server&) = delete;
    server(server&&) = delete;
    
    void start();
    void stop();
    
    ~server();
};

#endif /* server_hpp */