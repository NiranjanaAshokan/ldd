#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL"); //*
MODULE_AUTHOR("InPyjama - Piyush"); //!.email
MODULE_DESCRIPTION("OUT FIRST DYNAMICALLY LOADABLE KERNAL MODULE"); //!

static int pyjama_module_init(void)
{
    printk("hello\n");
    return 0;
}
static void pyjama_module_exit(void)
{
    printk("Goodbye\n");
    
}
module_init(pyjama_module_init);
module_exit(pyjama_module_exit);
