#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetAlarm
// Address: 0x3041f0 - 0x30425c
void SetAlarm_0x3041f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3041f0u;

    // 0x3041f0: 0x27bdffe0
    ctx->pc = 0x3041f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3041f4: 0x3084ffff
    ctx->pc = 0x3041f4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x3041f8: 0xffbf0010
    ctx->pc = 0x3041f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3041fc: 0xffb00000
    ctx->pc = 0x3041fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304200: 0x40106000
    ctx->pc = 0x304200u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x304204: 0x3c020001
    ctx->pc = 0x304204u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x304208: 0x2028024
    ctx->pc = 0x304208u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x30420c: 0x12000009
    ctx->pc = 0x30420Cu;
    {
        const bool branch_taken_0x30420c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x304210u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x30420c) {
            ctx->pc = 0x304234u;
            goto label_304234;
        }
    }
    ctx->pc = 0x304214u;
    // 0x304214: 0x0
    ctx->pc = 0x304214u;
    // NOP
label_304218:
    // 0x304218: 0x42000039
    ctx->pc = 0x304218u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x30421c: 0x40f
    ctx->pc = 0x30421cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304220: 0x40026000
    ctx->pc = 0x304220u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x304224: 0x431024
    ctx->pc = 0x304224u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304228: 0x0
    ctx->pc = 0x304228u;
    // NOP
    // 0x30422c: 0x1440fffa
    ctx->pc = 0x30422Cu;
    {
        const bool branch_taken_0x30422c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30422c) {
            ctx->pc = 0x304218u;
            goto label_304218;
        }
    }
    ctx->pc = 0x304234u;
label_304234:
    // 0x304234: 0xc0c0cd8
    ctx->pc = 0x304234u;
    SET_GPR_U32(ctx, 31, 0x30423Cu);
    ctx->pc = 0x303360u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__SetAlarm_0x303360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30423Cu; }
    }
    if (ctx->pc != 0x30423Cu) { return; }
    ctx->pc = 0x30423Cu;
    // 0x30423c: 0xf
    ctx->pc = 0x30423cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304240: 0x12000003
    ctx->pc = 0x304240u;
    {
        const bool branch_taken_0x304240 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x304244u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x304240) {
            ctx->pc = 0x304250u;
            goto label_304250;
        }
    }
    ctx->pc = 0x304248u;
    // 0x304248: 0x42000038
    ctx->pc = 0x304248u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x30424c: 0xdfbf0010
    ctx->pc = 0x30424cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304250:
    // 0x304250: 0xdfb00000
    ctx->pc = 0x304250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304254: 0x3e00008
    ctx->pc = 0x304254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304258u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304218u: goto label_304218;
            case 0x304234u: goto label_304234;
            case 0x304250u: goto label_304250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30425Cu;
}
