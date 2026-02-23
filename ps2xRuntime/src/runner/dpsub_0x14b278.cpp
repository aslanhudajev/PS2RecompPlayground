#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dpsub
// Address: 0x14b278 - 0x14b2dc
void dpsub_0x14b278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dpsub");


    ctx->pc = 0x14b278u;

    // 0x14b278: 0x27bdff70
    ctx->pc = 0x14b278u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x14b27c: 0xffa40060
    ctx->pc = 0x14b27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x14b280: 0xffa50068
    ctx->pc = 0x14b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x14b284: 0x27a40060
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b288: 0xffb00070
    ctx->pc = 0x14b288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x14b28c: 0xffbf0080
    ctx->pc = 0x14b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x14b290: 0xc052bd0
    ctx->pc = 0x14B290u;
    SET_GPR_U32(ctx, 31, 0x14B298u);
    ctx->pc = 0x14B294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B298u; }
        else if (ctx->pc != 0x14B298u) { ctx->pc = 0x14B298u; }
    }
    if (ctx->pc != 0x14B298u) { return; }
    ctx->pc = 0x14B298u;
    // 0x14b298: 0x27b00020
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 32));
    // 0x14b29c: 0x27a40068
    ctx->pc = 0x14b29cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b2a0: 0xc052bd0
    ctx->pc = 0x14B2A0u;
    SET_GPR_U32(ctx, 31, 0x14B2A8u);
    ctx->pc = 0x14B2A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x14af40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2A8u; }
        else if (ctx->pc != 0x14B2A8u) { ctx->pc = 0x14B2A8u; }
    }
    if (ctx->pc != 0x14B2A8u) { return; }
    ctx->pc = 0x14B2A8u;
    // 0x14b2a8: 0x8fa20024
    ctx->pc = 0x14b2a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x14b2ac: 0x200282d
    ctx->pc = 0x14b2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2b0: 0x27a60040
    ctx->pc = 0x14b2b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b2b4: 0x3a0202d
    ctx->pc = 0x14b2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b2b8: 0x38420001
    ctx->pc = 0x14b2b8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x14b2bc: 0xc052bf8
    ctx->pc = 0x14B2BCu;
    SET_GPR_U32(ctx, 31, 0x14B2C4u);
    ctx->pc = 0x14B2C0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x14AFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _fpadd_parts_0x14afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2C4u; }
        else if (ctx->pc != 0x14B2C4u) { ctx->pc = 0x14B2C4u; }
    }
    if (ctx->pc != 0x14B2C4u) { return; }
    ctx->pc = 0x14B2C4u;
    // 0x14b2c4: 0xc052b84
    ctx->pc = 0x14B2C4u;
    SET_GPR_U32(ctx, 31, 0x14B2CCu);
    ctx->pc = 0x14B2C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14AE10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x14ae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B2CCu; }
        else if (ctx->pc != 0x14B2CCu) { ctx->pc = 0x14B2CCu; }
    }
    if (ctx->pc != 0x14B2CCu) { return; }
    ctx->pc = 0x14B2CCu;
    // 0x14b2cc: 0xdfbf0080
    ctx->pc = 0x14b2ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14b2d0: 0xdfb00070
    ctx->pc = 0x14b2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b2d4: 0x3e00008
    ctx->pc = 0x14B2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B2D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B2DCu;
}
