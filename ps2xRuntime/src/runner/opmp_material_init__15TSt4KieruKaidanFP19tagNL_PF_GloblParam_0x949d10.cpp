#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

void opmp_material_init__15TSt4KieruKaidanFP19tagNL_PF_GloblParam_0x949d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("opmp_material_init__15TSt4KieruKaidanFP19tagNL_PF_GloblParam");

    const uint32_t __entryPc = ctx->pc;
    ps2_stubs::TODO_NAMED("opmp_material_init__15TSt4KieruKaidanFP19tagNL_PF_GloblParam", rdram, ctx, runtime); 
    if (ctx->pc == __entryPc)
    {
        ctx->pc = getRegU32(ctx, 31);
    }
}
