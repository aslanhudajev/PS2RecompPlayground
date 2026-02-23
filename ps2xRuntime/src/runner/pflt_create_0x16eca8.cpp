#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_create
// Address: 0x16eca8 - 0x16ed44
void pflt_create_0x16eca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_create");


    ctx->pc = 0x16eca8u;

    // 0x16eca8: 0x27bdffe0
    ctx->pc = 0x16eca8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ecac: 0xffb00000
    ctx->pc = 0x16ecacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ecb0: 0xffbf0010
    ctx->pc = 0x16ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ecb4: 0xc05bae0
    ctx->pc = 0x16ECB4u;
    SET_GPR_U32(ctx, 31, 0x16ECBCu);
    ctx->pc = 0x16ECB8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16EB80u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_create_0x16eb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ECBCu; }
        else if (ctx->pc != 0x16ECBCu) { ctx->pc = 0x16ECBCu; }
    }
    if (ctx->pc != 0x16ECBCu) { return; }
    ctx->pc = 0x16ECBCu;
    // 0x16ecbc: 0x40402d
    ctx->pc = 0x16ecbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecc0: 0x1100001c
    ctx->pc = 0x16ECC0u;
    {
        const bool branch_taken_0x16ecc0 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ECC4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ecc0) {
            ctx->pc = 0x16ED34u;
            goto label_16ed34;
        }
    }
    ctx->pc = 0x16ECC8u;
    // 0x16ecc8: 0x3c020023
    ctx->pc = 0x16ecc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16eccc: 0x382d
    ctx->pc = 0x16ecccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ecd0: 0x804372c0
    ctx->pc = 0x16ecd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 29376)));
    // 0x16ecd4: 0x1060000e
    ctx->pc = 0x16ECD4u;
    {
        const bool branch_taken_0x16ecd4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ECD8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 29376));
        if (branch_taken_0x16ecd4) {
            ctx->pc = 0x16ED10u;
            goto label_16ed10;
        }
    }
    ctx->pc = 0x16ECDCu;
    // 0x16ecdc: 0xa0302d
    ctx->pc = 0x16ecdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ece0: 0xa0202d
    ctx->pc = 0x16ece0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ece4: 0x0
    ctx->pc = 0x16ece4u;
    // NOP
label_16ece8:
    // 0x16ece8: 0x24e70001
    ctx->pc = 0x16ece8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x16ecec: 0x24c60090
    ctx->pc = 0x16ececu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 144));
    // 0x16ecf0: 0x28e30010
    ctx->pc = 0x16ecf0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 7), 16));
    // 0x16ecf4: 0x10600007
    ctx->pc = 0x16ECF4u;
    {
        const bool branch_taken_0x16ecf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ECF8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 144));
        if (branch_taken_0x16ecf4) {
            ctx->pc = 0x16ED14u;
            goto label_16ed14;
        }
    }
    ctx->pc = 0x16ECFCu;
    // 0x16ecfc: 0x80c20000
    ctx->pc = 0x16ecfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ed00: 0x1440fff9
    ctx->pc = 0x16ED00u;
    {
        const bool branch_taken_0x16ed00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16ED04u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ed00) {
            ctx->pc = 0x16ECE8u;
            goto label_16ece8;
        }
    }
    ctx->pc = 0x16ED08u;
    // 0x16ed08: 0x10000003
    ctx->pc = 0x16ED08u;
    {
        const bool branch_taken_0x16ed08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ED0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 16));
        if (branch_taken_0x16ed08) {
            ctx->pc = 0x16ED18u;
            goto label_16ed18;
        }
    }
    ctx->pc = 0x16ED10u;
label_16ed10:
    // 0x16ed10: 0x24030001
    ctx->pc = 0x16ed10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_16ed14:
    // 0x16ed14: 0xacb00014
    ctx->pc = 0x16ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 16));
label_16ed18:
    // 0x16ed18: 0x10600005
    ctx->pc = 0x16ED18u;
    {
        const bool branch_taken_0x16ed18 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ED1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 136), GPR_U32(ctx, 8));
        if (branch_taken_0x16ed18) {
            ctx->pc = 0x16ED30u;
            goto label_16ed30;
        }
    }
    ctx->pc = 0x16ED20u;
    // 0x16ed20: 0x24030001
    ctx->pc = 0x16ed20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ed24: 0xa0102d
    ctx->pc = 0x16ed24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed28: 0x10000002
    ctx->pc = 0x16ED28u;
    {
        const bool branch_taken_0x16ed28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16ED2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x16ed28) {
            ctx->pc = 0x16ED34u;
            goto label_16ed34;
        }
    }
    ctx->pc = 0x16ED30u;
label_16ed30:
    // 0x16ed30: 0x102d
    ctx->pc = 0x16ed30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ed34:
    // 0x16ed34: 0xdfbf0010
    ctx->pc = 0x16ed34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ed38: 0xdfb00000
    ctx->pc = 0x16ed38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ed3c: 0x3e00008
    ctx->pc = 0x16ED3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ECE8u: goto label_16ece8;
            case 0x16ED10u: goto label_16ed10;
            case 0x16ED14u: goto label_16ed14;
            case 0x16ED18u: goto label_16ed18;
            case 0x16ED30u: goto label_16ed30;
            case 0x16ED34u: goto label_16ed34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16ED44u;
}
