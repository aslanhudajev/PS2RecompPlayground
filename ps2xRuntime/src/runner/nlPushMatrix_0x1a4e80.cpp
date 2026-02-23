#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPushMatrix
// Address: 0x1a4e80 - 0x1a4f20
void nlPushMatrix_0x1a4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPushMatrix");


    ctx->pc = 0x1a4e80u;

    // 0x1a4e80: 0x27bdffe0
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4e84: 0x7fbf0010
    ctx->pc = 0x1a4e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a4e88: 0x7fb00000
    ctx->pc = 0x1a4e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a4e8c: 0x70808628
    ctx->pc = 0x1a4e8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1a4e90: 0xc06bf55
    ctx->pc = 0x1A4E90u;
    SET_GPR_U32(ctx, 31, 0x1A4E98u);
    ctx->pc = 0x1A4E94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E98u; }
        else if (ctx->pc != 0x1A4E98u) { ctx->pc = 0x1A4E98u; }
    }
    if (ctx->pc != 0x1A4E98u) { return; }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0x12000003
    ctx->pc = 0x1A4E98u;
    {
        const bool branch_taken_0x1a4e98 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a4e98) {
            ctx->pc = 0x1A4EA8u;
            goto label_1a4ea8;
        }
    }
    ctx->pc = 0x1A4EA0u;
    // 0x1a4ea0: 0xc06c038
    ctx->pc = 0x1A4EA0u;
    SET_GPR_U32(ctx, 31, 0x1A4EA8u);
    ctx->pc = 0x1A4EA4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1B00E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B00E0_0x1b00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EA8u; }
        else if (ctx->pc != 0x1A4EA8u) { ctx->pc = 0x1A4EA8u; }
    }
    if (ctx->pc != 0x1A4EA8u) { return; }
    ctx->pc = 0x1A4EA8u;
label_1a4ea8:
    // 0x1a4ea8: 0x3c010030
    ctx->pc = 0x1a4ea8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4eac: 0x84222160
    ctx->pc = 0x1a4eacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x1a4eb0: 0x24420001
    ctx->pc = 0x1a4eb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a4eb4: 0x3c010030
    ctx->pc = 0x1a4eb4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4eb8: 0xa4222160
    ctx->pc = 0x1a4eb8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8544), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4ebc: 0x21c3c
    ctx->pc = 0x1a4ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a4ec0: 0x3c010030
    ctx->pc = 0x1a4ec0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4ec4: 0x84222162
    ctx->pc = 0x1a4ec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 8546)));
    // 0x1a4ec8: 0x31c3f
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1a4ecc: 0x62082a
    ctx->pc = 0x1a4eccu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1a4ed0: 0x1020000f
    ctx->pc = 0x1A4ED0u;
    {
        const bool branch_taken_0x1a4ed0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A4ED4u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a4ed0) {
            ctx->pc = 0x1A4F10u;
            goto label_1a4f10;
        }
    }
    ctx->pc = 0x1A4ED8u;
    // 0x1a4ed8: 0x3c010030
    ctx->pc = 0x1a4ed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4edc: 0x8c222168
    ctx->pc = 0x1a4edcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 8552)));
    // 0x1a4ee0: 0x24420040
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 64));
    // 0x1a4ee4: 0x3c010030
    ctx->pc = 0x1a4ee4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4ee8: 0xac222168
    ctx->pc = 0x1a4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8552), GPR_U32(ctx, 2));
    // 0x1a4eec: 0x3c010030
    ctx->pc = 0x1a4eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4ef0: 0x9422216e
    ctx->pc = 0x1a4ef0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8558)));
    // 0x1a4ef4: 0x24420004
    ctx->pc = 0x1a4ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a4ef8: 0x3c010030
    ctx->pc = 0x1a4ef8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4efc: 0xa422216e
    ctx->pc = 0x1a4efcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8558), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4f00: 0x3c010030
    ctx->pc = 0x1a4f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a4f04: 0xc06c229
    ctx->pc = 0x1A4F04u;
    SET_GPR_U32(ctx, 31, 0x1A4F0Cu);
    ctx->pc = 0x1A4F08u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8558)));
    ctx->pc = 0x1B08A4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B08A4_0x1b08a4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F0Cu; }
        else if (ctx->pc != 0x1A4F0Cu) { ctx->pc = 0x1A4F0Cu; }
    }
    if (ctx->pc != 0x1A4F0Cu) { return; }
    ctx->pc = 0x1A4F0Cu;
    // 0x1a4f0c: 0x24020001
    ctx->pc = 0x1a4f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1a4f10:
    // 0x1a4f10: 0x7bbf0010
    ctx->pc = 0x1a4f10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4f14: 0x7bb00000
    ctx->pc = 0x1a4f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f18: 0x3e00008
    ctx->pc = 0x1A4F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4EA8u: goto label_1a4ea8;
            case 0x1A4F10u: goto label_1a4f10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4F20u;
}
