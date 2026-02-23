#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetSupplySj
// Address: 0x19bee8 - 0x19bf40
void SFD_SetSupplySj_0x19bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetSupplySj");


    ctx->pc = 0x19bee8u;

    // 0x19bee8: 0x27bdffd0
    ctx->pc = 0x19bee8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19beec: 0xffb00000
    ctx->pc = 0x19beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bef0: 0xffb10010
    ctx->pc = 0x19bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19bef4: 0x80802d
    ctx->pc = 0x19bef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bef8: 0xffbf0020
    ctx->pc = 0x19bef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19befc: 0xc064f1e
    ctx->pc = 0x19BEFCu;
    SET_GPR_U32(ctx, 31, 0x19BF04u);
    ctx->pc = 0x19BF00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF04u; }
        else if (ctx->pc != 0x19BF04u) { ctx->pc = 0x19BF04u; }
    }
    if (ctx->pc != 0x19BF04u) { return; }
    ctx->pc = 0x19BF04u;
    // 0x19bf04: 0x10400006
    ctx->pc = 0x19BF04u;
    {
        const bool branch_taken_0x19bf04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BF08u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bf04) {
            ctx->pc = 0x19BF20u;
            goto label_19bf20;
        }
    }
    ctx->pc = 0x19BF0Cu;
    // 0x19bf0c: 0x3c05ff00
    ctx->pc = 0x19bf0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bf10: 0xc064ea0
    ctx->pc = 0x19BF10u;
    SET_GPR_U32(ctx, 31, 0x19BF18u);
    ctx->pc = 0x19BF14u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 313));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF18u; }
        else if (ctx->pc != 0x19BF18u) { ctx->pc = 0x19BF18u; }
    }
    if (ctx->pc != 0x19BF18u) { return; }
    ctx->pc = 0x19BF18u;
    // 0x19bf18: 0x10000005
    ctx->pc = 0x19BF18u;
    {
        const bool branch_taken_0x19bf18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BF1Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19bf18) {
            ctx->pc = 0x19BF30u;
            goto label_19bf30;
        }
    }
    ctx->pc = 0x19BF20u;
label_19bf20:
    // 0x19bf20: 0x200202d
    ctx->pc = 0x19bf20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf24: 0xc0646aa
    ctx->pc = 0x19BF24u;
    SET_GPR_U32(ctx, 31, 0x19BF2Cu);
    ctx->pc = 0x19BF28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x191AA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_SetSupplySj_0x191aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF2Cu; }
        else if (ctx->pc != 0x19BF2Cu) { ctx->pc = 0x19BF2Cu; }
    }
    if (ctx->pc != 0x19BF2Cu) { return; }
    ctx->pc = 0x19BF2Cu;
    // 0x19bf2c: 0xdfbf0020
    ctx->pc = 0x19bf2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19bf30:
    // 0x19bf30: 0xdfb10010
    ctx->pc = 0x19bf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf34: 0xdfb00000
    ctx->pc = 0x19bf34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf38: 0x3e00008
    ctx->pc = 0x19BF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BF20u: goto label_19bf20;
            case 0x19BF30u: goto label_19bf30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BF40u;
}
