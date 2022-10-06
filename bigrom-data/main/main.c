#include <rg_system.h>
#include <stdio.h>
#include <string.h>

static rg_app_t *app;

void app_main(void)
{
    app = rg_system_init(32000, NULL, NULL);
    while(1);
}
