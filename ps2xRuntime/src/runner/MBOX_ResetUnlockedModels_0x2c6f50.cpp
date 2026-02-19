#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_ResetUnlockedModels
// Address: 0x2c6f50 - 0x2c704c
void MBOX_ResetUnlockedModels_0x2c6f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6f50u;

    // 0x2c6f50: 0x27bdffd0
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c6f54: 0xffbf0020
    ctx->pc = 0x2c6f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c6f58: 0xffb10010
    ctx->pc = 0x2c6f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c6f5c: 0xffb00000
    ctx->pc = 0x2c6f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6f60: 0x80802d
    ctx->pc = 0x2c6f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f64: 0x3c020036
    ctx->pc = 0x2c6f64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c6f68: 0xc0b01ec
    ctx->pc = 0x2C6F68u;
    SET_GPR_U32(ctx, 31, 0x2C6F70u);
    ctx->pc = 0x2C6F6Cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    ctx->pc = 0x2C07B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDmaWaitFinished_0x2c07b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F70u; }
    }
    if (ctx->pc != 0x2C6F70u) { return; }
    ctx->pc = 0x2C6F70u;
    // 0x2c6f70: 0x3c030038
    ctx->pc = 0x2c6f70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c6f74: 0x8c62c370
    ctx->pc = 0x2c6f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294951792)));
    // 0x2c6f78: 0x202102a
    ctx->pc = 0x2c6f78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c6f7c: 0x10400002
    ctx->pc = 0x2C6F7Cu;
    {
        const bool branch_taken_0x2c6f7c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6F80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c6f7c) {
            ctx->pc = 0x2C6F88u;
            goto label_2c6f88;
        }
    }
    ctx->pc = 0x2C6F84u;
    // 0x2c6f84: 0xac62c370
    ctx->pc = 0x2c6f84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951792), GPR_U32(ctx, 2));
label_2c6f88:
    // 0x2c6f88: 0x3c030038
    ctx->pc = 0x2c6f88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c6f8c: 0x8c62c374
    ctx->pc = 0x2c6f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294951796)));
    // 0x2c6f90: 0x202102a
    ctx->pc = 0x2c6f90u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2c6f94: 0x10400002
    ctx->pc = 0x2C6F94u;
    {
        const bool branch_taken_0x2c6f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C6F98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2c6f94) {
            ctx->pc = 0x2C6FA0u;
            goto label_2c6fa0;
        }
    }
    ctx->pc = 0x2C6F9Cu;
    // 0x2c6f9c: 0xac62c374
    ctx->pc = 0x2c6f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294951796), GPR_U32(ctx, 2));
label_2c6fa0:
    // 0x2c6fa0: 0x3c020038
    ctx->pc = 0x2c6fa0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c6fa4: 0x8c42c370
    ctx->pc = 0x2c6fa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951792)));
    // 0x2c6fa8: 0x4410004
    ctx->pc = 0x2C6FA8u;
    {
        const bool branch_taken_0x2c6fa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C6FACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
        if (branch_taken_0x2c6fa8) {
            ctx->pc = 0x2C6FBCu;
            goto label_2c6fbc;
        }
    }
    ctx->pc = 0x2C6FB0u;
    // 0x2c6fb0: 0xc0b013a
    ctx->pc = 0x2C6FB0u;
    SET_GPR_U32(ctx, 31, 0x2C6FB8u);
    ctx->pc = 0x2C04E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbTextureDmaFree_0x2c04e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FB8u; }
    }
    if (ctx->pc != 0x2C6FB8u) { return; }
    ctx->pc = 0x2C6FB8u;
    // 0x2c6fb8: 0x3c020038
    ctx->pc = 0x2c6fb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
label_2c6fbc:
    // 0x2c6fbc: 0x8c42c374
    ctx->pc = 0x2c6fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951796)));
    // 0x2c6fc0: 0x4410003
    ctx->pc = 0x2C6FC0u;
    {
        const bool branch_taken_0x2c6fc0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c6fc0) {
            ctx->pc = 0x2C6FD0u;
            goto label_2c6fd0;
        }
    }
    ctx->pc = 0x2C6FC8u;
    // 0x2c6fc8: 0xc0b019e
    ctx->pc = 0x2C6FC8u;
    SET_GPR_U32(ctx, 31, 0x2C6FD0u);
    ctx->pc = 0x2C0678u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbObjectDmaFree_0x2c0678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FD0u; }
    }
    if (ctx->pc != 0x2C6FD0u) { return; }
    ctx->pc = 0x2C6FD0u;
label_2c6fd0:
    // 0x2c6fd0: 0xc0b4fa6
    ctx->pc = 0x2C6FD0u;
    SET_GPR_U32(ctx, 31, 0x2C6FD8u);
    ctx->pc = 0x2C6FD4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D3E98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FreeUnlockedMem_0x2d3e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FD8u; }
    }
    if (ctx->pc != 0x2C6FD8u) { return; }
    ctx->pc = 0x2C6FD8u;
    // 0x2c6fd8: 0xc0b11e2
    ctx->pc = 0x2C6FD8u;
    SET_GPR_U32(ctx, 31, 0x2C6FE0u);
    ctx->pc = 0x2C6FDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4788u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBResetUnlockedFonts_0x2c4788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FE0u; }
    }
    if (ctx->pc != 0x2C6FE0u) { return; }
    ctx->pc = 0x2C6FE0u;
    // 0x2c6fe0: 0x3c040038
    ctx->pc = 0x2c6fe0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)56 << 16));
    // 0x2c6fe4: 0x3c030038
    ctx->pc = 0x2c6fe4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c6fe8: 0x2463c970
    ctx->pc = 0x2c6fe8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953328));
    // 0x2c6fec: 0x101080
    ctx->pc = 0x2c6fecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c6ff0: 0x431021
    ctx->pc = 0x2c6ff0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c6ff4: 0x8c430000
    ctx->pc = 0x2c6ff4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6ff8: 0xac83c500
    ctx->pc = 0x2c6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952192), GPR_U32(ctx, 3));
    // 0x2c6ffc: 0x8e220038
    ctx->pc = 0x2c6ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x2c7000: 0xc0b4026
    ctx->pc = 0x2C7000u;
    SET_GPR_U32(ctx, 31, 0x2C7008u);
    ctx->pc = 0x2C7004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2D0098u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeInit_0x2d0098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7008u; }
    }
    if (ctx->pc != 0x2C7008u) { return; }
    ctx->pc = 0x2C7008u;
    // 0x2c7008: 0x3c030038
    ctx->pc = 0x2c7008u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c700c: 0x2402ffff
    ctx->pc = 0x2c700cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7010: 0xac62c968
    ctx->pc = 0x2c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953320), GPR_U32(ctx, 2));
    // 0x2c7014: 0x2a020002
    ctx->pc = 0x2c7014u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x2c7018: 0x10400008
    ctx->pc = 0x2C7018u;
    {
        const bool branch_taken_0x2c7018 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C701Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2c7018) {
            ctx->pc = 0x2C703Cu;
            goto label_2c703c;
        }
    }
    ctx->pc = 0x2C7020u;
    // 0x2c7020: 0xc0b3d82
    ctx->pc = 0x2C7020u;
    SET_GPR_U32(ctx, 31, 0x2C7028u);
    ctx->pc = 0x2CF608u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitStats_0x2cf608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7028u; }
    }
    if (ctx->pc != 0x2C7028u) { return; }
    ctx->pc = 0x2C7028u;
    // 0x2c7028: 0xdfbf0020
    ctx->pc = 0x2c7028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c702c: 0xdfb10010
    ctx->pc = 0x2c702cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7030: 0xdfb00000
    ctx->pc = 0x2c7030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7034: 0x80b22b4
    ctx->pc = 0x2C7034u;
    ctx->pc = 0x2C7038u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2C8AD0u;
    MBInitPsys_0x2c8ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C703Cu;
label_2c703c:
    // 0x2c703c: 0xdfb10010
    ctx->pc = 0x2c703cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7040: 0xdfb00000
    ctx->pc = 0x2c7040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7044: 0x3e00008
    ctx->pc = 0x2C7044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C6F88u: goto label_2c6f88;
            case 0x2C6FA0u: goto label_2c6fa0;
            case 0x2C6FBCu: goto label_2c6fbc;
            case 0x2C6FD0u: goto label_2c6fd0;
            case 0x2C703Cu: goto label_2c703c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C704Cu;
}
