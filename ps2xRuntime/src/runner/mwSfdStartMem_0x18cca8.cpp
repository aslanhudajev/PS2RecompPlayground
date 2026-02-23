#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStartMem
// Address: 0x18cca8 - 0x18cd18
void mwSfdStartMem_0x18cca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStartMem");


    ctx->pc = 0x18cca8u;

label_18cca8:
    // 0x18cca8: 0x27bdffc0
    ctx->pc = 0x18cca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_18ccac:
    // 0x18ccac: 0xffb00000
    ctx->pc = 0x18ccacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18ccb0:
    // 0x18ccb0: 0x80802d
    ctx->pc = 0x18ccb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ccb4:
    // 0x18ccb4: 0xffb20020
    ctx->pc = 0x18ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_18ccb8:
    // 0x18ccb8: 0xffb10010
    ctx->pc = 0x18ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_18ccbc:
    // 0x18ccbc: 0xc0902d
    ctx->pc = 0x18ccbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18ccc0:
    // 0x18ccc0: 0xffbf0030
    ctx->pc = 0x18ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18ccc4:
    // 0x18ccc4: 0xc06335a
label_18ccc8:
    if (ctx->pc == 0x18CCC8u) {
        ctx->pc = 0x18CCC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18CCCCu;
        goto label_18cccc;
    }
    ctx->pc = 0x18CCC4u;
    SET_GPR_U32(ctx, 31, 0x18CCCCu);
    ctx->pc = 0x18CCC8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdStopDec_0x18cd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCCCu; }
        else if (ctx->pc != 0x18CCCCu) { ctx->pc = 0x18CCCCu; }
    }
    if (ctx->pc != 0x18CCCCu) { return; }
    ctx->pc = 0x18CCCCu;
label_18cccc:
    // 0x18cccc: 0x8e04003c
    ctx->pc = 0x18ccccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_18ccd0:
    // 0x18ccd0: 0x8c830000
    ctx->pc = 0x18ccd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18ccd4:
    // 0x18ccd4: 0x8c62000c
    ctx->pc = 0x18ccd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18ccd8:
    // 0x18ccd8: 0x40f809
label_18ccdc:
    if (ctx->pc == 0x18CCDCu) {
        ctx->pc = 0x18CCE0u;
        goto label_18cce0;
    }
    ctx->pc = 0x18CCD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CCE0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CCA8u: goto label_18cca8;
            case 0x18CCACu: goto label_18ccac;
            case 0x18CCB0u: goto label_18ccb0;
            case 0x18CCB4u: goto label_18ccb4;
            case 0x18CCB8u: goto label_18ccb8;
            case 0x18CCBCu: goto label_18ccbc;
            case 0x18CCC0u: goto label_18ccc0;
            case 0x18CCC4u: goto label_18ccc4;
            case 0x18CCC8u: goto label_18ccc8;
            case 0x18CCCCu: goto label_18cccc;
            case 0x18CCD0u: goto label_18ccd0;
            case 0x18CCD4u: goto label_18ccd4;
            case 0x18CCD8u: goto label_18ccd8;
            case 0x18CCDCu: goto label_18ccdc;
            case 0x18CCE0u: goto label_18cce0;
            case 0x18CCE4u: goto label_18cce4;
            case 0x18CCE8u: goto label_18cce8;
            case 0x18CCECu: goto label_18ccec;
            case 0x18CCF0u: goto label_18ccf0;
            case 0x18CCF4u: goto label_18ccf4;
            case 0x18CCF8u: goto label_18ccf8;
            case 0x18CCFCu: goto label_18ccfc;
            case 0x18CD00u: goto label_18cd00;
            case 0x18CD04u: goto label_18cd04;
            case 0x18CD08u: goto label_18cd08;
            case 0x18CD0Cu: goto label_18cd0c;
            case 0x18CD10u: goto label_18cd10;
            case 0x18CD14u: goto label_18cd14;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18CCE0u; }
            if (ctx->pc != 0x18CCE0u) { return; }
        }
    }
    ctx->pc = 0x18CCE0u;
label_18cce0:
    // 0x18cce0: 0x240282d
    ctx->pc = 0x18cce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18cce4:
    // 0x18cce4: 0xc05efec
label_18cce8:
    if (ctx->pc == 0x18CCE8u) {
        ctx->pc = 0x18CCE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18CCECu;
        goto label_18ccec;
    }
    ctx->pc = 0x18CCE4u;
    SET_GPR_U32(ctx, 31, 0x18CCECu);
    ctx->pc = 0x18CCE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Create_0x17bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CCECu; }
        else if (ctx->pc != 0x18CCECu) { ctx->pc = 0x18CCECu; }
    }
    if (ctx->pc != 0x18CCECu) { return; }
    ctx->pc = 0x18CCECu;
label_18ccec:
    // 0x18ccec: 0xae110044
    ctx->pc = 0x18ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_18ccf0:
    // 0x18ccf0: 0x200202d
    ctx->pc = 0x18ccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ccf4:
    // 0x18ccf4: 0xae120048
    ctx->pc = 0x18ccf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 18));
label_18ccf8:
    // 0x18ccf8: 0xae020038
    ctx->pc = 0x18ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_18ccfc:
    // 0x18ccfc: 0xae02003c
    ctx->pc = 0x18ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_18cd00:
    // 0x18cd00: 0xdfbf0030
    ctx->pc = 0x18cd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18cd04:
    // 0x18cd04: 0xdfb20020
    ctx->pc = 0x18cd04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18cd08:
    // 0x18cd08: 0xdfb10010
    ctx->pc = 0x18cd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18cd0c:
    // 0x18cd0c: 0xdfb00000
    ctx->pc = 0x18cd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cd10:
    // 0x18cd10: 0x8063284
label_18cd14:
    if (ctx->pc == 0x18CD14u) {
        ctx->pc = 0x18CD14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x18CD18u;
        goto label_fallthrough_0x18cd10;
    }
    ctx->pc = 0x18CD10u;
    ctx->pc = 0x18CD14u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x18CA10u;
    mw_sfd_start_ex_0x18ca10(rdram, ctx, runtime); return;
label_fallthrough_0x18cd10:
    ctx->pc = 0x18CD18u;
}
