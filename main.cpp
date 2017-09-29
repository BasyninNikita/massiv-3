#include <iostream>
#include <sstream>
using namespace std ;
bool read_massive(int array[10])
{
    string string; 
    getline( cin, string );
    istringstream stream( string );
    bool success = true;
    for( int i = 0; i < 10; ++i ) {
        if( !( stream >> array[ i ] ) ) {
           success = false;
           break;
        }
    }
   
   return success;
}
int main()
{
    int array1[10];
    int array2[10];
    if(read_massive(array1) && read_massive(array2))
    {
        int max=array1[0]+array2[0];
        for (int i = 0; i<10; i++) {
            for (int j = 0; j<=i; j++) {
                if( (array2[i]+array1[j]) > max) max = array2[i]+array1[j];  
                }
            }
        cout<<max;
   }
