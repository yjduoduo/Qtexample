#include <stdio.h>


/* v850 toolchain uses a `_' prefix for all user symbols */
#ifndef MODULE_SYMBOL_PREFIX
#define MODULE_SYMBOL_PREFIX ""
#endif

/* For every exported symbol, place a struct in the __ksymtab section */
#define __EXPORT_SYMBOL(sym, sec)				\
    extern typeof(sym) sym;					\
    static const char __kstrtab_##sym[]			\
    __attribute__((section("__ksymtab_strings")))		\
    = MODULE_SYMBOL_PREFIX #sym;                    	\

#define EXPORT_SYMBOL(sym)					\
    __EXPORT_SYMBOL(sym, "")


static void goodaa()
{

}
int main(void)
{
    printf("Hello World!\n");
    EXPORT_SYMBOL(goodaa);
    printf("__kstrtab_:%s\n",__kstrtab_goodaa);
    return 0;
}

