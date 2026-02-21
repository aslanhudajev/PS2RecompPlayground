#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ActivateExit
// Address: 0x25b9e8 - 0x25ba40
void ActivateExit_0x25b9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b9e8u;

    // 0x25b9e8: 0x27bdffd0
    ctx->pc = 0x25b9e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b9ec: 0xffbf0020
    ctx->pc = 0x25b9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25b9f0: 0xffb10010
    ctx->pc = 0x25b9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25b9f4: 0xffb00000
    ctx->pc = 0x25b9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b9f8: 0x80802d
    ctx->pc = 0x25b9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b9fc: 0x8e110070
    ctx->pc = 0x25b9fcu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x25ba00: 0xa60000d8
    ctx->pc = 0x25ba00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 216), (uint16_t)GPR_U32(ctx, 0));
    // 0x25ba04: 0xae000070
    ctx->pc = 0x25ba04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x25ba08: 0x282d
    ctx->pc = 0x25ba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba0c: 0x302d
    ctx->pc = 0x25ba0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba10: 0xc0945b4
    ctx->pc = 0x25BA10u;
    SET_GPR_U32(ctx, 31, 0x25BA18u);
    ctx->pc = 0x25BA14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2516D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetItemGeo_0x2516d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BA18u; }
    }
    if (ctx->pc != 0x25BA18u) { return; }
    ctx->pc = 0x25BA18u;
    // 0x25ba18: 0x220202d
    ctx->pc = 0x25ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba1c: 0xc0b5494
    ctx->pc = 0x25BA1Cu;
    SET_GPR_U32(ctx, 31, 0x25BA24u);
    ctx->pc = 0x25BA20u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25BA24u; }
    }
    if (ctx->pc != 0x25BA24u) { return; }
    ctx->pc = 0x25BA24u;
    // 0x25ba24: 0x220202d
    ctx->pc = 0x25ba24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ba28: 0x24050001
    ctx->pc = 0x25ba28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ba2c: 0xdfbf0020
    ctx->pc = 0x25ba2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ba30: 0xdfb10010
    ctx->pc = 0x25ba30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ba34: 0xdfb00000
    ctx->pc = 0x25ba34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ba38: 0x80b3f1a
    ctx->pc = 0x25BA38u;
    ctx->pc = 0x25BA3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2CFC68u;
    MBRemoveNode_0x2cfc68(rdram, ctx, runtime); return;
    ctx->pc = 0x25BA40u;
}
