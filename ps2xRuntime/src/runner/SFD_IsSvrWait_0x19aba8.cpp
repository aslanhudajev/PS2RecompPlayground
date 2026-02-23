#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_IsSvrWait
// Address: 0x19aba8 - 0x19ac18
void SFD_IsSvrWait_0x19aba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_IsSvrWait");


    ctx->pc = 0x19aba8u;

    // 0x19aba8: 0x27bdffc0
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19abac: 0x3c020026
    ctx->pc = 0x19abacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x19abb0: 0xffb10010
    ctx->pc = 0x19abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19abb4: 0x2442ddc0
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294958528));
    // 0x19abb8: 0xffbf0030
    ctx->pc = 0x19abb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19abbc: 0x882d
    ctx->pc = 0x19abbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19abc0: 0xffb00000
    ctx->pc = 0x19abc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19abc4: 0xffb20020
    ctx->pc = 0x19abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19abc8: 0x8c520174
    ctx->pc = 0x19abc8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x19abcc: 0x1a40000b
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x19ABD0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 376)));
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABFCu;
            goto label_19abfc;
        }
    }
    ctx->pc = 0x19ABD4u;
    // 0x19abd4: 0x80802d
    ctx->pc = 0x19abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19abd8:
    // 0x19abd8: 0xc066ae0
    ctx->pc = 0x19ABD8u;
    SET_GPR_U32(ctx, 31, 0x19ABE0u);
    ctx->pc = 0x19ABDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19AB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_IsHnSvrWait_0x19ab80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ABE0u; }
        else if (ctx->pc != 0x19ABE0u) { ctx->pc = 0x19ABE0u; }
    }
    if (ctx->pc != 0x19ABE0u) { return; }
    ctx->pc = 0x19ABE0u;
    // 0x19abe0: 0x14400003
    ctx->pc = 0x19ABE0u;
    {
        const bool branch_taken_0x19abe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19ABE4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x19abe0) {
            ctx->pc = 0x19ABF0u;
            goto label_19abf0;
        }
    }
    ctx->pc = 0x19ABE8u;
    // 0x19abe8: 0x10000005
    ctx->pc = 0x19ABE8u;
    {
        const bool branch_taken_0x19abe8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19ABECu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19abe8) {
            ctx->pc = 0x19AC00u;
            goto label_19ac00;
        }
    }
    ctx->pc = 0x19ABF0u;
label_19abf0:
    // 0x19abf0: 0x232102a
    ctx->pc = 0x19abf0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x19abf4: 0x1440fff8
    ctx->pc = 0x19ABF4u;
    {
        const bool branch_taken_0x19abf4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19ABF8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 26664));
        if (branch_taken_0x19abf4) {
            ctx->pc = 0x19ABD8u;
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABFCu;
label_19abfc:
    // 0x19abfc: 0x24020001
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_19ac00:
    // 0x19ac00: 0xdfbf0030
    ctx->pc = 0x19ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ac04: 0xdfb20020
    ctx->pc = 0x19ac04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ac08: 0xdfb10010
    ctx->pc = 0x19ac08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ac0c: 0xdfb00000
    ctx->pc = 0x19ac0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ac10: 0x3e00008
    ctx->pc = 0x19AC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19ABD8u: goto label_19abd8;
            case 0x19ABF0u: goto label_19abf0;
            case 0x19ABFCu: goto label_19abfc;
            case 0x19AC00u: goto label_19ac00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AC18u;
}
