#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetPalette
// Address: 0x1ab240 - 0x1ab2b0
void nlSetPalette_0x1ab240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetPalette");


    ctx->pc = 0x1ab240u;

    // 0x1ab240: 0x27bdfff0
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab244: 0x7fbf0000
    ctx->pc = 0x1ab244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ab248: 0x8f838a54
    ctx->pc = 0x1ab248u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937172)));
    // 0x1ab24c: 0x83082a
    ctx->pc = 0x1ab24cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1ab250: 0x50200010
    ctx->pc = 0x1AB250u;
    {
        const bool branch_taken_0x1ab250 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ab250) {
            ctx->pc = 0x1AB254u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1AB294u;
            goto label_1ab294;
        }
    }
    ctx->pc = 0x1AB258u;
    // 0x1ab258: 0x41840
    ctx->pc = 0x1ab258u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ab25c: 0x641821
    ctx->pc = 0x1ab25cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ab260: 0x8f848a50
    ctx->pc = 0x1ab260u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937168)));
    // 0x1ab264: 0x34880
    ctx->pc = 0x1ab264u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ab268: 0x24030005
    ctx->pc = 0x1ab268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab26c: 0x892021
    ctx->pc = 0x1ab26cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1ab270: 0xac850000
    ctx->pc = 0x1ab270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1ab274: 0xac860004
    ctx->pc = 0x1ab274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1ab278: 0xa4870008
    ctx->pc = 0x1ab278u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x1ab27c: 0x11000009
    ctx->pc = 0x1AB27Cu;
    {
        const bool branch_taken_0x1ab27c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB280u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ab27c) {
            ctx->pc = 0x1AB2A4u;
            goto label_1ab2a4;
        }
    }
    ctx->pc = 0x1AB284u;
    // 0x1ab284: 0x8483000a
    ctx->pc = 0x1ab284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x1ab288: 0x34630002
    ctx->pc = 0x1ab288u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1ab28c: 0x10000005
    ctx->pc = 0x1AB28Cu;
    {
        const bool branch_taken_0x1ab28c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AB290u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ab28c) {
            ctx->pc = 0x1AB2A4u;
            goto label_1ab2a4;
        }
    }
    ctx->pc = 0x1AB294u;
label_1ab294:
    // 0x1ab294: 0x3c020026
    ctx->pc = 0x1ab294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1ab298: 0x70603628
    ctx->pc = 0x1ab298u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1ab29c: 0xc05114a
    ctx->pc = 0x1AB29Cu;
    SET_GPR_U32(ctx, 31, 0x1AB2A4u);
    ctx->pc = 0x1AB2A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294964720));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2A4u; }
        else if (ctx->pc != 0x1AB2A4u) { ctx->pc = 0x1AB2A4u; }
    }
    if (ctx->pc != 0x1AB2A4u) { return; }
    ctx->pc = 0x1AB2A4u;
label_1ab2a4:
    // 0x1ab2a4: 0x7bbf0000
    ctx->pc = 0x1ab2a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab2a8: 0x3e00008
    ctx->pc = 0x1AB2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB2ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AB294u: goto label_1ab294;
            case 0x1AB2A4u: goto label_1ab2a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AB2B0u;
}
