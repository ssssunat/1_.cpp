# include <bits/stdc++.h>
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
void ObhodvSh( BD* root )            ////Обход в Ширину
{
   std::queue<BD*> q;      /////////   Используем очередь в которой хранятся вершины.
   q.push( root );                 ////если очередь непуста извлекается вершина
   while( q.empty() == 0 )         
   {
      BD* node = q.front();
      q.pop();
      std::cout << node->Data << " " ;
      if( node->Left != NULL )
        q.push( node->Left );                     /////В очередь добовляются  дочерние. 
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
