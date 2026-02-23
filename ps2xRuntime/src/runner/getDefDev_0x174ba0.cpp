#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getDefDev
// Address: 0x174ba0 - 0x174c14
void getDefDev_0x174ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getDefDev");


    ctx->pc = 0x174ba0u;

    // 0x174ba0: 0x27bdffc0
    ctx->pc = 0x174ba0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x174ba4: 0xffb00000
    ctx->pc = 0x174ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x174ba8: 0xffb20020
    ctx->pc = 0x174ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174bac: 0x3c10002e
    ctx->pc = 0x174bacu;
    SET_GPR_U32(ctx, 16, ((uint32_t)46 << 16));
    // 0x174bb0: 0xffb10010
    ctx->pc = 0x174bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x174bb4: 0x2612f4e8
    ctx->pc = 0x174bb4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 4294964456));
    // 0x174bb8: 0x80882d
    ctx->pc = 0x174bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bbc: 0xffbf0030
    ctx->pc = 0x174bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x174bc0: 0xc051554
    ctx->pc = 0x174BC0u;
    SET_GPR_U32(ctx, 31, 0x174BC8u);
    ctx->pc = 0x174BC4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174BC8u; }
        else if (ctx->pc != 0x174BC8u) { ctx->pc = 0x174BC8u; }
    }
    if (ctx->pc != 0x174BC8u) { return; }
    ctx->pc = 0x174BC8u;
    // 0x174bc8: 0x40302d
    ctx->pc = 0x174bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bcc: 0x8202f4e8
    ctx->pc = 0x174bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294964456)));
    // 0x174bd0: 0x5040000a
    ctx->pc = 0x174BD0u;
    {
        const bool branch_taken_0x174bd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174bd0) {
            ctx->pc = 0x174BD4u;
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x174BFCu;
            goto label_174bfc;
        }
    }
    ctx->pc = 0x174BD8u;
    // 0x174bd8: 0x220202d
    ctx->pc = 0x174bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174bdc: 0x240282d
    ctx->pc = 0x174bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174be0: 0xdfbf0030
    ctx->pc = 0x174be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174be4: 0x24c60001
    ctx->pc = 0x174be4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x174be8: 0xdfb20020
    ctx->pc = 0x174be8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174bec: 0xdfb10010
    ctx->pc = 0x174becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174bf0: 0xdfb00000
    ctx->pc = 0x174bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174bf4: 0x8050c90
    ctx->pc = 0x174BF4u;
    ctx->pc = 0x174BF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x143240u;
    memcpy_0x143240(rdram, ctx, runtime); return;
    ctx->pc = 0x174BFCu;
label_174bfc:
    // 0x174bfc: 0xdfbf0030
    ctx->pc = 0x174bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174c00: 0xdfb20020
    ctx->pc = 0x174c00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174c04: 0xdfb10010
    ctx->pc = 0x174c04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174c08: 0xdfb00000
    ctx->pc = 0x174c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174c0c: 0x3e00008
    ctx->pc = 0x174C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174C10u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174BFCu: goto label_174bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174C14u;
}
