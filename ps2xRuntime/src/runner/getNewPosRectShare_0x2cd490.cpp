#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewPosRectShare
// Address: 0x2cd490 - 0x2cd510
void getNewPosRectShare_0x2cd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd490u;

    // 0x2cd490: 0x27bdffc0
    ctx->pc = 0x2cd490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cd494: 0xffbf0030
    ctx->pc = 0x2cd494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd498: 0xffb20020
    ctx->pc = 0x2cd498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cd49c: 0xffb10010
    ctx->pc = 0x2cd49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cd4a0: 0xffb00000
    ctx->pc = 0x2cd4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd4a4: 0x80882d
    ctx->pc = 0x2cd4a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4a8: 0xa0902d
    ctx->pc = 0x2cd4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4ac: 0x96240032
    ctx->pc = 0x2cd4acu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x2cd4b0: 0xc0b32d4
    ctx->pc = 0x2CD4B0u;
    SET_GPR_U32(ctx, 31, 0x2CD4B8u);
    ctx->pc = 0x2CD4B4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    ctx->pc = 0x2CCB50u;
    {
        const uint32_t __entryPc = ctx->pc;
        getRandomIdx_0x2ccb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4B8u; }
    }
    if (ctx->pc != 0x2CD4B8u) { return; }
    ctx->pc = 0x2CD4B8u;
    // 0x2cd4b8: 0x40802d
    ctx->pc = 0x2cd4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4bc: 0x600000f
    ctx->pc = 0x2CD4BCu;
    {
        const bool branch_taken_0x2cd4bc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CD4C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2cd4bc) {
            ctx->pc = 0x2CD4FCu;
            goto label_2cd4fc;
        }
    }
    ctx->pc = 0x2CD4C4u;
    // 0x2cd4c4: 0x8e220018
    ctx->pc = 0x2cd4c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2cd4c8: 0x501021
    ctx->pc = 0x2cd4c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd4cc: 0x90420000
    ctx->pc = 0x2cd4ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cd4d0: 0x2c420002
    ctx->pc = 0x2cd4d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x2cd4d4: 0x10400007
    ctx->pc = 0x2CD4D4u;
    {
        const bool branch_taken_0x2cd4d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CD4D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x2cd4d4) {
            ctx->pc = 0x2CD4F4u;
            goto label_2cd4f4;
        }
    }
    ctx->pc = 0x2CD4DCu;
    // 0x2cd4dc: 0x2042018
    ctx->pc = 0x2cd4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cd4e0: 0x8e220010
    ctx->pc = 0x2cd4e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2cd4e4: 0x822021
    ctx->pc = 0x2cd4e4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cd4e8: 0x240282d
    ctx->pc = 0x2cd4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4ec: 0xc0b3544
    ctx->pc = 0x2CD4ECu;
    SET_GPR_U32(ctx, 31, 0x2CD4F4u);
    ctx->pc = 0x2CD4F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x2CD510u;
    {
        const uint32_t __entryPc = ctx->pc;
        getPosRect_0x2cd510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD4F4u; }
    }
    if (ctx->pc != 0x2CD4F4u) { return; }
    ctx->pc = 0x2CD4F4u;
label_2cd4f4:
    // 0x2cd4f4: 0x200102d
    ctx->pc = 0x2cd4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd4f8: 0xdfbf0030
    ctx->pc = 0x2cd4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cd4fc:
    // 0x2cd4fc: 0xdfb20020
    ctx->pc = 0x2cd4fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd500: 0xdfb10010
    ctx->pc = 0x2cd500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd504: 0xdfb00000
    ctx->pc = 0x2cd504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd508: 0x3e00008
    ctx->pc = 0x2CD508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD50Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD4F4u: goto label_2cd4f4;
            case 0x2CD4FCu: goto label_2cd4fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD510u;
}
