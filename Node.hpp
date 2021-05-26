#pragma once
#include <typeinfo>
using namespace std;

namespace ariel
{
    template<typename T> class Node
    {
    private:
        Node* left_child;
        Node* right_child;
        T info;

    public:
        Node(T i)
        {
            left_child=right_child=nullptr;
            info=i;
        }
        Node* get_left()
        {
            return left_child;
        }
        Node* get_right()
        {
            return right_child;
        }
        T get_info()
        {
            return info;
        }
        void set_info(T i)
        {
            info=i;
        }
        void set_left(Node* n)
        {
            left_child=n;
        }
        void set_right(Node* n)
        {
            right_child=n;
        }
        ~Node()
        {
            if(left_child!=nullptr)
            {
                delete(left_child);
            } 
            if(right_child!=nullptr)
            {
                delete(right_child);
            }
        }

        int size();

        friend std::ostream& operator<<(ostream& output,const Node<T>& b);

    };
    
   
    
}