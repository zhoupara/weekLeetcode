/* ************************************************************************
 *       Filename:  list.h
 *    Description:  
 *        Version:  1.0
 *        Created:  2019年02月24日 22时10分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#ifndef _LIST_H

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode List;				//表
typedef PtrToNode Position;			//位置

List MakeEmpty( List L );
int IsEmpty( List L );
int IsLast( Position P, List L );
Position Find( ElementType X, List L );
void Delete( ElementType X, List L );
Position FindPrevious( ElementType X, List L );
void Insert( ElementType X, List L, Position P );
void DeleteList( List L );
Position Header( List L );
Position First( List L );
Position Advance( Position P );
ElementType Retrieve( Position P );

#endif /* _LIST_H */

/* Place in the implementation file */
struct Node{
	ElementType Element;
	Position Next;
};

