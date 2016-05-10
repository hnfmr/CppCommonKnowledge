#include <iostream>

void average_v1( int ary[] )
{
  // ary
}

void average_v2( int ( &ary )[ 4 ] )
{
  // ary
}

template < size_t n >
void average_t( int ( &ary )[ n ] )
{
  // average_t
}

void process_2d( int *a, int n, int m )
{
  for ( int i = 0; i < n; ++i )
    for ( int j = 0; j < n; ++j )
      a[ i * m + j ] = 0;
}

template < int n, int m >
inline void process( int ( &ary )[ n ][ m ] )
{
  process_2d( &ary[ 0 ][ 0 ], n, m );
}

int main()
{
  int ary1[] = { 1, 2, 3 };
  int ary2[] = { 1, 2, 3, 4 };

  average_v2( ary2 );
  average_t( ary1 );
  average_t( ary2 );

  int *tmp = new int[ 4 ];
  // int *tmp = nullptr;

  delete[] tmp;

  return 0;
}