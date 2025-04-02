
int  main(){
    //so in cpp when we free memory by delete or free or delete[] there is a little difference 
    

    //we use free only for calloc malloc allocations 
    // delete for new allocations 

    //and delete[] for new[] allocation like arrays
    //if we delete a array memory by delete only then only the first pointer will be deleted or  the program might crash

    int *ar=new int[10];
    delete[] ar;
    
    int *arr=new int;
    delete arr;

    return 0;
}