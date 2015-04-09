/*
 * MGroupMember.h
 *
 *  Created on: 2015-4-2
 *      Author: root
 */
#ifndef MGROUPMEMBER_H_
#define MGROUPMEMBER_H_

#include "MUI.h"

struct ST_MEMBER_NODE
{
    unsigned long       m_ulID;             //节点编号
    unsigned long       m_ulState;          //节点状态
    QString             m_stText;           //显示内容
    ST_MEMBER_NODE *    m_pstFather;        //父节点
    ST_MEMBER_NODE *    m_pstBrother;       //兄弟节点
    ST_MEMBER_NODE *    m_pstSon;           //子节点
};                                               //半双向二叉树链表


class MGroupMember
{
public:
    MGroupMember (unsigned long ulState, const char * pchName);
    virtual ~MGroupMember ();

private:
    struct  ST_MEMBER_NODE * m_pstHead;

public:
    unsigned long SetState (unsigned long ulID, unsigned long ulState);
    unsigned long SetText (unsigned long ulID, const char * pchName);
    unsigned long AddToGroupAsSon (unsigned long ulID, const char * pchName);
    unsigned long AddToGroupAsBrother (unsigned long ulID, const char * pchName);
private:
    struct  ST_MEMBER_NODE * GetformGroup(unsigned long ulID);
};

#endif /* MGROUPMEMBER_H_ */
