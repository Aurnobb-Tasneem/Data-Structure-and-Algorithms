//
// Created by UC on 11/7/2023.
//

#ifndef MANNUAL_QUETYPE_H
#define MANNUAL_QUETYPE_H
class FullQueue
{};
class EmptyQueue
{};
template <class ItemType>
class QueType
{
    struct NodeType
    {
        ItemType info;
        NodeType* next;
    };
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType *front, *rear;
};
#endif //MANNUAL_QUETYPE_H
