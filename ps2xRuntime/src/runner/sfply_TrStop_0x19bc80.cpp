#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_TrStop
// Address: 0x19bc80 - 0x19bcdc
void sfply_TrStop_0x19bc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_TrStop");


    ctx->pc = 0x19bc80u;

    // 0x19bc80: 0x27bdffe0
    ctx->pc = 0x19bc80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bc84: 0x24030004
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x19bc88: 0xffb00000
    ctx->pc = 0x19bc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bc8c: 0xffbf0010
    ctx->pc = 0x19bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bc90: 0x80802d
    ctx->pc = 0x19bc90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc94: 0x8e020040
    ctx->pc = 0x19bc94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bc98: 0x14430009
    ctx->pc = 0x19BC98u;
    {
        const bool branch_taken_0x19bc98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x19BC9Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19bc98) {
            ctx->pc = 0x19BCC0u;
            goto label_19bcc0;
        }
    }
    ctx->pc = 0x19BCA0u;
    // 0x19bca0: 0x24050007
    ctx->pc = 0x19bca0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bca4: 0x24060007
    ctx->pc = 0x19bca4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19bca8: 0x382d
    ctx->pc = 0x19bca8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcac: 0xc067cca
    ctx->pc = 0x19BCACu;
    SET_GPR_U32(ctx, 31, 0x19BCB4u);
    ctx->pc = 0x19BCB0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F328u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTRN_CallTrtTrif_0x19f328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCB4u; }
        else if (ctx->pc != 0x19BCB4u) { ctx->pc = 0x19BCB4u; }
    }
    if (ctx->pc != 0x19BCB4u) { return; }
    ctx->pc = 0x19BCB4u;
    // 0x19bcb4: 0x14400006
    ctx->pc = 0x19BCB4u;
    {
        const bool branch_taken_0x19bcb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19BCB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19bcb4) {
            ctx->pc = 0x19BCD0u;
            goto label_19bcd0;
        }
    }
    ctx->pc = 0x19BCBCu;
    // 0x19bcbc: 0x24030001
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_19bcc0:
    // 0x19bcc0: 0x102d
    ctx->pc = 0x19bcc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcc4: 0xae030044
    ctx->pc = 0x19bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x19bcc8: 0xae030040
    ctx->pc = 0x19bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x19bccc: 0xdfbf0010
    ctx->pc = 0x19bcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bcd0:
    // 0x19bcd0: 0xdfb00000
    ctx->pc = 0x19bcd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bcd4: 0x3e00008
    ctx->pc = 0x19BCD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BCD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BCC0u: goto label_19bcc0;
            case 0x19BCD0u: goto label_19bcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BCDCu;
}
