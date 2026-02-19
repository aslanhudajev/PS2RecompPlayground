#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitPsys
// Address: 0x2c8ad0 - 0x2c8b38
void MBInitPsys_0x2c8ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8ad0u;

    // 0x2c8ad0: 0x27bdffe0
    ctx->pc = 0x2c8ad0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c8ad4: 0xffbf0010
    ctx->pc = 0x2c8ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c8ad8: 0xffb00000
    ctx->pc = 0x2c8ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8adc: 0x3c02003a
    ctx->pc = 0x2c8adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8ae0: 0x2450aa38
    ctx->pc = 0x2c8ae0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2c8ae4: 0xae000004
    ctx->pc = 0x2c8ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2c8ae8: 0xac40aa38
    ctx->pc = 0x2c8ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945336), GPR_U32(ctx, 0));
    // 0x2c8aec: 0xae00000c
    ctx->pc = 0x2c8aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2c8af0: 0xae000008
    ctx->pc = 0x2c8af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2c8af4: 0xae000010
    ctx->pc = 0x2c8af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c8af8: 0xae00001c
    ctx->pc = 0x2c8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2c8afc: 0xae000020
    ctx->pc = 0x2c8afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2c8b00: 0xae000014
    ctx->pc = 0x2c8b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2c8b04: 0xae000018
    ctx->pc = 0x2c8b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2c8b08: 0x3c02003d
    ctx->pc = 0x2c8b08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c8b0c: 0xac402224
    ctx->pc = 0x2c8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8740), GPR_U32(ctx, 0));
    // 0x2c8b10: 0x26040024
    ctx->pc = 0x2c8b10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 36));
    // 0x2c8b14: 0x3c050001
    ctx->pc = 0x2c8b14u;
    SET_GPR_U32(ctx, 5, ((uint32_t)1 << 16));
    // 0x2c8b18: 0xc0b2324
    ctx->pc = 0x2C8B18u;
    SET_GPR_U32(ctx, 31, 0x2C8B20u);
    ctx->pc = 0x2C8B1Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 54464));
    ctx->pc = 0x2C8C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMemPool_0x2c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B20u; }
    }
    if (ctx->pc != 0x2C8B20u) { return; }
    ctx->pc = 0x2C8B20u;
    // 0x2c8b20: 0xc0b22ce
    ctx->pc = 0x2C8B20u;
    SET_GPR_U32(ctx, 31, 0x2C8B28u);
    ctx->pc = 0x2C8B24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C8B38u;
    {
        const uint32_t __entryPc = ctx->pc;
        initGlobalDirPos_0x2c8b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8B28u; }
    }
    if (ctx->pc != 0x2C8B28u) { return; }
    ctx->pc = 0x2C8B28u;
    // 0x2c8b28: 0xdfbf0010
    ctx->pc = 0x2c8b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c8b2c: 0xdfb00000
    ctx->pc = 0x2c8b2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8b30: 0x80b22e8
    ctx->pc = 0x2C8B30u;
    ctx->pc = 0x2C8B34u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2C8BA0u;
    initPresetList_0x2c8ba0(rdram, ctx, runtime); return;
    ctx->pc = 0x2C8B38u;
}
