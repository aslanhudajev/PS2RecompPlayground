#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwsfd_InitLibWork
// Address: 0x18df08 - 0x18df98
void mwsfd_InitLibWork_0x18df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwsfd_InitLibWork");
    ctx->pc = 0x18df08u;

    // 0x18df08: 0x27bdffd0
    ctx->pc = 0x18df08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18df0c: 0xffb00000
    ctx->pc = 0x18df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18df10: 0xffb10010
    ctx->pc = 0x18df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18df14: 0xffbf0020
    ctx->pc = 0x18df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18df18: 0xc063184
    ctx->pc = 0x18DF18u;
    SET_GPR_U32(ctx, 31, 0x18DF20u);
    ctx->pc = 0x18DF1Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C610u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetLibWorkPtr_0x18c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF20u; }
        else if (ctx->pc != 0x18DF20u) { ctx->pc = 0x18DF20u; }
    }
    if (ctx->pc != 0x18DF20u) { return; }
    ctx->pc = 0x18DF20u;
    // 0x18df20: 0x40882d
    ctx->pc = 0x18df20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df24: 0x282d
    ctx->pc = 0x18df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df28: 0x220202d
    ctx->pc = 0x18df28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18df2c: 0xc050cfe
    ctx->pc = 0x18DF2Cu;
    SET_GPR_U32(ctx, 31, 0x18DF34u);
    ctx->pc = 0x18DF30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4656));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DF34u; }
        else if (ctx->pc != 0x18DF34u) { ctx->pc = 0x18DF34u; }
    }
    if (ctx->pc != 0x18DF34u) { return; }
    ctx->pc = 0x18DF34u;
    // 0x18df34: 0x1200000a
    ctx->pc = 0x18DF34u;
    {
        const bool branch_taken_0x18df34 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DF38u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 4624));
        if (branch_taken_0x18df34) {
            ctx->pc = 0x18DF60u;
            goto label_18df60;
        }
    }
    ctx->pc = 0x18DF3Cu;
    // 0x18df3c: 0x8e020004
    ctx->pc = 0x18df3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18df40: 0x8e03000c
    ctx->pc = 0x18df40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x18df44: 0xaca20004
    ctx->pc = 0x18df44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x18df48: 0xc6000000
    ctx->pc = 0x18df48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18df4c: 0x8e020008
    ctx->pc = 0x18df4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18df50: 0xe6201210
    ctx->pc = 0x18df50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4624), bits); }
    // 0x18df54: 0xaca3000c
    ctx->pc = 0x18df54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x18df58: 0x1000000a
    ctx->pc = 0x18DF58u;
    {
        const bool branch_taken_0x18df58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18DF5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x18df58) {
            ctx->pc = 0x18DF84u;
            goto label_18df84;
        }
    }
    ctx->pc = 0x18DF60u;
label_18df60:
    // 0x18df60: 0x3c01426f
    ctx->pc = 0x18df60u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17007 << 16));
    // 0x18df64: 0x3421c28f
    ctx->pc = 0x18df64u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49807));
    // 0x18df68: 0x44810000
    ctx->pc = 0x18df68u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x18df6c: 0x24020001
    ctx->pc = 0x18df6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18df70: 0x24030002
    ctx->pc = 0x18df70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x18df74: 0xaca20004
    ctx->pc = 0x18df74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x18df78: 0xe6201210
    ctx->pc = 0x18df78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4624), bits); }
    // 0x18df7c: 0xaca30008
    ctx->pc = 0x18df7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x18df80: 0xaca0000c
    ctx->pc = 0x18df80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_18df84:
    // 0x18df84: 0xdfbf0020
    ctx->pc = 0x18df84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18df88: 0xdfb10010
    ctx->pc = 0x18df88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df8c: 0xdfb00000
    ctx->pc = 0x18df8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df90: 0x3e00008
    ctx->pc = 0x18DF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DF94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DF60u: goto label_18df60;
            case 0x18DF84u: goto label_18df84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DF98u;
}
