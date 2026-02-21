#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ReleaseAlarm
// Address: 0x304260 - 0x3042c4
void ReleaseAlarm_0x304260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304260u;

    // 0x304260: 0x27bdffe0
    ctx->pc = 0x304260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x304264: 0xffbf0010
    ctx->pc = 0x304264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304268: 0xffb00000
    ctx->pc = 0x304268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30426c: 0x40106000
    ctx->pc = 0x30426cu;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x304270: 0x3c020001
    ctx->pc = 0x304270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x304274: 0x2028024
    ctx->pc = 0x304274u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x304278: 0x12000008
    ctx->pc = 0x304278u;
    {
        const bool branch_taken_0x304278 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30427Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x304278) {
            ctx->pc = 0x30429Cu;
            goto label_30429c;
        }
    }
    ctx->pc = 0x304280u;
label_304280:
    // 0x304280: 0x42000039
    ctx->pc = 0x304280u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x304284: 0x40f
    ctx->pc = 0x304284u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304288: 0x40026000
    ctx->pc = 0x304288u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x30428c: 0x431024
    ctx->pc = 0x30428cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x304290: 0x0
    ctx->pc = 0x304290u;
    // NOP
    // 0x304294: 0x1440fffa
    ctx->pc = 0x304294u;
    {
        const bool branch_taken_0x304294 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x304294) {
            ctx->pc = 0x304280u;
            goto label_304280;
        }
    }
    ctx->pc = 0x30429Cu;
label_30429c:
    // 0x30429c: 0xc0c0cdc
    ctx->pc = 0x30429Cu;
    SET_GPR_U32(ctx, 31, 0x3042A4u);
    ctx->pc = 0x303370u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__ReleaseAlarm_0x303370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3042A4u; }
    }
    if (ctx->pc != 0x3042A4u) { return; }
    ctx->pc = 0x3042A4u;
    // 0x3042a4: 0xf
    ctx->pc = 0x3042a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3042a8: 0x12000003
    ctx->pc = 0x3042A8u;
    {
        const bool branch_taken_0x3042a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x3042ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3042a8) {
            ctx->pc = 0x3042B8u;
            goto label_3042b8;
        }
    }
    ctx->pc = 0x3042B0u;
    // 0x3042b0: 0x42000038
    ctx->pc = 0x3042b0u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x3042b4: 0xdfbf0010
    ctx->pc = 0x3042b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3042b8:
    // 0x3042b8: 0xdfb00000
    ctx->pc = 0x3042b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3042bc: 0x3e00008
    ctx->pc = 0x3042BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3042C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x304280u: goto label_304280;
            case 0x30429Cu: goto label_30429c;
            case 0x3042B8u: goto label_3042b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3042C4u;
}
