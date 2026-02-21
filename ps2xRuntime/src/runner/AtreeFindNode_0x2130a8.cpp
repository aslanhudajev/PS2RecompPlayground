#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeFindNode
// Address: 0x2130a8 - 0x213104
void AtreeFindNode_0x2130a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2130a8u;

    // 0x2130a8: 0x27bdffe0
    ctx->pc = 0x2130a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2130ac: 0xffbf0010
    ctx->pc = 0x2130acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2130b0: 0xffb00000
    ctx->pc = 0x2130b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2130b4: 0x80802d
    ctx->pc = 0x2130b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130b8: 0xa0102d
    ctx->pc = 0x2130b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130bc: 0xc0382d
    ctx->pc = 0x2130bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130c0: 0x8e040044
    ctx->pc = 0x2130c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2130c4: 0x8e05003c
    ctx->pc = 0x2130c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2130c8: 0xc084bfe
    ctx->pc = 0x2130C8u;
    SET_GPR_U32(ctx, 31, 0x2130D0u);
    ctx->pc = 0x2130CCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindNodeIdx_0x212ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2130D0u; }
    }
    if (ctx->pc != 0x2130D0u) { return; }
    ctx->pc = 0x2130D0u;
    // 0x2130d0: 0x40282d
    ctx->pc = 0x2130d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2130d4: 0x4a00006
    ctx->pc = 0x2130D4u;
    {
        const bool branch_taken_0x2130d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2130D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 40));
        if (branch_taken_0x2130d4) {
            ctx->pc = 0x2130F0u;
            goto label_2130f0;
        }
    }
    ctx->pc = 0x2130DCu;
    // 0x2130dc: 0x8e030040
    ctx->pc = 0x2130dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2130e0: 0xa21018
    ctx->pc = 0x2130e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2130e4: 0x431021
    ctx->pc = 0x2130e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2130e8: 0x10000002
    ctx->pc = 0x2130E8u;
    {
        const bool branch_taken_0x2130e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2130ECu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x2130e8) {
            ctx->pc = 0x2130F4u;
            goto label_2130f4;
        }
    }
    ctx->pc = 0x2130F0u;
label_2130f0:
    // 0x2130f0: 0x102d
    ctx->pc = 0x2130f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2130f4:
    // 0x2130f4: 0xdfbf0010
    ctx->pc = 0x2130f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2130f8: 0xdfb00000
    ctx->pc = 0x2130f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2130fc: 0x3e00008
    ctx->pc = 0x2130FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213100u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2130F0u: goto label_2130f0;
            case 0x2130F4u: goto label_2130f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213104u;
}
