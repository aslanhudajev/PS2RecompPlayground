#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBDrawDebugBlit
// Address: 0x2cff90 - 0x2d0024
void MBDrawDebugBlit_0x2cff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cff90u;

    // 0x2cff90: 0x27bdffb0
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cff94: 0xffbf0040
    ctx->pc = 0x2cff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cff98: 0x3c020036
    ctx->pc = 0x2cff98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2cff9c: 0x8c44dee0
    ctx->pc = 0x2cff9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2cffa0: 0x3c05003a
    ctx->pc = 0x2cffa0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2cffa4: 0x8ca20ca4
    ctx->pc = 0x2cffa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 3236)));
    // 0x2cffa8: 0x10400019
    ctx->pc = 0x2CFFA8u;
    {
        const bool branch_taken_0x2cffa8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CFFACu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 32432));
        if (branch_taken_0x2cffa8) {
            ctx->pc = 0x2D0010u;
            goto label_2d0010;
        }
    }
    ctx->pc = 0x2CFFB0u;
    // 0x2cffb0: 0x8c820040
    ctx->pc = 0x2cffb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2cffb4: 0x94420008
    ctx->pc = 0x2cffb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cffb8: 0x621023
    ctx->pc = 0x2cffb8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cffbc: 0xa7a20008
    ctx->pc = 0x2cffbcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cffc0: 0x8c820040
    ctx->pc = 0x2cffc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2cffc4: 0x9442000c
    ctx->pc = 0x2cffc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2cffc8: 0x621823
    ctx->pc = 0x2cffc8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cffcc: 0xa7a3000a
    ctx->pc = 0x2cffccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cffd0: 0x24020140
    ctx->pc = 0x2cffd0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
    // 0x2cffd4: 0xa7a20010
    ctx->pc = 0x2cffd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cffd8: 0xa7a20012
    ctx->pc = 0x2cffd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cffdc: 0x3c020010
    ctx->pc = 0x2cffdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x2cffe0: 0xafa2000c
    ctx->pc = 0x2cffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x2cffe4: 0xa7a00014
    ctx->pc = 0x2cffe4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cffe8: 0xa7a00018
    ctx->pc = 0x2cffe8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cffec: 0x24020014
    ctx->pc = 0x2cffecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x2cfff0: 0xa7a20016
    ctx->pc = 0x2cfff0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfff4: 0xa7a2001a
    ctx->pc = 0x2cfff4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cfff8: 0x3c028000
    ctx->pc = 0x2cfff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x2cfffc: 0x3442ff00
    ctx->pc = 0x2cfffcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65280));
    // 0x2d0000: 0xafa2001c
    ctx->pc = 0x2d0000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x2d0004: 0xafa00000
    ctx->pc = 0x2d0004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d0008: 0xafa00004
    ctx->pc = 0x2d0008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d000c: 0xaca00ca4
    ctx->pc = 0x2d000cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3236), GPR_U32(ctx, 0));
label_2d0010:
    // 0x2d0010: 0xc0b082e
    ctx->pc = 0x2D0010u;
    SET_GPR_U32(ctx, 31, 0x2D0018u);
    ctx->pc = 0x2D0014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C20B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawBlit_0x2c20b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D0018u; }
    }
    if (ctx->pc != 0x2D0018u) { return; }
    ctx->pc = 0x2D0018u;
    // 0x2d0018: 0xdfbf0040
    ctx->pc = 0x2d0018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d001c: 0x3e00008
    ctx->pc = 0x2D001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0020u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D0010u: goto label_2d0010;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D0024u;
}
