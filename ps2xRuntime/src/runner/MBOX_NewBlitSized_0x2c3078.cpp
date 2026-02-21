#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_NewBlitSized
// Address: 0x2c3078 - 0x2c30e4
void MBOX_NewBlitSized_0x2c3078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3078u;

    // 0x2c3078: 0x27bdffb0
    ctx->pc = 0x2c3078u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c307c: 0xffbf0040
    ctx->pc = 0x2c307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c3080: 0xffb30030
    ctx->pc = 0x2c3080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c3084: 0xffb20020
    ctx->pc = 0x2c3084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c3088: 0xffb10010
    ctx->pc = 0x2c3088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c308c: 0xffb00000
    ctx->pc = 0x2c308cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3090: 0xa0802d
    ctx->pc = 0x2c3090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3094: 0xc0882d
    ctx->pc = 0x2c3094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3098: 0xe0902d
    ctx->pc = 0x2c3098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c309c: 0x100982d
    ctx->pc = 0x2c309cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30a0: 0x282d
    ctx->pc = 0x2c30a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30a4: 0xc0b1ba8
    ctx->pc = 0x2C30A4u;
    SET_GPR_U32(ctx, 31, 0x2C30ACu);
    ctx->pc = 0x2C30A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C6EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindTexture_Err_0x2c6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30ACu; }
    }
    if (ctx->pc != 0x2C30ACu) { return; }
    ctx->pc = 0x2C30ACu;
    // 0x2c30ac: 0x202d
    ctx->pc = 0x2c30acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30b0: 0x40282d
    ctx->pc = 0x2c30b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30b4: 0x200302d
    ctx->pc = 0x2c30b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30b8: 0x220382d
    ctx->pc = 0x2c30b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30bc: 0x240402d
    ctx->pc = 0x2c30bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c30c0: 0xc0b0b54
    ctx->pc = 0x2C30C0u;
    SET_GPR_U32(ctx, 31, 0x2C30C8u);
    ctx->pc = 0x2C30C4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewBlit_0x2c2d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C30C8u; }
    }
    if (ctx->pc != 0x2C30C8u) { return; }
    ctx->pc = 0x2C30C8u;
    // 0x2c30c8: 0xdfbf0040
    ctx->pc = 0x2c30c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c30cc: 0xdfb30030
    ctx->pc = 0x2c30ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c30d0: 0xdfb20020
    ctx->pc = 0x2c30d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c30d4: 0xdfb10010
    ctx->pc = 0x2c30d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c30d8: 0xdfb00000
    ctx->pc = 0x2c30d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c30dc: 0x3e00008
    ctx->pc = 0x2C30DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C30E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C30E4u;
}
