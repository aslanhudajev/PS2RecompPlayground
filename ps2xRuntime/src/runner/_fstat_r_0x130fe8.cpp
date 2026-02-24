#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fstat_r
// Address: 0x130fe8 - 0x131044
void _fstat_r_0x130fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130fe8u;

    // 0x130fe8: 0x27bdffd0
    ctx->pc = 0x130fe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130fec: 0xffb00000
    ctx->pc = 0x130fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ff0: 0xffb10010
    ctx->pc = 0x130ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130ff4: 0x80802d
    ctx->pc = 0x130ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff8: 0xa0202d
    ctx->pc = 0x130ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ffc: 0x3c110017
    ctx->pc = 0x130ffcu;
    SET_GPR_S32(ctx, 17, ((uint32_t)23 << 16));
    // 0x131000: 0xffbf0020
    ctx->pc = 0x131000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131004: 0xc0282d
    ctx->pc = 0x131004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131008: 0xc043a6c
    ctx->pc = 0x131008u;
    SET_GPR_U32(ctx, 31, 0x131010u);
    ctx->pc = 0x13100Cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
    ctx->pc = 0x10E9B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x10e9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131010u; }
    }
    if (ctx->pc != 0x131010u) { return; }
    ctx->pc = 0x131010u;
    // 0x131010: 0x40182d
    ctx->pc = 0x131010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131014: 0x2402ffff
    ctx->pc = 0x131014u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131018: 0x14620005
    ctx->pc = 0x131018u;
    {
        const bool branch_taken_0x131018 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x13101Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x131018) {
            ctx->pc = 0x131030u;
            goto label_131030;
        }
    }
    ctx->pc = 0x131020u;
    // 0x131020: 0x8e225fe0
    ctx->pc = 0x131020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x131024: 0x54400002
    ctx->pc = 0x131024u;
    {
        const bool branch_taken_0x131024 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x131024) {
            ctx->pc = 0x131028u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x131030u;
            goto label_131030;
        }
    }
    ctx->pc = 0x13102Cu;
    // 0x13102c: 0xdfbf0020
    ctx->pc = 0x13102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131030:
    // 0x131030: 0x60102d
    ctx->pc = 0x131030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131034: 0xdfb10010
    ctx->pc = 0x131034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131038: 0xdfb00000
    ctx->pc = 0x131038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13103c: 0x3e00008
    ctx->pc = 0x13103Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131040u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131030u: goto label_131030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131044u;
}
