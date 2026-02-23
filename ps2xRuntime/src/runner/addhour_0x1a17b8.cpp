#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: addhour
// Address: 0x1a17b8 - 0x1a1824
void addhour_0x1a17b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("addhour");


    ctx->pc = 0x1a17b8u;

    // 0x1a17b8: 0x27bdffe0
    ctx->pc = 0x1a17b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a17bc: 0xffb00000
    ctx->pc = 0x1a17bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a17c0: 0x80802d
    ctx->pc = 0x1a17c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a17c4: 0x16000007
    ctx->pc = 0x1A17C4u;
    {
        const bool branch_taken_0x1a17c4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A17C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1a17c4) {
            ctx->pc = 0x1A17E4u;
            goto label_1a17e4;
        }
    }
    ctx->pc = 0x1A17CCu;
    // 0x1a17cc: 0x3c04002c
    ctx->pc = 0x1a17ccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a17d0: 0x3c06002c
    ctx->pc = 0x1a17d0u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x1a17d4: 0x2484d820
    ctx->pc = 0x1a17d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957088));
    // 0x1a17d8: 0x24c6d848
    ctx->pc = 0x1a17d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294957128));
    // 0x1a17dc: 0xc05003c
    ctx->pc = 0x1A17DCu;
    SET_GPR_U32(ctx, 31, 0x1A17E4u);
    ctx->pc = 0x1A17E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 385));
    ctx->pc = 0x1400F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___assert_0x1400f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A17E4u; }
        else if (ctx->pc != 0x1A17E4u) { ctx->pc = 0x1A17E4u; }
    }
    if (ctx->pc != 0x1A17E4u) { return; }
    ctx->pc = 0x1A17E4u;
label_1a17e4:
    // 0x1a17e4: 0x92020003
    ctx->pc = 0x1a17e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1a17e8: 0x24040018
    ctx->pc = 0x1a17e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1a17ec: 0x24420001
    ctx->pc = 0x1a17ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a17f0: 0x304300ff
    ctx->pc = 0x1a17f0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 255));
    // 0x1a17f4: 0x14640007
    ctx->pc = 0x1A17F4u;
    {
        const bool branch_taken_0x1a17f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A17F8u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1a17f4) {
            ctx->pc = 0x1A1814u;
            goto label_1a1814;
        }
    }
    ctx->pc = 0x1A17FCu;
    // 0x1a17fc: 0xa2000003
    ctx->pc = 0x1a17fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a1800: 0x200202d
    ctx->pc = 0x1a1800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1804: 0xdfbf0010
    ctx->pc = 0x1a1804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1808: 0xdfb00000
    ctx->pc = 0x1a1808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a180c: 0x806857e
    ctx->pc = 0x1A180Cu;
    ctx->pc = 0x1A1810u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1A15F8u;
    adddate_0x1a15f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A1814u;
label_1a1814:
    // 0x1a1814: 0xdfbf0010
    ctx->pc = 0x1a1814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1818: 0xdfb00000
    ctx->pc = 0x1a1818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a181c: 0x3e00008
    ctx->pc = 0x1A181Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1820u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A17E4u: goto label_1a17e4;
            case 0x1A1814u: goto label_1a1814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1824u;
}
