#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyDescType
// Address: 0x236f10 - 0x236fd0
void EnemyDescType_0x236f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x236f10u;

    // 0x236f10: 0x27bdffa0
    ctx->pc = 0x236f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x236f14: 0xffbf0050
    ctx->pc = 0x236f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x236f18: 0xffb40040
    ctx->pc = 0x236f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x236f1c: 0xffb30030
    ctx->pc = 0x236f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x236f20: 0xffb20020
    ctx->pc = 0x236f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x236f24: 0xffb10010
    ctx->pc = 0x236f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x236f28: 0xffb00000
    ctx->pc = 0x236f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236f2c: 0x80902d
    ctx->pc = 0x236f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f30: 0x3c05003a
    ctx->pc = 0x236f30u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x236f34: 0xc0bf194
    ctx->pc = 0x236F34u;
    SET_GPR_U32(ctx, 31, 0x236F3Cu);
    ctx->pc = 0x236F38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 31920));
    ctx->pc = 0x2FC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x2fc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F3Cu; }
    }
    if (ctx->pc != 0x236F3Cu) { return; }
    ctx->pc = 0x236F3Cu;
    // 0x236f3c: 0x1440000d
    ctx->pc = 0x236F3Cu;
    {
        const bool branch_taken_0x236f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236F40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x236f3c) {
            ctx->pc = 0x236F74u;
            goto label_236f74;
        }
    }
    ctx->pc = 0x236F44u;
    // 0x236f44: 0x3c020034
    ctx->pc = 0x236f44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x236f48: 0x3c030036
    ctx->pc = 0x236f48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x236f4c: 0x8c44e820
    ctx->pc = 0x236f4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294961184)));
    // 0x236f50: 0x8c63d934
    ctx->pc = 0x236f50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294957364)));
    // 0x236f54: 0x3c02ffff
    ctx->pc = 0x236f54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x236f58: 0x3442ffff
    ctx->pc = 0x236f58u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x236f5c: 0x831826
    ctx->pc = 0x236f5cu;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x236f60: 0x10000013
    ctx->pc = 0x236F60u;
    {
        const bool branch_taken_0x236f60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x236F64u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x236f60) {
            ctx->pc = 0x236FB0u;
            goto label_236fb0;
        }
    }
    ctx->pc = 0x236F68u;
label_236f68:
    // 0x236f68: 0x2701021
    ctx->pc = 0x236f68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x236f6c: 0x10000010
    ctx->pc = 0x236F6Cu;
    {
        const bool branch_taken_0x236f6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x236F70u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
        if (branch_taken_0x236f6c) {
            ctx->pc = 0x236FB0u;
            goto label_236fb0;
        }
    }
    ctx->pc = 0x236F74u;
label_236f74:
    // 0x236f74: 0x24140024
    ctx->pc = 0x236f74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 36));
    // 0x236f78: 0x3c020033
    ctx->pc = 0x236f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x236f7c: 0x2453ce14
    ctx->pc = 0x236f7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294954516));
    // 0x236f80: 0x2348018
    ctx->pc = 0x236f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x236f84: 0x0
    ctx->pc = 0x236f84u;
    // NOP
label_236f88:
    // 0x236f88: 0x240202d
    ctx->pc = 0x236f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236f8c: 0xc0bf194
    ctx->pc = 0x236F8Cu;
    SET_GPR_U32(ctx, 31, 0x236F94u);
    ctx->pc = 0x236F90u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->pc = 0x2FC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x2fc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x236F94u; }
    }
    if (ctx->pc != 0x236F94u) { return; }
    ctx->pc = 0x236F94u;
    // 0x236f94: 0x1040fff4
    ctx->pc = 0x236F94u;
    {
        const bool branch_taken_0x236f94 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x236F98u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x236f94) {
            ctx->pc = 0x236F68u;
            goto label_236f68;
        }
    }
    ctx->pc = 0x236F9Cu;
    // 0x236f9c: 0x2e22002c
    ctx->pc = 0x236f9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 44));
    // 0x236fa0: 0x1440fff9
    ctx->pc = 0x236FA0u;
    {
        const bool branch_taken_0x236fa0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x236FA4u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x236fa0) {
            ctx->pc = 0x236F88u;
            goto label_236f88;
        }
    }
    ctx->pc = 0x236FA8u;
    // 0x236fa8: 0x3c02ffff
    ctx->pc = 0x236fa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x236fac: 0x3442ffff
    ctx->pc = 0x236facu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_236fb0:
    // 0x236fb0: 0xdfbf0050
    ctx->pc = 0x236fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x236fb4: 0xdfb40040
    ctx->pc = 0x236fb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x236fb8: 0xdfb30030
    ctx->pc = 0x236fb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x236fbc: 0xdfb20020
    ctx->pc = 0x236fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x236fc0: 0xdfb10010
    ctx->pc = 0x236fc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x236fc4: 0xdfb00000
    ctx->pc = 0x236fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236fc8: 0x3e00008
    ctx->pc = 0x236FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236FCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x236F68u: goto label_236f68;
            case 0x236F74u: goto label_236f74;
            case 0x236F88u: goto label_236f88;
            case 0x236FB0u: goto label_236fb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x236FD0u;
}
