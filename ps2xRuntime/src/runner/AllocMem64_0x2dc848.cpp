#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AllocMem64
// Address: 0x2dc848 - 0x2dc8a4
void AllocMem64_0x2dc848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dc848u;

    // 0x2dc848: 0x27bdffe0
    ctx->pc = 0x2dc848u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc84c: 0xffbf0010
    ctx->pc = 0x2dc84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc850: 0xffb00000
    ctx->pc = 0x2dc850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc854: 0xa0802d
    ctx->pc = 0x2dc854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc858: 0xc0b4f52
    ctx->pc = 0x2DC858u;
    SET_GPR_U32(ctx, 31, 0x2DC860u);
    ctx->pc = 0x2DC85Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    ctx->pc = 0x2D3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocMem_0x2d3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC860u; }
    }
    if (ctx->pc != 0x2DC860u) { return; }
    ctx->pc = 0x2DC860u;
    // 0x2dc860: 0x40182d
    ctx->pc = 0x2dc860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc864: 0x10600006
    ctx->pc = 0x2DC864u;
    {
        const bool branch_taken_0x2dc864 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2dc864) {
            ctx->pc = 0x2DC880u;
            goto label_2dc880;
        }
    }
    ctx->pc = 0x2DC86Cu;
    // 0x2dc86c: 0x3c02ffff
    ctx->pc = 0x2dc86cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2dc870: 0x3442ffc0
    ctx->pc = 0x2dc870u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65472));
    // 0x2dc874: 0x621024
    ctx->pc = 0x2dc874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2dc878: 0x10000006
    ctx->pc = 0x2DC878u;
    {
        const bool branch_taken_0x2dc878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC87Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x2dc878) {
            ctx->pc = 0x2DC894u;
            goto label_2dc894;
        }
    }
    ctx->pc = 0x2DC880u;
label_2dc880:
    // 0x2dc880: 0x12000004
    ctx->pc = 0x2DC880u;
    {
        const bool branch_taken_0x2dc880 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2DC884u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2dc880) {
            ctx->pc = 0x2DC894u;
            goto label_2dc894;
        }
    }
    ctx->pc = 0x2DC888u;
    // 0x2dc888: 0xc0b4a34
    ctx->pc = 0x2DC888u;
    SET_GPR_U32(ctx, 31, 0x2DC890u);
    ctx->pc = 0x2DC88Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC890u; }
    }
    if (ctx->pc != 0x2DC890u) { return; }
    ctx->pc = 0x2DC890u;
    // 0x2dc890: 0x102d
    ctx->pc = 0x2dc890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc894:
    // 0x2dc894: 0xdfbf0010
    ctx->pc = 0x2dc894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc898: 0xdfb00000
    ctx->pc = 0x2dc898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc89c: 0x3e00008
    ctx->pc = 0x2DC89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC8A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DC880u: goto label_2dc880;
            case 0x2DC894u: goto label_2dc894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2DC8A4u;
}
