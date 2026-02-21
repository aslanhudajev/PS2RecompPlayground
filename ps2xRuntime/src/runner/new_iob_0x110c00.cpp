#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_iob
// Address: 0x110c00 - 0x110c88
void new_iob_0x110c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x110c00u;

    // 0x110c00: 0x27bdffd0
    ctx->pc = 0x110c00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110c04: 0xffb10010
    ctx->pc = 0x110c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110c08: 0xffb00000
    ctx->pc = 0x110c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110c0c: 0xffbf0020
    ctx->pc = 0x110c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110c10: 0xc0442e8
    ctx->pc = 0x110C10u;
    SET_GPR_U32(ctx, 31, 0x110C18u);
    ctx->pc = 0x110C14u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    ctx->pc = 0x110BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x110ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C18u; }
    }
    if (ctx->pc != 0x110C18u) { return; }
    ctx->pc = 0x110C18u;
    // 0x110c18: 0xc0438b8
    ctx->pc = 0x110C18u;
    SET_GPR_U32(ctx, 31, 0x110C20u);
    ctx->pc = 0x110C1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    ctx->pc = 0x10E2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C20u; }
    }
    if (ctx->pc != 0x110C20u) { return; }
    ctx->pc = 0x110C20u;
    // 0x110c20: 0x3c030018
    ctx->pc = 0x110c20u;
    SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
    // 0x110c24: 0x247097c0
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294940608));
    // 0x110c28: 0x26030200
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 512));
    // 0x110c2c: 0x203102b
    ctx->pc = 0x110c2cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x110c30: 0x1040000d
    ctx->pc = 0x110C30u;
    {
        const bool branch_taken_0x110c30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x110C34u;
        SET_GPR_U32(ctx, 5, ((uint32_t)4096 << 16));
        if (branch_taken_0x110c30) {
            ctx->pc = 0x110C68u;
            goto label_110c68;
        }
    }
    ctx->pc = 0x110C38u;
    // 0x110c38: 0x8e020004
    ctx->pc = 0x110c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x110c3c: 0x0
    ctx->pc = 0x110c3cu;
    // NOP
label_110c40:
    // 0x110c40: 0x54400006
    ctx->pc = 0x110C40u;
    {
        const bool branch_taken_0x110c40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x110c40) {
            ctx->pc = 0x110C44u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
            ctx->pc = 0x110C5Cu;
            goto label_110c5c;
        }
    }
    ctx->pc = 0x110C48u;
    // 0x110c48: 0x8e24fbc0
    ctx->pc = 0x110c48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    // 0x110c4c: 0xc0438b0
    ctx->pc = 0x110C4Cu;
    SET_GPR_U32(ctx, 31, 0x110C54u);
    ctx->pc = 0x110C50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C54u; }
    }
    if (ctx->pc != 0x110C54u) { return; }
    ctx->pc = 0x110C54u;
    // 0x110c54: 0x10000007
    ctx->pc = 0x110C54u;
    {
        const bool branch_taken_0x110c54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x110C58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x110c54) {
            ctx->pc = 0x110C74u;
            goto label_110c74;
        }
    }
    ctx->pc = 0x110C5Cu;
label_110c5c:
    // 0x110c5c: 0x203102b
    ctx->pc = 0x110c5cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x110c60: 0x5440fff7
    ctx->pc = 0x110C60u;
    {
        const bool branch_taken_0x110c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x110c60) {
            ctx->pc = 0x110C64u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x110C40u;
            goto label_110c40;
        }
    }
    ctx->pc = 0x110C68u;
label_110c68:
    // 0x110c68: 0xc0438b0
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x110C6Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    ctx->pc = 0x10E2C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C70u; }
    }
    if (ctx->pc != 0x110C70u) { return; }
    ctx->pc = 0x110C70u;
    // 0x110c70: 0x102d
    ctx->pc = 0x110c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110c74:
    // 0x110c74: 0xdfbf0020
    ctx->pc = 0x110c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c78: 0xdfb10010
    ctx->pc = 0x110c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c7c: 0xdfb00000
    ctx->pc = 0x110c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c80: 0x3e00008
    ctx->pc = 0x110C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110C40u: goto label_110c40;
            case 0x110C5Cu: goto label_110c5c;
            case 0x110C68u: goto label_110c68;
            case 0x110C74u: goto label_110c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110C88u;
}
