#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableDmac
// Address: 0x304188 - 0x3041ec
void EnableDmac_0x304188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x304188u;

    // 0x304188: 0x27bdffe0
    ctx->pc = 0x304188u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30418c: 0xffbf0010
    ctx->pc = 0x30418cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x304190: 0xffb00000
    ctx->pc = 0x304190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304194: 0x40106000
    ctx->pc = 0x304194u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x304198: 0x3c020001
    ctx->pc = 0x304198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x30419c: 0x2028024
    ctx->pc = 0x30419cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3041a0: 0x12000008
    ctx->pc = 0x3041A0u;
    {
        const bool branch_taken_0x3041a0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x3041A4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x3041a0) {
            ctx->pc = 0x3041C4u;
            goto label_3041c4;
        }
    }
    ctx->pc = 0x3041A8u;
label_3041a8:
    // 0x3041a8: 0x42000039
    ctx->pc = 0x3041a8u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x3041ac: 0x40f
    ctx->pc = 0x3041acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3041b0: 0x40026000
    ctx->pc = 0x3041b0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x3041b4: 0x431024
    ctx->pc = 0x3041b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3041b8: 0x0
    ctx->pc = 0x3041b8u;
    // NOP
    // 0x3041bc: 0x1440fffa
    ctx->pc = 0x3041BCu;
    {
        const bool branch_taken_0x3041bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3041bc) {
            ctx->pc = 0x3041A8u;
            goto label_3041a8;
        }
    }
    ctx->pc = 0x3041C4u;
label_3041c4:
    // 0x3041c4: 0xc0c0cd0
    ctx->pc = 0x3041C4u;
    SET_GPR_U32(ctx, 31, 0x3041CCu);
    ctx->pc = 0x303340u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableDmac_0x303340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3041CCu; }
    }
    if (ctx->pc != 0x3041CCu) { return; }
    ctx->pc = 0x3041CCu;
    // 0x3041cc: 0xf
    ctx->pc = 0x3041ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3041d0: 0x12000003
    ctx->pc = 0x3041D0u;
    {
        const bool branch_taken_0x3041d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x3041D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3041d0) {
            ctx->pc = 0x3041E0u;
            goto label_3041e0;
        }
    }
    ctx->pc = 0x3041D8u;
    // 0x3041d8: 0x42000038
    ctx->pc = 0x3041d8u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x3041dc: 0xdfbf0010
    ctx->pc = 0x3041dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3041e0:
    // 0x3041e0: 0xdfb00000
    ctx->pc = 0x3041e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3041e4: 0x3e00008
    ctx->pc = 0x3041E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3041E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3041A8u: goto label_3041a8;
            case 0x3041C4u: goto label_3041c4;
            case 0x3041E0u: goto label_3041e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3041ECu;
}
