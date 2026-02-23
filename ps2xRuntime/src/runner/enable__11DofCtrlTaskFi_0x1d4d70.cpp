#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: enable__11DofCtrlTaskFi
// Address: 0x1d4d70 - 0x1d4e0c
void enable__11DofCtrlTaskFi_0x1d4d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("enable__11DofCtrlTaskFi");


    ctx->pc = 0x1d4d70u;

    // 0x1d4d70: 0x27bdffe0
    ctx->pc = 0x1d4d70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d4d74: 0x7fbf0010
    ctx->pc = 0x1d4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d4d78: 0x7fb00000
    ctx->pc = 0x1d4d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4d7c: 0x10a00016
    ctx->pc = 0x1D4D7Cu;
    {
        const bool branch_taken_0x1d4d7c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4D80u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d4d7c) {
            ctx->pc = 0x1D4DD8u;
            goto label_1d4dd8;
        }
    }
    ctx->pc = 0x1D4D84u;
    // 0x1d4d84: 0x8e030004
    ctx->pc = 0x1d4d84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4d88: 0x3c020050
    ctx->pc = 0x1d4d88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d4d8c: 0x2444e540
    ctx->pc = 0x1d4d8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x1d4d90: 0x3c050005
    ctx->pc = 0x1d4d90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)5 << 16));
    // 0x1d4d94: 0x24062000
    ctx->pc = 0x1d4d94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1d4d98: 0x34620001
    ctx->pc = 0x1d4d98u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 1));
    // 0x1d4d9c: 0xc086850
    ctx->pc = 0x1D4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4DA4u);
    ctx->pc = 0x1D4DA0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DA4u; }
        else if (ctx->pc != 0x1D4DA4u) { ctx->pc = 0x1D4DA4u; }
    }
    if (ctx->pc != 0x1D4DA4u) { return; }
    ctx->pc = 0x1D4DA4u;
    // 0x1d4da4: 0xae020030
    ctx->pc = 0x1d4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1d4da8: 0x8e020030
    ctx->pc = 0x1d4da8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d4dac: 0x14400006
    ctx->pc = 0x1D4DACu;
    {
        const bool branch_taken_0x1d4dac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1d4dac) {
            ctx->pc = 0x1D4DC8u;
            goto label_1d4dc8;
        }
    }
    ctx->pc = 0x1D4DB4u;
    // 0x1d4db4: 0x3c020026
    ctx->pc = 0x1d4db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d4db8: 0xc05114a
    ctx->pc = 0x1D4DB8u;
    SET_GPR_U32(ctx, 31, 0x1D4DC0u);
    ctx->pc = 0x1D4DBCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 24448));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DC0u; }
        else if (ctx->pc != 0x1D4DC0u) { ctx->pc = 0x1D4DC0u; }
    }
    if (ctx->pc != 0x1D4DC0u) { return; }
    ctx->pc = 0x1D4DC0u;
label_1d4dc0:
    // 0x1d4dc0: 0x1000ffff
    ctx->pc = 0x1D4DC0u;
    {
        const bool branch_taken_0x1d4dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4dc0) {
            ctx->pc = 0x1D4DC0u;
            goto label_1d4dc0;
        }
    }
    ctx->pc = 0x1D4DC8u;
label_1d4dc8:
    // 0x1d4dc8: 0xc06962c
    ctx->pc = 0x1D4DC8u;
    SET_GPR_U32(ctx, 31, 0x1D4DD0u);
    ctx->pc = 0x1D4DCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->pc = 0x1A58B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDofSetTexAddr_0x1a58b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DD0u; }
        else if (ctx->pc != 0x1D4DD0u) { ctx->pc = 0x1D4DD0u; }
    }
    if (ctx->pc != 0x1D4DD0u) { return; }
    ctx->pc = 0x1D4DD0u;
    // 0x1d4dd0: 0x1000000b
    ctx->pc = 0x1D4DD0u;
    {
        const bool branch_taken_0x1d4dd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4DD4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1d4dd0) {
            ctx->pc = 0x1D4E00u;
            goto label_1d4e00;
        }
    }
    ctx->pc = 0x1D4DD8u;
label_1d4dd8:
    // 0x1d4dd8: 0x8e050004
    ctx->pc = 0x1d4dd8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4ddc: 0x3c020050
    ctx->pc = 0x1d4ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d4de0: 0x2403fffe
    ctx->pc = 0x1d4de0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1d4de4: 0x2444e540
    ctx->pc = 0x1d4de4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x1d4de8: 0xa31024
    ctx->pc = 0x1d4de8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1d4dec: 0xae020004
    ctx->pc = 0x1d4decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1d4df0: 0xc0868f4
    ctx->pc = 0x1D4DF0u;
    SET_GPR_U32(ctx, 31, 0x1D4DF8u);
    ctx->pc = 0x1D4DF4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4DF8u; }
        else if (ctx->pc != 0x1D4DF8u) { ctx->pc = 0x1D4DF8u; }
    }
    if (ctx->pc != 0x1D4DF8u) { return; }
    ctx->pc = 0x1D4DF8u;
    // 0x1d4df8: 0xae000030
    ctx->pc = 0x1d4df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d4dfc: 0x7bbf0010
    ctx->pc = 0x1d4dfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4e00:
    // 0x1d4e00: 0x7bb00000
    ctx->pc = 0x1d4e00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4e04: 0x3e00008
    ctx->pc = 0x1D4E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4E08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4DC0u: goto label_1d4dc0;
            case 0x1D4DC8u: goto label_1d4dc8;
            case 0x1D4DD8u: goto label_1d4dd8;
            case 0x1D4E00u: goto label_1d4e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D4E0Cu;
}
