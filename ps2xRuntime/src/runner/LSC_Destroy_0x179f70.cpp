#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Destroy
// Address: 0x179f70 - 0x179fc0
void LSC_Destroy_0x179f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Destroy");


    ctx->pc = 0x179f70u;

    // 0x179f70: 0x27bdffd0
    ctx->pc = 0x179f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179f74: 0xffb00010
    ctx->pc = 0x179f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179f78: 0x80802d
    ctx->pc = 0x179f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f7c: 0x1200000c
    ctx->pc = 0x179F7Cu;
    {
        const bool branch_taken_0x179f7c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x179F80u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        if (branch_taken_0x179f7c) {
            ctx->pc = 0x179FB0u;
            goto label_179fb0;
        }
    }
    ctx->pc = 0x179F84u;
    // 0x179f84: 0xc05e9b4
    ctx->pc = 0x179F84u;
    SET_GPR_U32(ctx, 31, 0x179F8Cu);
    ctx->pc = 0x179F88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F8Cu; }
        else if (ctx->pc != 0x179F8Cu) { ctx->pc = 0x179F8Cu; }
    }
    if (ctx->pc != 0x179F8Cu) { return; }
    ctx->pc = 0x179F8Cu;
    // 0x179f8c: 0xc05e88e
    ctx->pc = 0x179F8Cu;
    SET_GPR_U32(ctx, 31, 0x179F94u);
    ctx->pc = 0x179F90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Stop_0x17a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179F94u; }
        else if (ctx->pc != 0x179F94u) { ctx->pc = 0x179F94u; }
    }
    if (ctx->pc != 0x179F94u) { return; }
    ctx->pc = 0x179F94u;
    // 0x179f94: 0xa2000000
    ctx->pc = 0x179f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x179f98: 0x282d
    ctx->pc = 0x179f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f9c: 0x24060438
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1080));
    // 0x179fa0: 0xc050cfe
    ctx->pc = 0x179FA0u;
    SET_GPR_U32(ctx, 31, 0x179FA8u);
    ctx->pc = 0x179FA4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FA8u; }
        else if (ctx->pc != 0x179FA8u) { ctx->pc = 0x179FA8u; }
    }
    if (ctx->pc != 0x179FA8u) { return; }
    ctx->pc = 0x179FA8u;
    // 0x179fa8: 0xc05e9bc
    ctx->pc = 0x179FA8u;
    SET_GPR_U32(ctx, 31, 0x179FB0u);
    ctx->pc = 0x179FACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FB0u; }
        else if (ctx->pc != 0x179FB0u) { ctx->pc = 0x179FB0u; }
    }
    if (ctx->pc != 0x179FB0u) { return; }
    ctx->pc = 0x179FB0u;
label_179fb0:
    // 0x179fb0: 0xdfbf0020
    ctx->pc = 0x179fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179fb4: 0xdfb00010
    ctx->pc = 0x179fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179fb8: 0x3e00008
    ctx->pc = 0x179FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179FB0u: goto label_179fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x179FC0u;
}
