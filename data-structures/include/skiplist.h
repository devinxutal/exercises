/**
 * @file include/skiplist.h
 * @author  Yinfei XU
 * @date 2013/12/04 15:27:36
 * @version $Revision$ 
 * @brief 
 *  
 **/


#ifndef  __SKIPLIST_H_
#define  __SKIPLIST_H_

#define SKIPLIST_MAX_HEIGHT 12

class SkipList {
public:
    struct Node {
        int value;
        Node * next;
    };

    void Insert(int value);
    
private:
    _FindLessButNextTo(Node *node, Node *prevs);
private:
    Node *m_head;
    size_t m_height;
};
















#endif  //__SKIPLIST_H_

/* vim: set ts=4 sw=4 sts=4 tw=100 et: */
