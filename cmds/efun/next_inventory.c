#include <ansi.h>

int main(object me, string arg)
{
    object ob;

    if (!arg)
    {
        debug(next_inventory(me));
    }
    else if (ob = load_object(arg))
    {
        debug(next_inventory(ob));
    }
    else
    {
        return notify_fail(HIR "没有找到对象 " + arg + "\n" NOR);
    }

    return 1;
}
