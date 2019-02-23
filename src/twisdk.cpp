//
//  twisdkpp.cpp
//  twisdkpp
//
//  Created by Paul Ciarlo on 2/23/19.
//  Copyright © 2019 Paul Ciarlo. All rights reserved.
//

#include <iostream>
#include "twisdk.hpp"
#include "twisdkPriv.hpp"

void twisdkpp::HelloWorld(const char * s)
{
    twisdkppPriv *theObj = new twisdkppPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void twisdkppPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

