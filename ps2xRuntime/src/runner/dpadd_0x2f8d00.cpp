#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dpadd
// Address: 0x2f8d00 - 0x2f8d58
void dpadd_0x2f8d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f8d00u;

    // 0x2f8d00: 0x27bdff70
    ctx->pc = 0x2f8d00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f8d04: 0xffa40060
    ctx->pc = 0x2f8d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x2f8d08: 0xffa50068
    ctx->pc = 0x2f8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x2f8d0c: 0x27a40060
    ctx->pc = 0x2f8d0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f8d10: 0xffb00070
    ctx->pc = 0x2f8d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x2f8d14: 0xffbf0080
    ctx->pc = 0x2f8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f8d18: 0xc0be288
    ctx->pc = 0x2F8D18u;
    SET_GPR_U32(ctx, 31, 0x2F8D20u);
    ctx->pc = 0x2F8D1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D20u; }
    }
    if (ctx->pc != 0x2F8D20u) { return; }
    ctx->pc = 0x2F8D20u;
    // 0x2f8d20: 0x27b00020
    ctx->pc = 0x2f8d20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f8d24: 0x27a40068
    ctx->pc = 0x2f8d24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x2f8d28: 0xc0be288
    ctx->pc = 0x2F8D28u;
    SET_GPR_U32(ctx, 31, 0x2F8D30u);
    ctx->pc = 0x2F8D2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x2f8a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D30u; }
    }
    if (ctx->pc != 0x2F8D30u) { return; }
    ctx->pc = 0x2F8D30u;
    // 0x2f8d30: 0x200282d
    ctx->pc = 0x2f8d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8d34: 0x27a60040
    ctx->pc = 0x2f8d34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2f8d38: 0xc0be2b0
    ctx->pc = 0x2F8D38u;
    SET_GPR_U32(ctx, 31, 0x2F8D40u);
    ctx->pc = 0x2F8D3Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8AC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x2f8ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D40u; }
    }
    if (ctx->pc != 0x2F8D40u) { return; }
    ctx->pc = 0x2F8D40u;
    // 0x2f8d40: 0xc0be23c
    ctx->pc = 0x2F8D40u;
    SET_GPR_U32(ctx, 31, 0x2F8D48u);
    ctx->pc = 0x2F8D44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F88F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x2f88f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F8D48u; }
    }
    if (ctx->pc != 0x2F8D48u) { return; }
    ctx->pc = 0x2F8D48u;
    // 0x2f8d48: 0xdfbf0080
    ctx->pc = 0x2f8d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f8d4c: 0xdfb00070
    ctx->pc = 0x2f8d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8d50: 0x3e00008
    ctx->pc = 0x2F8D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8D54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F8D58u;
}
