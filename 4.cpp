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

int main()# include <bits/stdc++.h>
struct BD
{
    int Data;
    BD *Left;
    BD *Right;
    BD() : Data( 0 ), Left( NULL ), Right( NULL ) {};
};
void VsatElemT( BD*& node, int num )
{
    if( node == NULL )
    {
        node = new BD;
        node->Data = num;
        return;
    }
    if( node->Data > num )
        VsatElemT( node->Left, num );
    else
        VsatElemT( node->Right, num );
};
void ObhodvSh( BD* root )
{
   std::queue<BD*> q;              ////Обходв Ширину
   q.push( root );
   while( q.empty() == 0 )
   {
      BD* node = q.front();
      q.pop();
      std::cout << node->Data << " " ;
      if( node->Left != NULL )
        q.push( node->Left );
      if( node->Right != NULL )
        q.push( node->Right );
   }
};
int main()
{
    int N;
    BD *Tree = NULL;
    std::cin >> N;
    int num;
    for ( int i = 0; i < N; i++)
    {
        std::cin >> num;
        VsatElemT( Tree, num );
    }
    ObhodvSh(Tree);
    return 0;
}
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
