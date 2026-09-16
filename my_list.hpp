#include<iostream>
using namespace std;

template<typename T>
class my_list
{
    public:
        struct NodeBase
        {
            NodeBase *prev;
            NodeBase *next;
        };

        struct Node:public NodeBase
        {
            T value;
        };
        
        class iterator
        {
            private:
                int pos;
            public:
                iterator operator++() const;
                iterator operator--() const;
                T& operator*();
                bool operator==() const;
                bool operator!=() const;
        }

        iterator insert(iterator &it,T &val); //在这里，iterator 和 iterator&的区别是什么？
        iterator erase(iterator &it);
        iterator begin() const;
        iteraror end() const;
        void push_back();
        void push_front();
        bool erase(T &val);
        int size() const;
        bool empty() const;
        
    private:
        NodeBase *sentinel;
        int size;
};
