#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_NewObject
// Address: 0x2c6c10 - 0x2c6c6c
void MBOX_NewObject_0x2c6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6c10u;

    // 0x2c6c10: 0x27bdffc0
    ctx->pc = 0x2c6c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c6c14: 0xffbf0030
    ctx->pc = 0x2c6c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c6c18: 0xffb20020
    ctx->pc = 0x2c6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c6c1c: 0xffb10010
    ctx->pc = 0x2c6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c6c20: 0xffb00000
    ctx->pc = 0x2c6c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6c24: 0xa0802d
    ctx->pc = 0x2c6c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c28: 0xc0882d
    ctx->pc = 0x2c6c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c2c: 0xe0902d
    ctx->pc = 0x2c6c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c30: 0x2405ffff
    ctx->pc = 0x2c6c30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6c34: 0x2406ffff
    ctx->pc = 0x2c6c34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6c38: 0xc0b19fe
    ctx->pc = 0x2C6C38u;
    SET_GPR_U32(ctx, 31, 0x2C6C40u);
    ctx->pc = 0x2C6C3Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C40u; }
    }
    if (ctx->pc != 0x2C6C40u) { return; }
    ctx->pc = 0x2C6C40u;
    // 0x2c6c40: 0x40202d
    ctx->pc = 0x2c6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c44: 0x200282d
    ctx->pc = 0x2c6c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c48: 0x220302d
    ctx->pc = 0x2c6c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c4c: 0xc0b2236
    ctx->pc = 0x2C6C4Cu;
    SET_GPR_U32(ctx, 31, 0x2C6C54u);
    ctx->pc = 0x2C6C50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C54u; }
    }
    if (ctx->pc != 0x2C6C54u) { return; }
    ctx->pc = 0x2C6C54u;
    // 0x2c6c54: 0xdfbf0030
    ctx->pc = 0x2c6c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c6c58: 0xdfb20020
    ctx->pc = 0x2c6c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c6c5c: 0xdfb10010
    ctx->pc = 0x2c6c5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6c60: 0xdfb00000
    ctx->pc = 0x2c6c60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6c64: 0x3e00008
    ctx->pc = 0x2C6C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6C6Cu;
}
