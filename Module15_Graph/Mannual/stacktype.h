//
// Created by UC on 11/7/2023.
//

#ifndef MANNUAL_STACKTYPE_H
#define MANNUAL_STACKTYPE_H

class FullStack
{};
class EmptyStack
{};
template <class ItemType>
class StackType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType* topPtr;
};



#endif //MANNUAL_STACKTYPE_H
