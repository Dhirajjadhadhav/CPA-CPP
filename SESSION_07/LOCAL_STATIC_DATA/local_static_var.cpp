void test(void){
    int m;
    static int n;
}


/*
    local variable:
        i) allocation time : dynamic (after call to function)
        ii) allocation strategy : per function call
        iii) lifetime: bound to function containing defination statement 
        iv) visibility : bound to a function containing defination statement
        v) allocation section in virctual address space : stack section
    
    local-static variable:
        i) allocation time: static (while bulding the exe)
        ii) allocation strategy : allocate one copy (shared amongst all the function calls)
        iii) lifetime:
        iv) visibility :
        v) allocation section in virtual address space;
*/