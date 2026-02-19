#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: save_vmu_directory
// Address: 0x209f40 - 0x209fd0
void save_vmu_directory_0x209f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x209f40u;

    // 0x209f40: 0x27bdffd0
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209f44: 0xffbf0020
    ctx->pc = 0x209f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209f48: 0xffbe0010
    ctx->pc = 0x209f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x209f4c: 0x3a0f02d
    ctx->pc = 0x209f4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f50: 0xafc40000
    ctx->pc = 0x209f50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x209f54: 0xafc50004
    ctx->pc = 0x209f54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x209f58: 0x24020080
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 128));
    // 0x209f5c: 0xafc2000c
    ctx->pc = 0x209f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x209f60: 0x8fc20000
    ctx->pc = 0x209f60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209f64: 0x24030210
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x209f68: 0x431018
    ctx->pc = 0x209f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x209f6c: 0x8fc30004
    ctx->pc = 0x209f6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209f70: 0x24040084
    ctx->pc = 0x209f70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x209f74: 0x641818
    ctx->pc = 0x209f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x209f78: 0x3c040031
    ctx->pc = 0x209f78u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x209f7c: 0x24841e60
    ctx->pc = 0x209f7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x209f80: 0x641821
    ctx->pc = 0x209f80u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x209f84: 0x431021
    ctx->pc = 0x209f84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209f88: 0x8fc40000
    ctx->pc = 0x209f88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x209f8c: 0x8fc50004
    ctx->pc = 0x209f8cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x209f90: 0x2406ffff
    ctx->pc = 0x209f90u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209f94: 0x40382d
    ctx->pc = 0x209f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f98: 0x8fc8000c
    ctx->pc = 0x209f98u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x209f9c: 0xc082504
    ctx->pc = 0x209F9Cu;
    SET_GPR_U32(ctx, 31, 0x209FA4u);
    ctx->pc = 0x209410u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveSave_0x209410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FA4u; }
    }
    if (ctx->pc != 0x209FA4u) { return; }
    ctx->pc = 0x209FA4u;
    // 0x209fa4: 0xafc20008
    ctx->pc = 0x209fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x209fa8: 0x8fc30008
    ctx->pc = 0x209fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x209fac: 0x60102d
    ctx->pc = 0x209facu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fb0: 0x10000001
    ctx->pc = 0x209FB0u;
    {
        const bool branch_taken_0x209fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x209fb0) {
            ctx->pc = 0x209FB8u;
            goto label_209fb8;
        }
    }
    ctx->pc = 0x209FB8u;
label_209fb8:
    // 0x209fb8: 0x3c0e82d
    ctx->pc = 0x209fb8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209fbc: 0xdfbf0020
    ctx->pc = 0x209fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209fc0: 0xdfbe0010
    ctx->pc = 0x209fc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209fc4: 0x27bd0030
    ctx->pc = 0x209fc4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x209fc8: 0x3e00008
    ctx->pc = 0x209FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209FB8u: goto label_209fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209FD0u;
}
