#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFPTS_ReadPtsQue
// Address: 0x19c140 - 0x19c1a8
void SFPTS_ReadPtsQue_0x19c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFPTS_ReadPtsQue");


    ctx->pc = 0x19c140u;

    // 0x19c140: 0x24020388
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19c144: 0x27bdfff0
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c148: 0xa22818
    ctx->pc = 0x19c148u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x19c14c: 0xffbf0000
    ctx->pc = 0x19c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c150: 0xe0482d
    ctx->pc = 0x19c150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c154: 0x2402ffff
    ctx->pc = 0x19c154u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c158: 0x24840d34
    ctx->pc = 0x19c158u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x19c15c: 0xad220000
    ctx->pc = 0x19c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x19c160: 0x852021
    ctx->pc = 0x19c160u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19c164: 0x24830040
    ctx->pc = 0x19c164u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 64));
    // 0x19c168: 0x8c820040
    ctx->pc = 0x19c168u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x19c16c: 0x24840010
    ctx->pc = 0x19c16cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x19c170: 0x8c88000c
    ctx->pc = 0x19c170u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19c174: 0x10400008
    ctx->pc = 0x19C174u;
    {
        const bool branch_taken_0x19c174 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19C178u;
        SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 8)));
        if (branch_taken_0x19c174) {
            ctx->pc = 0x19C198u;
            goto label_19c198;
        }
    }
    ctx->pc = 0x19C17Cu;
    // 0x19c17c: 0xe81021
    ctx->pc = 0x19c17cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x19c180: 0xc82823
    ctx->pc = 0x19c180u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x19c184: 0xc2102b
    ctx->pc = 0x19c184u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x19c188: 0x60202d
    ctx->pc = 0x19c188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c18c: 0xc2280b
    ctx->pc = 0x19c18cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x19c190: 0xc06706a
    ctx->pc = 0x19C190u;
    SET_GPR_U32(ctx, 31, 0x19C198u);
    ctx->pc = 0x19C194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C1A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfpts_ReadPtsQueSub_0x19c1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C198u; }
        else if (ctx->pc != 0x19C198u) { ctx->pc = 0x19C198u; }
    }
    if (ctx->pc != 0x19C198u) { return; }
    ctx->pc = 0x19C198u;
label_19c198:
    // 0x19c198: 0x102d
    ctx->pc = 0x19c198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c19c: 0xdfbf0000
    ctx->pc = 0x19c19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c1a0: 0x3e00008
    ctx->pc = 0x19C1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19C198u: goto label_19c198;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C1A8u;
}
