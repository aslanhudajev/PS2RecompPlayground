#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: deci2Putchar
// Address: 0x156100 - 0x1561b0
void deci2Putchar_0x156100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("deci2Putchar");


    ctx->pc = 0x156100u;

    // 0x156100: 0x27bdffc0
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x156104: 0xffb10010
    ctx->pc = 0x156104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x156108: 0x3c110023
    ctx->pc = 0x156108u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x15610c: 0xffb00000
    ctx->pc = 0x15610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156110: 0x8e25a028
    ctx->pc = 0x156110u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294942760)));
    // 0x156114: 0x80802d
    ctx->pc = 0x156114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156118: 0xffbf0030
    ctx->pc = 0x156118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15611c: 0x28a2007e
    ctx->pc = 0x15611cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 126));
    // 0x156120: 0x14400009
    ctx->pc = 0x156120u;
    {
        const bool branch_taken_0x156120 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x156124u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x156120) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x156128u;
    // 0x156128: 0x3c12002d
    ctx->pc = 0x156128u;
    SET_GPR_U32(ctx, 18, ((uint32_t)45 << 16));
    // 0x15612c: 0xae20a028
    ctx->pc = 0x15612cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942760), GPR_U32(ctx, 0));
    // 0x156130: 0x26427800
    ctx->pc = 0x156130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 30720));
    // 0x156134: 0x40202d
    ctx->pc = 0x156134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156138: 0xc0556e0
    ctx->pc = 0x156138u;
    SET_GPR_U32(ctx, 31, 0x156140u);
    ctx->pc = 0x15613Cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x155B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        kputs_0x155b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156140u; }
        else if (ctx->pc != 0x156140u) { ctx->pc = 0x156140u; }
    }
    if (ctx->pc != 0x156140u) { return; }
    ctx->pc = 0x156140u;
    // 0x156140: 0x10000002
    ctx->pc = 0x156140u;
    {
        const bool branch_taken_0x156140 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x156144u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4294942760)));
        if (branch_taken_0x156140) {
            ctx->pc = 0x15614Cu;
            goto label_15614c;
        }
    }
    ctx->pc = 0x156148u;
label_156148:
    // 0x156148: 0x3c12002d
    ctx->pc = 0x156148u;
    SET_GPR_U32(ctx, 18, ((uint32_t)45 << 16));
label_15614c:
    // 0x15614c: 0x2402000a
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x156150: 0x1602000d
    ctx->pc = 0x156150u;
    {
        const bool branch_taken_0x156150 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x156154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 30720));
        if (branch_taken_0x156150) {
            ctx->pc = 0x156188u;
            goto label_156188;
        }
    }
    ctx->pc = 0x156158u;
    // 0x156158: 0x26447800
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 30720));
    // 0x15615c: 0xae20a028
    ctx->pc = 0x15615cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942760), GPR_U32(ctx, 0));
    // 0x156160: 0xa41021
    ctx->pc = 0x156160u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x156164: 0xdfbf0030
    ctx->pc = 0x156164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x156168: 0xa0500000
    ctx->pc = 0x156168u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x15616c: 0x40182d
    ctx->pc = 0x15616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156170: 0xdfb20020
    ctx->pc = 0x156170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156174: 0xdfb10010
    ctx->pc = 0x156174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156178: 0xdfb00000
    ctx->pc = 0x156178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15617c: 0xa0600001
    ctx->pc = 0x15617cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x156180: 0x80556e0
    ctx->pc = 0x156180u;
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x155B80u;
    kputs_0x155b80(rdram, ctx, runtime); return;
    ctx->pc = 0x156188u;
label_156188:
    // 0x156188: 0x24a30001
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
    // 0x15618c: 0xae23a028
    ctx->pc = 0x15618cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942760), GPR_U32(ctx, 3));
    // 0x156190: 0xa21021
    ctx->pc = 0x156190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x156194: 0xa0500000
    ctx->pc = 0x156194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x156198: 0xdfbf0030
    ctx->pc = 0x156198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15619c: 0xdfb20020
    ctx->pc = 0x15619cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1561a0: 0xdfb10010
    ctx->pc = 0x1561a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1561a4: 0xdfb00000
    ctx->pc = 0x1561a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1561a8: 0x3e00008
    ctx->pc = 0x1561A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156148u: goto label_156148;
            case 0x15614Cu: goto label_15614c;
            case 0x156188u: goto label_156188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1561B0u;
}
