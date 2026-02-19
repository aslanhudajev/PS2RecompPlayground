#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ActivateNearestEnemy
// Address: 0x254758 - 0x2547b4
void ActivateNearestEnemy_0x254758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x254758u;

    // 0x254758: 0x27bdffe0
    ctx->pc = 0x254758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25475c: 0xffbf0010
    ctx->pc = 0x25475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254760: 0x3c014120
    ctx->pc = 0x254760u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x254764: 0x44816000
    ctx->pc = 0x254764u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x254768: 0x24050004
    ctx->pc = 0x254768u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x25476c: 0x3a0302d
    ctx->pc = 0x25476cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254770: 0xc095164
    ctx->pc = 0x254770u;
    SET_GPR_U32(ctx, 31, 0x254778u);
    ctx->pc = 0x254774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x254590u;
    {
        const uint32_t __entryPc = ctx->pc;
        find_closest_item_0x254590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254778u; }
    }
    if (ctx->pc != 0x254778u) { return; }
    ctx->pc = 0x254778u;
    // 0x254778: 0x40182d
    ctx->pc = 0x254778u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25477c: 0x1060000a
    ctx->pc = 0x25477Cu;
    {
        const bool branch_taken_0x25477c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x254780u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x25477c) {
            ctx->pc = 0x2547A8u;
            goto label_2547a8;
        }
    }
    ctx->pc = 0x254784u;
    // 0x254784: 0x3c014120
    ctx->pc = 0x254784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x254788: 0x44810000
    ctx->pc = 0x254788u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x25478c: 0x46000834
    ctx->pc = 0x25478cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x254790: 0x0
    ctx->pc = 0x254790u;
    // NOP
    // 0x254794: 0x45000005
    ctx->pc = 0x254794u;
    {
        const bool branch_taken_0x254794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x254798u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x254794) {
            ctx->pc = 0x2547ACu;
            goto label_2547ac;
        }
    }
    ctx->pc = 0x25479Cu;
    // 0x25479c: 0x8c6200f8
    ctx->pc = 0x25479cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 248)));
    // 0x2547a0: 0x34420001
    ctx->pc = 0x2547a0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x2547a4: 0xac6200f8
    ctx->pc = 0x2547a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
label_2547a8:
    // 0x2547a8: 0xdfbf0010
    ctx->pc = 0x2547a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2547ac:
    // 0x2547ac: 0x3e00008
    ctx->pc = 0x2547ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2547B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2547A8u: goto label_2547a8;
            case 0x2547ACu: goto label_2547ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2547B4u;
}
