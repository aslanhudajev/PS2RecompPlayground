#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBOX_SetObject
// Address: 0x2c6bd0 - 0x2c6c0c
void MBOX_SetObject_0x2c6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c6bd0u;

    // 0x2c6bd0: 0x27bdffe0
    ctx->pc = 0x2c6bd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c6bd4: 0xffbf0010
    ctx->pc = 0x2c6bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6bd8: 0xffb00000
    ctx->pc = 0x2c6bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6bdc: 0x80802d
    ctx->pc = 0x2c6bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be0: 0xa0202d
    ctx->pc = 0x2c6be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6be4: 0x2405ffff
    ctx->pc = 0x2c6be4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6be8: 0x2406ffff
    ctx->pc = 0x2c6be8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6bec: 0xc0b19fe
    ctx->pc = 0x2C6BECu;
    SET_GPR_U32(ctx, 31, 0x2C6BF4u);
    ctx->pc = 0x2C6BF0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6BF4u; }
    }
    if (ctx->pc != 0x2C6BF4u) { return; }
    ctx->pc = 0x2C6BF4u;
    // 0x2c6bf4: 0x200202d
    ctx->pc = 0x2c6bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bf8: 0x40282d
    ctx->pc = 0x2c6bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bfc: 0xdfbf0010
    ctx->pc = 0x2c6bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6c00: 0xdfb00000
    ctx->pc = 0x2c6c00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6c04: 0x80b220e
    ctx->pc = 0x2C6C04u;
    ctx->pc = 0x2C6C08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C8838u;
    MBSetObject_0x2c8838(rdram, ctx, runtime); return;
    ctx->pc = 0x2C6C0Cu;
}
