#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ClearPlyrData
// Address: 0x24dbe8 - 0x24dc2c
void ClearPlyrData_0x24dbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24dbe8u;

    // 0x24dbe8: 0x27bdffe0
    ctx->pc = 0x24dbe8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24dbec: 0xffbf0010
    ctx->pc = 0x24dbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24dbf0: 0xffb00000
    ctx->pc = 0x24dbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24dbf4: 0x3c020033
    ctx->pc = 0x24dbf4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24dbf8: 0x24424910
    ctx->pc = 0x24dbf8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 18704));
    // 0x24dbfc: 0x48080
    ctx->pc = 0x24dbfcu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 2));
    // 0x24dc00: 0x2028021
    ctx->pc = 0x24dc00u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24dc04: 0x8e020000
    ctx->pc = 0x24dc04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dc08: 0x8c440004
    ctx->pc = 0x24dc08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24dc0c: 0xc0937ba
    ctx->pc = 0x24DC0Cu;
    SET_GPR_U32(ctx, 31, 0x24DC14u);
    ctx->pc = 0x24DC10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x24DEE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSfxClearData_0x24dee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24DC14u; }
    }
    if (ctx->pc != 0x24DC14u) { return; }
    ctx->pc = 0x24DC14u;
    // 0x24dc14: 0x8e020000
    ctx->pc = 0x24dc14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24dc18: 0xac400024
    ctx->pc = 0x24dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x24dc1c: 0xdfbf0010
    ctx->pc = 0x24dc1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24dc20: 0xdfb00000
    ctx->pc = 0x24dc20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24dc24: 0x3e00008
    ctx->pc = 0x24DC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24DC28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24DC2Cu;
}
