#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioEnemyDies
// Address: 0x25fa58 - 0x25fb10
void AudioEnemyDies_0x25fa58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fa58u;

    // 0x25fa58: 0x27bdfff0
    ctx->pc = 0x25fa58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fa5c: 0xffbf0000
    ctx->pc = 0x25fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fa60: 0x80302d
    ctx->pc = 0x25fa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fa64: 0x8cc30000
    ctx->pc = 0x25fa64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25fa68: 0x3c02003c
    ctx->pc = 0x25fa68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x25fa6c: 0x24422f88
    ctx->pc = 0x25fa6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12168));
    // 0x25fa70: 0x31880
    ctx->pc = 0x25fa70u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x25fa74: 0x621821
    ctx->pc = 0x25fa74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25fa78: 0x8c640000
    ctx->pc = 0x25fa78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25fa7c: 0x4800021
    ctx->pc = 0x25FA7Cu;
    {
        const bool branch_taken_0x25fa7c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FA80u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x25fa7c) {
            ctx->pc = 0x25FB04u;
            goto label_25fb04;
        }
    }
    ctx->pc = 0x25FA84u;
    // 0x25fa84: 0x14a20011
    ctx->pc = 0x25FA84u;
    {
        const bool branch_taken_0x25fa84 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x25FA88u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 538)));
        if (branch_taken_0x25fa84) {
            ctx->pc = 0x25FACCu;
            goto label_25facc;
        }
    }
    ctx->pc = 0x25FA8Cu;
    // 0x25fa8c: 0x28420002
    ctx->pc = 0x25fa8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fa90: 0x54400004
    ctx->pc = 0x25FA90u;
    {
        const bool branch_taken_0x25fa90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25fa90) {
            ctx->pc = 0x25FA94u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25FAA4u;
            goto label_25faa4;
        }
    }
    ctx->pc = 0x25FA98u;
    // 0x25fa98: 0x3c03003c
    ctx->pc = 0x25fa98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25fa9c: 0x10000002
    ctx->pc = 0x25FA9Cu;
    {
        const bool branch_taken_0x25fa9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FAA0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12384));
        if (branch_taken_0x25fa9c) {
            ctx->pc = 0x25FAA8u;
            goto label_25faa8;
        }
    }
    ctx->pc = 0x25FAA4u;
label_25faa4:
    // 0x25faa4: 0x24633040
    ctx->pc = 0x25faa4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12352));
label_25faa8:
    // 0x25faa8: 0x41080
    ctx->pc = 0x25faa8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25faac: 0x431021
    ctx->pc = 0x25faacu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fab0: 0x8c440000
    ctx->pc = 0x25fab0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fab4: 0x24c50040
    ctx->pc = 0x25fab4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 64));
    // 0x25fab8: 0x240600e0
    ctx->pc = 0x25fab8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fabc: 0xc088a26
    ctx->pc = 0x25FABCu;
    SET_GPR_U32(ctx, 31, 0x25FAC4u);
    ctx->pc = 0x25FAC0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 25));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FAC4u; }
    }
    if (ctx->pc != 0x25FAC4u) { return; }
    ctx->pc = 0x25FAC4u;
    // 0x25fac4: 0x10000010
    ctx->pc = 0x25FAC4u;
    {
        const bool branch_taken_0x25fac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FAC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25fac4) {
            ctx->pc = 0x25FB08u;
            goto label_25fb08;
        }
    }
    ctx->pc = 0x25FACCu;
label_25facc:
    // 0x25facc: 0x28420002
    ctx->pc = 0x25faccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25fad0: 0x54400004
    ctx->pc = 0x25FAD0u;
    {
        const bool branch_taken_0x25fad0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x25fad0) {
            ctx->pc = 0x25FAD4u;
            SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
            ctx->pc = 0x25FAE4u;
            goto label_25fae4;
        }
    }
    ctx->pc = 0x25FAD8u;
    // 0x25fad8: 0x3c03003c
    ctx->pc = 0x25fad8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x25fadc: 0x10000002
    ctx->pc = 0x25FADCu;
    {
        const bool branch_taken_0x25fadc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25FAE0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12448));
        if (branch_taken_0x25fadc) {
            ctx->pc = 0x25FAE8u;
            goto label_25fae8;
        }
    }
    ctx->pc = 0x25FAE4u;
label_25fae4:
    // 0x25fae4: 0x24633080
    ctx->pc = 0x25fae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12416));
label_25fae8:
    // 0x25fae8: 0x41080
    ctx->pc = 0x25fae8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x25faec: 0x431021
    ctx->pc = 0x25faecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25faf0: 0x8c440000
    ctx->pc = 0x25faf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25faf4: 0x24c50040
    ctx->pc = 0x25faf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 64));
    // 0x25faf8: 0x240600e0
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fafc: 0xc088a26
    ctx->pc = 0x25FAFCu;
    SET_GPR_U32(ctx, 31, 0x25FB04u);
    ctx->pc = 0x25FB00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 85));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB04u; }
    }
    if (ctx->pc != 0x25FB04u) { return; }
    ctx->pc = 0x25FB04u;
label_25fb04:
    // 0x25fb04: 0xdfbf0000
    ctx->pc = 0x25fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fb08:
    // 0x25fb08: 0x3e00008
    ctx->pc = 0x25FB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FB0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FAA4u: goto label_25faa4;
            case 0x25FAA8u: goto label_25faa8;
            case 0x25FACCu: goto label_25facc;
            case 0x25FAE4u: goto label_25fae4;
            case 0x25FAE8u: goto label_25fae8;
            case 0x25FB04u: goto label_25fb04;
            case 0x25FB08u: goto label_25fb08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FB10u;
}
