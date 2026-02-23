#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsIsExistDevice
// Address: 0x175e38 - 0x175e58
void cvFsIsExistDevice_0x175e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsIsExistDevice");


    ctx->pc = 0x175e38u;

    // 0x175e38: 0x27bdfff0
    ctx->pc = 0x175e38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175e3c: 0xffbf0000
    ctx->pc = 0x175e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175e40: 0xc05d142
    ctx->pc = 0x175E40u;
    SET_GPR_U32(ctx, 31, 0x175E48u);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175E48u; }
        else if (ctx->pc != 0x175E48u) { ctx->pc = 0x175E48u; }
    }
    if (ctx->pc != 0x175E48u) { return; }
    ctx->pc = 0x175E48u;
    // 0x175e48: 0xdfbf0000
    ctx->pc = 0x175e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175e4c: 0x2102b
    ctx->pc = 0x175e4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x175e50: 0x3e00008
    ctx->pc = 0x175E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175E54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175E58u;
}
