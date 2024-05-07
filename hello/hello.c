#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual MIT/GPL");

static int __init hello_init(void)
{
	pr_alert("Hello World\n");
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("Goodbye\n");
}

module_init(hello_init);
module_exit(hello_exit);
