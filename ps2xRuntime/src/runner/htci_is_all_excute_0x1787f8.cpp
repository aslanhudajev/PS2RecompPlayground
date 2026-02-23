#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_is_all_excute
// Address: 0x1787f8 - 0x178868
void htci_is_all_excute_0x1787f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_is_all_excute");


    ctx->pc = 0x1787f8u;

    // 0x1787f8: 0x27bdffc0
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1787fc: 0x3c020024
    ctx->pc = 0x1787fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x178800: 0xffb00000
    ctx->pc = 0x178800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178804: 0xffb20020
    ctx->pc = 0x178804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x178808: 0x2450a120
    ctx->pc = 0x178808u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x17880c: 0xffb10010
    ctx->pc = 0x17880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x178810: 0x24120001
    ctx->pc = 0x178810u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x178814: 0xffbf0030
    ctx->pc = 0x178814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x178818: 0x261101d4
    ctx->pc = 0x178818u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 468));
    // 0x17881c: 0x82020000
    ctx->pc = 0x17881cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_178820:
    // 0x178820: 0x54520007
    ctx->pc = 0x178820u;
    {
        const bool branch_taken_0x178820 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x178820) {
            ctx->pc = 0x178824u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
            ctx->pc = 0x178840u;
            goto label_178840;
        }
    }
    ctx->pc = 0x178828u;
    // 0x178828: 0xc05e1e8
    ctx->pc = 0x178828u;
    SET_GPR_U32(ctx, 31, 0x178830u);
    ctx->pc = 0x17882Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1787A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        htci_is_one_excute_0x1787a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178830u; }
        else if (ctx->pc != 0x178830u) { ctx->pc = 0x178830u; }
    }
    if (ctx->pc != 0x178830u) { return; }
    ctx->pc = 0x178830u;
    // 0x178830: 0x14400003
    ctx->pc = 0x178830u;
    {
        const bool branch_taken_0x178830 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x178834u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
        if (branch_taken_0x178830) {
            ctx->pc = 0x178840u;
            goto label_178840;
        }
    }
    ctx->pc = 0x178838u;
    // 0x178838: 0x10000005
    ctx->pc = 0x178838u;
    {
        const bool branch_taken_0x178838 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17883Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x178838) {
            ctx->pc = 0x178850u;
            goto label_178850;
        }
    }
    ctx->pc = 0x178840u;
label_178840:
    // 0x178840: 0x211102a
    ctx->pc = 0x178840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x178844: 0x5440fff6
    ctx->pc = 0x178844u;
    {
        const bool branch_taken_0x178844 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178844) {
            ctx->pc = 0x178848u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x178820u;
            goto label_178820;
        }
    }
    ctx->pc = 0x17884Cu;
    // 0x17884c: 0x24020001
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_178850:
    // 0x178850: 0xdfbf0030
    ctx->pc = 0x178850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178854: 0xdfb20020
    ctx->pc = 0x178854u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178858: 0xdfb10010
    ctx->pc = 0x178858u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17885c: 0xdfb00000
    ctx->pc = 0x17885cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178860: 0x3e00008
    ctx->pc = 0x178860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178864u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178820u: goto label_178820;
            case 0x178840u: goto label_178840;
            case 0x178850u: goto label_178850;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178868u;
}
