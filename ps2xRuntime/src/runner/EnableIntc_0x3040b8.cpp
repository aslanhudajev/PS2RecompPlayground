#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnableIntc
// Address: 0x3040b8 - 0x30411c
void EnableIntc_0x3040b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3040b8u;

    // 0x3040b8: 0x27bdffe0
    ctx->pc = 0x3040b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3040bc: 0xffbf0010
    ctx->pc = 0x3040bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3040c0: 0xffb00000
    ctx->pc = 0x3040c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3040c4: 0x40106000
    ctx->pc = 0x3040c4u;
    SET_GPR_U32(ctx, 16, ctx->cop0_status);
    // 0x3040c8: 0x3c020001
    ctx->pc = 0x3040c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x3040cc: 0x2028024
    ctx->pc = 0x3040ccu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3040d0: 0x12000008
    ctx->pc = 0x3040D0u;
    {
        const bool branch_taken_0x3040d0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x3040D4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
        if (branch_taken_0x3040d0) {
            ctx->pc = 0x3040F4u;
            goto label_3040f4;
        }
    }
    ctx->pc = 0x3040D8u;
label_3040d8:
    // 0x3040d8: 0x42000039
    ctx->pc = 0x3040d8u;
    ctx->cop0_status &= ~0x1; // Disable interrupts
    // 0x3040dc: 0x40f
    ctx->pc = 0x3040dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3040e0: 0x40026000
    ctx->pc = 0x3040e0u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x3040e4: 0x431024
    ctx->pc = 0x3040e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3040e8: 0x0
    ctx->pc = 0x3040e8u;
    // NOP
    // 0x3040ec: 0x1440fffa
    ctx->pc = 0x3040ECu;
    {
        const bool branch_taken_0x3040ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3040ec) {
            ctx->pc = 0x3040D8u;
            goto label_3040d8;
        }
    }
    ctx->pc = 0x3040F4u;
label_3040f4:
    // 0x3040f4: 0xc0c0cc8
    ctx->pc = 0x3040F4u;
    SET_GPR_U32(ctx, 31, 0x3040FCu);
    ctx->pc = 0x303320u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__EnableIntc_0x303320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3040FCu; }
    }
    if (ctx->pc != 0x3040FCu) { return; }
    ctx->pc = 0x3040FCu;
    // 0x3040fc: 0xf
    ctx->pc = 0x3040fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x304100: 0x12000003
    ctx->pc = 0x304100u;
    {
        const bool branch_taken_0x304100 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x304104u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x304100) {
            ctx->pc = 0x304110u;
            goto label_304110;
        }
    }
    ctx->pc = 0x304108u;
    // 0x304108: 0x42000038
    ctx->pc = 0x304108u;
    ctx->cop0_status |= 0x1; // Enable interrupts
    // 0x30410c: 0xdfbf0010
    ctx->pc = 0x30410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304110:
    // 0x304110: 0xdfb00000
    ctx->pc = 0x304110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304114: 0x3e00008
    ctx->pc = 0x304114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304118u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3040D8u: goto label_3040d8;
            case 0x3040F4u: goto label_3040f4;
            case 0x304110u: goto label_304110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x30411Cu;
}
