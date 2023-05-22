#include <stdio.h>

float HasReturn_HasParameter(int x){
    printf("HasReturn_HasParameter er moddhe a ke print korteci: %d\n",x);
    return 2.5;
}

float HasReturn_NoParameter(){

    
}

void NoReturn_NoParameter(){
    printf("No return No parameter e cole aslam\n");
}

void NoReturn_HasParameter(int y){
    printf("Y holo: %d\n",y);
}




int main()
{
    int a=10,b=20;

    //float c = HasReturn_NoParameter(); // c=120.34

    printf("The sum is: %f\n",HasReturn_NoParameter());

    //NoReturn_NoParameter();

    NoReturn_HasParameter(b);


    return 0;
}