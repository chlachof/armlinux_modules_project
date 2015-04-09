/*
 * MGroupMember.cpp
 *
 *  Created on: 2015-4-2
 *      Author: root
 */

#include "MGroupMember.h"

MGroupMember::MGroupMember (const char * pchName)
{
    // TODO Auto-generated constructor stub
}

MGroupMember::~MGroupMember ()
{
    // TODO Auto-generated destructor stub
}

unsigned long MGroupMember::ReName (const char * pchName)
{
    return RET_OK;
}

unsigned long MGroupMember::AddToGroupAsSon (ST_MEMBER_NODE * pstFather)
{
    return RET_OK;
}

unsigned long MGroupMember::AddToGroupAsBrother (ST_MEMBER_NODE * pstBrother)
{
    return RET_OK;
}

unsigned long MGroupMember::DelFromGroup (ST_MEMBER_NODE * pstNode)
{
    return RET_OK;
}
