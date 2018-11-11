# include <bits/stdc++.h>

struct BinaryTree
{
    int Data;
    BinaryTree *Left;
    BinaryTree *Right;
    BinaryTree() : Data( 0 ), Left( NULL ), Right( NULL ) {};
};

void Insert( BinaryTree*& node, int num )
{
    if( node == NULL )
    {
        node = new BinaryTree;
        node->Data = num;
        return;
    }
    if( node->Data > num )
        {Insert( node->Left, num );}
    else
       {
           Insert( node->Right, num );
       }
};


void TraverseBFS( BinaryTree root )
{
   queue<BinaryTree>N;              ////ошибка додест 
   q.put( root );
   while( q.empty()!=0 )
   {
    BinaryTree node = q.pop();
    visit( node );
    if( node->Left != NULL )
      q.push( node->Left );
    if( node->Right != NULL )
      q.push( node->Right );
   }
};

int main()
{
    int N;
    BinaryTree *Tree = NULL;
    std::cin >> N;
    int num;
    for ( int i = 0; i < N; i++)
    {
        std::cin >> num;
        Insert( Tree, num );
    }
    TraverseBFS(Tree   );
    return 0;
}
