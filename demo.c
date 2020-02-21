#include<linux/init.h>
#include<linux/module.h>

MODULE_LICENSE("GPL"); 

int hello_start(void) 
{ 
    printk(KERN_ALERT "Loading hello module...\n"); 
    printk(KERN_ALERT "Hello world\n"); 
    return 0; 
} 
  
void hello_end(void) 
{ 
    printk(KERN_ALERT "Goodbye Mr.\n"); 
    //return 0;
} 
  
module_init(hello_start); 
module_exit(hello_end); 
