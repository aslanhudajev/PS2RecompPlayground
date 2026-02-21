#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcAnimData
// Address: 0x20fa58 - 0x20fa74
void CalcAnimData_0x20fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20fa58u;

    // 0x20fa58: 0x27bdfff0
    ctx->pc = 0x20fa58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fa5c: 0xffbf0000
    ctx->pc = 0x20fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fa60: 0xc083a80
    ctx->pc = 0x20FA60u;
    SET_GPR_U32(ctx, 31, 0x20FA68u);
    ctx->pc = 0x20EA00u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAnimAngXYZVal_0x20ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FA68u; }
    }
    if (ctx->pc != 0x20FA68u) { return; }
    ctx->pc = 0x20FA68u;
    // 0x20fa68: 0xdfbf0000
    ctx->pc = 0x20fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa6c: 0x3e00008
    ctx->pc = 0x20FA6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FA74u;
}
