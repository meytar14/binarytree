#pragma once
#include "Node.hpp"
#include <typeinfo>
#include <stack>
using namespace std;

namespace ariel
{
    class preorderIterator
    {
    private:
        stack<Node*> s;

    public:
        preorderIterator(Node* root)
        {   
            stack<Node*> temp;
            Node* n;
            temp.push(root);
            while(!temp.empty())
            {
                n=temp.top();
                s.push(n);
                temp.pop();

                if(n->right_child)
                {
                    temp.push(n->right_child);
                }
                if(n->left_child)
                {
                    temp.push(n->left_child);
                }
            }



        }
        ~preorderIterator();
    };
}