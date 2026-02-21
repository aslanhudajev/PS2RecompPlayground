#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: load_vmu_directory
// Address: 0x209ea8 - 0x209f3c
void load_vmu_directory_0x209ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209ea8u;

    // 0x209ea8: 0x27bdffd0
    ctx->pc = 0x209ea8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209eac: 0xffbf0020
    ctx->pc = 0x209eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209eb0: 0xffbe0010
    ctx->pc = 0x209eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x209eb4: 0x3a0f02d
    ctx->pc = 0x209eb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209eb8: 0xafc40000
    ctx->pc = 0x209eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x209ebc: 0xafc50004
    ctx->pc = 0x209ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x209ec0: 0x24020080
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x209ec4: 0xafc2000c
    ctx->pc = 0x209ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x209ec8: 0x8fc20000
    ctx->pc = 0x209ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209ecc: 0x24030210
    ctx->pc = 0x209eccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x209ed0: 0x431018
    ctx->pc = 0x209ed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x209ed4: 0x8fc30004
    ctx->pc = 0x209ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209ed8: 0x24040084
    ctx->pc = 0x209ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x209edc: 0x641818
    ctx->pc = 0x209edcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x209ee0: 0x3c040031
    ctx->pc = 0x209ee0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x209ee4: 0x24841e60
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x209ee8: 0x641821
    ctx->pc = 0x209ee8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x209eec: 0x431021
    ctx->pc = 0x209eecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ef0: 0x27c3000c
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 12));
    // 0x209ef4: 0x8fc40000
    ctx->pc = 0x209ef4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209ef8: 0x8fc50004
    ctx->pc = 0x209ef8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209efc: 0x2406ffff
    ctx->pc = 0x209efcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209f00: 0x40382d
    ctx->pc = 0x209f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f04: 0x60402d
    ctx->pc = 0x209f04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f08: 0xc08258e
    ctx->pc = 0x209F08u;
    SET_GPR_U32(ctx, 31, 0x209F10u);
    ctx->pc = 0x209638u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveLoad_0x209638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F10u; }
    }
    if (ctx->pc != 0x209F10u) { return; }
    ctx->pc = 0x209F10u;
    // 0x209f10: 0xafc20008
    ctx->pc = 0x209f10u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x209f14: 0x8fc30008
    ctx->pc = 0x209f14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209f18: 0x60102d
    ctx->pc = 0x209f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f1c: 0x10000001
    ctx->pc = 0x209F1Cu;
    {
        const bool branch_taken_0x209f1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209f1c) {
            ctx->pc = 0x209F24u;
            goto label_209f24;
        }
    }
    ctx->pc = 0x209F24u;
label_209f24:
    // 0x209f24: 0x3c0e82d
    ctx->pc = 0x209f24u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f28: 0xdfbf0020
    ctx->pc = 0x209f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209f2c: 0xdfbe0010
    ctx->pc = 0x209f2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209f30: 0x27bd0030
    ctx->pc = 0x209f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x209f34: 0x3e00008
    ctx->pc = 0x209F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209F24u: goto label_209f24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209F3Cu;
}
