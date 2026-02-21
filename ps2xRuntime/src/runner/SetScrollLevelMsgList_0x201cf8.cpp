#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetScrollLevelMsgList
// Address: 0x201cf8 - 0x201d40
void SetScrollLevelMsgList_0x201cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201cf8u;

    // 0x201cf8: 0x27bdffc0
    ctx->pc = 0x201cf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x201cfc: 0xffbf0030
    ctx->pc = 0x201cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x201d00: 0xffb00020
    ctx->pc = 0x201d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x201d04: 0x80802d
    ctx->pc = 0x201d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d08: 0xa0302d
    ctx->pc = 0x201d08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d0c: 0x3a0202d
    ctx->pc = 0x201d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d10: 0x3c05003a
    ctx->pc = 0x201d10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x201d14: 0xc0b6252
    ctx->pc = 0x201D14u;
    SET_GPR_U32(ctx, 31, 0x201D1Cu);
    ctx->pc = 0x201D18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 18384));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D1Cu; }
    }
    if (ctx->pc != 0x201D1Cu) { return; }
    ctx->pc = 0x201D1Cu;
    // 0x201d1c: 0x200202d
    ctx->pc = 0x201d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d20: 0xc080726
    ctx->pc = 0x201D20u;
    SET_GPR_U32(ctx, 31, 0x201D28u);
    ctx->pc = 0x201D24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201D28u; }
    }
    if (ctx->pc != 0x201D28u) { return; }
    ctx->pc = 0x201D28u;
    // 0x201d28: 0x3c030031
    ctx->pc = 0x201d28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x201d2c: 0xac62f278
    ctx->pc = 0x201d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963832), GPR_U32(ctx, 2));
    // 0x201d30: 0xdfbf0030
    ctx->pc = 0x201d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201d34: 0xdfb00020
    ctx->pc = 0x201d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201d38: 0x3e00008
    ctx->pc = 0x201D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201D40u;
}
