#include <linux/module.h>
#include <linux/init.h>

/*Meta Information*/

MODULE_LICENSE("GPL");
MODULE_AUTHOR ("Abungo GNU/Linux");
MODULE_DESCRIPTION("A hello world LKM");

/*
This function is called, when the module is loaded into the kernet
*/
static int __init ModuleInit(void){
	printk("Hello, Kernel\n");
	return 0;
}
/*
@brief This function is called, when the module is removed from the kernel
*/
static void __exit ModuleExit(void){
	printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
