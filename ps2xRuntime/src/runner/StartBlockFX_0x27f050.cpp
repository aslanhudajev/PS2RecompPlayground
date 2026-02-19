#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartBlockFX
// Address: 0x27f050 - 0x27f114
void StartBlockFX_0x27f050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27f050u;

    // 0x27f050: 0x27bdffb0
    ctx->pc = 0x27f050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f054: 0xffbf0040
    ctx->pc = 0x27f054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27f058: 0xffb30030
    ctx->pc = 0x27f058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27f05c: 0xffb20020
    ctx->pc = 0x27f05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27f060: 0xffb10010
    ctx->pc = 0x27f060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27f064: 0xffb00000
    ctx->pc = 0x27f064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27f068: 0x80982d
    ctx->pc = 0x27f068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f06c: 0x24040042
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 66));
    // 0x27f070: 0x282d
    ctx->pc = 0x27f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f074: 0x302d
    ctx->pc = 0x27f074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f078: 0x3c070008
    ctx->pc = 0x27f078u;
    SET_GPR_U32(ctx, 7, ((uint32_t)8 << 16));
    // 0x27f07c: 0xc09f5fa
    ctx->pc = 0x27F07Cu;
    SET_GPR_U32(ctx, 31, 0x27F084u);
    ctx->pc = 0x27F080u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 2432));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F084u; }
    }
    if (ctx->pc != 0x27F084u) { return; }
    ctx->pc = 0x27F084u;
    // 0x27f084: 0x40902d
    ctx->pc = 0x27f084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f088: 0x640001a
    ctx->pc = 0x27F088u;
    {
        const bool branch_taken_0x27f088 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27F08Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27f088) {
            ctx->pc = 0x27F0F4u;
            goto label_27f0f4;
        }
    }
    ctx->pc = 0x27F090u;
    // 0x27f090: 0x24420eb0
    ctx->pc = 0x27f090u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27f094: 0x241100f0
    ctx->pc = 0x27f094u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27f098: 0x2518818
    ctx->pc = 0x27f098u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f09c: 0x2228821
    ctx->pc = 0x27f09cu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x27f0a0: 0x3c030035
    ctx->pc = 0x27f0a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x27f0a4: 0x2463f540
    ctx->pc = 0x27f0a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294964544));
    // 0x27f0a8: 0x3c020032
    ctx->pc = 0x27f0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x27f0ac: 0x24421bc0
    ctx->pc = 0x27f0acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x27f0b0: 0x24102b00
    ctx->pc = 0x27f0b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x27f0b4: 0x2708018
    ctx->pc = 0x27f0b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27f0b8: 0x2028021
    ctx->pc = 0x27f0b8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x27f0bc: 0x8e020004
    ctx->pc = 0x27f0bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27f0c0: 0x21080
    ctx->pc = 0x27f0c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x27f0c4: 0x431021
    ctx->pc = 0x27f0c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27f0c8: 0x8e240014
    ctx->pc = 0x27f0c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27f0cc: 0x8c450000
    ctx->pc = 0x27f0ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f0d0: 0xc0b4180
    ctx->pc = 0x27F0D0u;
    SET_GPR_U32(ctx, 31, 0x27F0D8u);
    ctx->pc = 0x27F0D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0600u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetColor_0x2d0600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0D8u; }
    }
    if (ctx->pc != 0x27F0D8u) { return; }
    ctx->pc = 0x27F0D8u;
    // 0x27f0d8: 0x8e240014
    ctx->pc = 0x27f0d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x27f0dc: 0x24050040
    ctx->pc = 0x27f0dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x27f0e0: 0xc0b40c0
    ctx->pc = 0x27F0E0u;
    SET_GPR_U32(ctx, 31, 0x27F0E8u);
    ctx->pc = 0x27F0E4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0E8u; }
    }
    if (ctx->pc != 0x27F0E8u) { return; }
    ctx->pc = 0x27F0E8u;
    // 0x27f0e8: 0x240202d
    ctx->pc = 0x27f0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0ec: 0xc09f732
    ctx->pc = 0x27F0ECu;
    SET_GPR_U32(ctx, 31, 0x27F0F4u);
    ctx->pc = 0x27F0F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F0F4u; }
    }
    if (ctx->pc != 0x27F0F4u) { return; }
    ctx->pc = 0x27F0F4u;
label_27f0f4:
    // 0x27f0f4: 0x240102d
    ctx->pc = 0x27f0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0f8: 0xdfbf0040
    ctx->pc = 0x27f0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f0fc: 0xdfb30030
    ctx->pc = 0x27f0fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f100: 0xdfb20020
    ctx->pc = 0x27f100u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f104: 0xdfb10010
    ctx->pc = 0x27f104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f108: 0xdfb00000
    ctx->pc = 0x27f108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f10c: 0x3e00008
    ctx->pc = 0x27F10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F110u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F0F4u: goto label_27f0f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F114u;
}
