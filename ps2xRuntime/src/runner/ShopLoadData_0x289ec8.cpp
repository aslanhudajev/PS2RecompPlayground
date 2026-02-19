#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShopLoadData
// Address: 0x289ec8 - 0x289f30
void ShopLoadData_0x289ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x289ec8u;

    // 0x289ec8: 0x27bdffd0
    ctx->pc = 0x289ec8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x289ecc: 0xffbf0020
    ctx->pc = 0x289eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x289ed0: 0xffb00010
    ctx->pc = 0x289ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x289ed4: 0x3c04003b
    ctx->pc = 0x289ed4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x289ed8: 0x2484d8c0
    ctx->pc = 0x289ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294957248));
    // 0x289edc: 0x3c05003b
    ctx->pc = 0x289edcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x289ee0: 0xc0b4e96
    ctx->pc = 0x289EE0u;
    SET_GPR_U32(ctx, 31, 0x289EE8u);
    ctx->pc = 0x289EE4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->pc = 0x2D3A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocFile_0x2d3a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EE8u; }
    }
    if (ctx->pc != 0x289EE8u) { return; }
    ctx->pc = 0x289EE8u;
    // 0x289ee8: 0x3a0202d
    ctx->pc = 0x289ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289eec: 0xc0b5116
    ctx->pc = 0x289EECu;
    SET_GPR_U32(ctx, 31, 0x289EF4u);
    ctx->pc = 0x289EF0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D4458u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBSetupWad_0x2d4458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289EF4u; }
    }
    if (ctx->pc != 0x289EF4u) { return; }
    ctx->pc = 0x289EF4u;
    // 0x289ef4: 0x3c100035
    ctx->pc = 0x289ef4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x289ef8: 0x3a0202d
    ctx->pc = 0x289ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289efc: 0x3c054954
    ctx->pc = 0x289efcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)18772 << 16));
    // 0x289f00: 0x34a5454d
    ctx->pc = 0x289f00u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 17741));
    // 0x289f04: 0x3c060035
    ctx->pc = 0x289f04u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x289f08: 0xc0b514a
    ctx->pc = 0x289F08u;
    SET_GPR_U32(ctx, 31, 0x289F10u);
    ctx->pc = 0x289F0Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294948140));
    ctx->pc = 0x2D4528u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBGetFromWad_0x2d4528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F10u; }
    }
    if (ctx->pc != 0x289F10u) { return; }
    ctx->pc = 0x289F10u;
    // 0x289f10: 0xae02b528
    ctx->pc = 0x289f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948136), GPR_U32(ctx, 2));
    // 0x289f14: 0x3c030035
    ctx->pc = 0x289f14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x289f18: 0x8c420098
    ctx->pc = 0x289f18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x289f1c: 0xac62b440
    ctx->pc = 0x289f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947904), GPR_U32(ctx, 2));
    // 0x289f20: 0xdfbf0020
    ctx->pc = 0x289f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x289f24: 0xdfb00010
    ctx->pc = 0x289f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289f28: 0x3e00008
    ctx->pc = 0x289F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289F30u;
}
