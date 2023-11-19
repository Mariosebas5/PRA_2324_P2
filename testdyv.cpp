#include <iostream>
#include <vector>
#include "dyv.h"

int main(){

    std::vector<int>a{4,6,3,9,8,5,2};
    std::cout<< "Busqueda binaria int" << BusquedaBinaria(3,a,0,6)<<"n";
    std::vector<int>b{7,12,3,1,15,2,10};
    std::cout<< "Busqueda binaria invertida int" << BusquedaBinaria(12,b,0,6)<<"n";
    std::vector<int>c{13,1,7,18,2,5};
    std::cout<< "Busqueda binaria int" << BusquedaBinaria(1,c,0,5)<<"n";
    
    	QuickSort(c, 0, 5);
	QuickSortINI(b, 0, 6);
	QuickSortMED(a, 0, 6);
	
	for(int i = 0; i < 6; i++){
		std::cout<<c[i]<<" ";
	}
       
		std::cout<<std::endl;

	for(int i = 0; i < 7; i++){
		std::cout<<b[i]<<" ";
	}
       
	        std::cout<<std::endl;
	
	for(int i = 0; i < 7; i++){
		std::cout<<a[i]<<" ";
	}
	return 0;
}





      
        

