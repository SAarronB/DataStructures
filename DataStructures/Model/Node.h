//
//  Node.h
//  DataStructures
//
//  Created by Bonilla, Sean on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Nodee_hpp

#include <assert.h>

template <class Type>
class Node{
private:
    Type data;
public:
    Node(Type data);
    Type getData();
    void setDat(Type data);
    
};

#endif /* Nodee_h */
