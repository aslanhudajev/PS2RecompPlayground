#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitBlits
// Address: 0x2c2f30 - 0x2c3020
void MBInitBlits_0x2c2f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2f30u;

    // 0x2c2f30: 0x27bdffd0
    ctx->pc = 0x2c2f30u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c2f34: 0xffbf0020
    ctx->pc = 0x2c2f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c2f38: 0xffb10010
    ctx->pc = 0x2c2f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c2f3c: 0xffb00000
    ctx->pc = 0x2c2f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2f40: 0x80882d
    ctx->pc = 0x2c2f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f44: 0x3c100037
    ctx->pc = 0x2c2f44u;
    SET_GPR_U32(ctx, 16, ((uint32_t)55 << 16));
    // 0x2c2f48: 0x261031b8
    ctx->pc = 0x2c2f48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 12728));
    // 0x2c2f4c: 0x200202d
    ctx->pc = 0x2c2f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f50: 0x282d
    ctx->pc = 0x2c2f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2f54: 0xc0becc6
    ctx->pc = 0x2C2F54u;
    SET_GPR_U32(ctx, 31, 0x2C2F5Cu);
    ctx->pc = 0x2C2F58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 21504));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F5Cu; }
    }
    if (ctx->pc != 0x2C2F5Cu) { return; }
    ctx->pc = 0x2C2F5Cu;
    // 0x2c2f5c: 0x3c02ffff
    ctx->pc = 0x2c2f5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2c2f60: 0x3442ffff
    ctx->pc = 0x2c2f60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x2c2f64: 0xae020004
    ctx->pc = 0x2c2f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2c2f68: 0x3c020037
    ctx->pc = 0x2c2f68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2f6c: 0x12200017
    ctx->pc = 0x2C2F6Cu;
    {
        const bool branch_taken_0x2c2f6c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2F70u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12720), GPR_U32(ctx, 0));
        if (branch_taken_0x2c2f6c) {
            ctx->pc = 0x2C2FCCu;
            goto label_2c2fcc;
        }
    }
    ctx->pc = 0x2C2F74u;
    // 0x2c2f74: 0xc0b0bbe
    ctx->pc = 0x2C2F74u;
    SET_GPR_U32(ctx, 31, 0x2C2F7Cu);
    ctx->pc = 0x2C2F78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlitNode_0x2c2ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F7Cu; }
    }
    if (ctx->pc != 0x2C2F7Cu) { return; }
    ctx->pc = 0x2C2F7Cu;
    // 0x2c2f7c: 0x3c030037
    ctx->pc = 0x2c2f7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c2f80: 0xac62319c
    ctx->pc = 0x2c2f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12700), GPR_U32(ctx, 2));
    // 0x2c2f84: 0x8c430060
    ctx->pc = 0x2c2f84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2f88: 0x34630004
    ctx->pc = 0x2c2f88u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c2f8c: 0xac430060
    ctx->pc = 0x2c2f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2c2f90: 0xc0b0bbe
    ctx->pc = 0x2C2F90u;
    SET_GPR_U32(ctx, 31, 0x2C2F98u);
    ctx->pc = 0x2C2F94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlitNode_0x2c2ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2F98u; }
    }
    if (ctx->pc != 0x2C2F98u) { return; }
    ctx->pc = 0x2C2F98u;
    // 0x2c2f98: 0x3c030037
    ctx->pc = 0x2c2f98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c2f9c: 0xac623194
    ctx->pc = 0x2c2f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12692), GPR_U32(ctx, 2));
    // 0x2c2fa0: 0x8c430060
    ctx->pc = 0x2c2fa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2fa4: 0x34630004
    ctx->pc = 0x2c2fa4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c2fa8: 0xac430060
    ctx->pc = 0x2c2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    // 0x2c2fac: 0xc0b0bbe
    ctx->pc = 0x2C2FACu;
    SET_GPR_U32(ctx, 31, 0x2C2FB4u);
    ctx->pc = 0x2C2FB0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2EF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlitNode_0x2c2ef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2FB4u; }
    }
    if (ctx->pc != 0x2C2FB4u) { return; }
    ctx->pc = 0x2C2FB4u;
    // 0x2c2fb4: 0x3c030037
    ctx->pc = 0x2c2fb4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2c2fb8: 0xac623198
    ctx->pc = 0x2c2fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12696), GPR_U32(ctx, 2));
    // 0x2c2fbc: 0x8c430060
    ctx->pc = 0x2c2fbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2c2fc0: 0x34630004
    ctx->pc = 0x2c2fc0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 4));
    // 0x2c2fc4: 0x10000007
    ctx->pc = 0x2C2FC4u;
    {
        const bool branch_taken_0x2c2fc4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2FC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
        if (branch_taken_0x2c2fc4) {
            ctx->pc = 0x2C2FE4u;
            goto label_2c2fe4;
        }
    }
    ctx->pc = 0x2C2FCCu;
label_2c2fcc:
    // 0x2c2fcc: 0x3c020037
    ctx->pc = 0x2c2fccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2fd0: 0xac40319c
    ctx->pc = 0x2c2fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12700), GPR_U32(ctx, 0));
    // 0x2c2fd4: 0x3c020037
    ctx->pc = 0x2c2fd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2fd8: 0xac403194
    ctx->pc = 0x2c2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12692), GPR_U32(ctx, 0));
    // 0x2c2fdc: 0x3c020037
    ctx->pc = 0x2c2fdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2fe0: 0xac403198
    ctx->pc = 0x2c2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12696), GPR_U32(ctx, 0));
label_2c2fe4:
    // 0x2c2fe4: 0x3c020038
    ctx->pc = 0x2c2fe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2fe8: 0xac40b0c0
    ctx->pc = 0x2c2fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947008), GPR_U32(ctx, 0));
    // 0x2c2fec: 0x3c020038
    ctx->pc = 0x2c2fecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2ff0: 0xac40b0c4
    ctx->pc = 0x2c2ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294947012), GPR_U32(ctx, 0));
    // 0x2c2ff4: 0x3c020038
    ctx->pc = 0x2c2ff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c2ff8: 0xac408cb8
    ctx->pc = 0x2c2ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937784), GPR_U32(ctx, 0));
    // 0x2c2ffc: 0x3c020038
    ctx->pc = 0x2c2ffcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c3000: 0xac408cbc
    ctx->pc = 0x2c3000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937788), GPR_U32(ctx, 0));
    // 0x2c3004: 0x3c020037
    ctx->pc = 0x2c3004u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c3008: 0xac4031ac
    ctx->pc = 0x2c3008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12716), GPR_U32(ctx, 0));
    // 0x2c300c: 0xdfbf0020
    ctx->pc = 0x2c300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c3010: 0xdfb10010
    ctx->pc = 0x2c3010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c3014: 0xdfb00000
    ctx->pc = 0x2c3014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3018: 0x3e00008
    ctx->pc = 0x2C3018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C301Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2FCCu: goto label_2c2fcc;
            case 0x2C2FE4u: goto label_2c2fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3020u;
}
