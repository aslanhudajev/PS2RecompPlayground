#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemGenDesc
// Address: 0x251350 - 0x2513d8
void ItemGenDesc_0x251350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x251350u;

    // 0x251350: 0x27bdffd0
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251354: 0xffbf0020
    ctx->pc = 0x251354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x251358: 0xffb10010
    ctx->pc = 0x251358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25135c: 0xffb00000
    ctx->pc = 0x25135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x251360: 0x80882d
    ctx->pc = 0x251360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251364: 0xa0802d
    ctx->pc = 0x251364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251368: 0x3c05003b
    ctx->pc = 0x251368u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x25136c: 0xc0bf194
    ctx->pc = 0x25136Cu;
    SET_GPR_U32(ctx, 31, 0x251374u);
    ctx->pc = 0x251370u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936088));
    ctx->pc = 0x2FC650u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcasecmp_0x2fc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251374u; }
    }
    if (ctx->pc != 0x251374u) { return; }
    ctx->pc = 0x251374u;
    // 0x251374: 0x10400014
    ctx->pc = 0x251374u;
    {
        const bool branch_taken_0x251374 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251378u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x251374) {
            ctx->pc = 0x2513C8u;
            goto label_2513c8;
        }
    }
    ctx->pc = 0x25137Cu;
    // 0x25137c: 0x860200f0
    ctx->pc = 0x25137cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x251380: 0x2842ffff
    ctx->pc = 0x251380u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4294967295));
    // 0x251384: 0x10400007
    ctx->pc = 0x251384u;
    {
        const bool branch_taken_0x251384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x251388u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x251384) {
            ctx->pc = 0x2513A4u;
            goto label_2513a4;
        }
    }
    ctx->pc = 0x25138Cu;
    // 0x25138c: 0x3c05003b
    ctx->pc = 0x25138cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x251390: 0x24a58620
    ctx->pc = 0x251390u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936096));
    // 0x251394: 0xc0b6252
    ctx->pc = 0x251394u;
    SET_GPR_U32(ctx, 31, 0x25139Cu);
    ctx->pc = 0x251398u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25139Cu; }
    }
    if (ctx->pc != 0x25139Cu) { return; }
    ctx->pc = 0x25139Cu;
    // 0x25139c: 0x1000000a
    ctx->pc = 0x25139Cu;
    {
        const bool branch_taken_0x25139c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2513A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x25139c) {
            ctx->pc = 0x2513C8u;
            goto label_2513c8;
        }
    }
    ctx->pc = 0x2513A4u;
label_2513a4:
    // 0x2513a4: 0xc08dc08
    ctx->pc = 0x2513A4u;
    SET_GPR_U32(ctx, 31, 0x2513ACu);
    ctx->pc = 0x2513A8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->pc = 0x237020u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyTypePrefix_0x237020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513ACu; }
    }
    if (ctx->pc != 0x2513ACu) { return; }
    ctx->pc = 0x2513ACu;
    // 0x2513ac: 0x220202d
    ctx->pc = 0x2513acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513b0: 0x3c05003b
    ctx->pc = 0x2513b0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2513b4: 0x24a58630
    ctx->pc = 0x2513b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294936112));
    // 0x2513b8: 0x40302d
    ctx->pc = 0x2513b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2513bc: 0xc0b6252
    ctx->pc = 0x2513BCu;
    SET_GPR_U32(ctx, 31, 0x2513C4u);
    ctx->pc = 0x2513C0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 246)));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2513C4u; }
    }
    if (ctx->pc != 0x2513C4u) { return; }
    ctx->pc = 0x2513C4u;
    // 0x2513c4: 0xdfbf0020
    ctx->pc = 0x2513c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2513c8:
    // 0x2513c8: 0xdfb10010
    ctx->pc = 0x2513c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2513cc: 0xdfb00000
    ctx->pc = 0x2513ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2513d0: 0x3e00008
    ctx->pc = 0x2513D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2513D4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2513A4u: goto label_2513a4;
            case 0x2513C8u: goto label_2513c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2513D8u;
}
