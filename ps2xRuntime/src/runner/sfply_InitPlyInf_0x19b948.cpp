#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_InitPlyInf
// Address: 0x19b948 - 0x19b988
void sfply_InitPlyInf_0x19b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_InitPlyInf");


    ctx->pc = 0x19b948u;

    // 0x19b948: 0x27bdffe0
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b94c: 0x282d
    ctx->pc = 0x19b94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b950: 0xffb00000
    ctx->pc = 0x19b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19b954: 0x24060010
    ctx->pc = 0x19b954u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    // 0x19b958: 0xffbf0010
    ctx->pc = 0x19b958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19b95c: 0xc0601e6
    ctx->pc = 0x19B95Cu;
    SET_GPR_U32(ctx, 31, 0x19B964u);
    ctx->pc = 0x19B960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B964u; }
        else if (ctx->pc != 0x19B964u) { ctx->pc = 0x19B964u; }
    }
    if (ctx->pc != 0x19B964u) { return; }
    ctx->pc = 0x19B964u;
    // 0x19b964: 0xae000010
    ctx->pc = 0x19b964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x19b968: 0xae000000
    ctx->pc = 0x19b968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x19b96c: 0xae000004
    ctx->pc = 0x19b96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x19b970: 0xae000008
    ctx->pc = 0x19b970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x19b974: 0xae00000c
    ctx->pc = 0x19b974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x19b978: 0xdfbf0010
    ctx->pc = 0x19b978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b97c: 0xdfb00000
    ctx->pc = 0x19b97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b980: 0x3e00008
    ctx->pc = 0x19B980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B988u;
}
