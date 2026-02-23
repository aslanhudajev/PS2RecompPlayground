#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPV_Seek
// Address: 0x198b90 - 0x198c00
void SFMPV_Seek_0x198b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPV_Seek");


    ctx->pc = 0x198b90u;

    // 0x198b90: 0x27bdffc0
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x198b94: 0xffb00010
    ctx->pc = 0x198b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x198b98: 0x3a0302d
    ctx->pc = 0x198b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b9c: 0x80802d
    ctx->pc = 0x198b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198ba0: 0xffb10020
    ctx->pc = 0x198ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x198ba4: 0x26113740
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 14144));
    // 0x198ba8: 0xffbf0030
    ctx->pc = 0x198ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x198bac: 0xc066300
    ctx->pc = 0x198BACu;
    SET_GPR_U32(ctx, 31, 0x198BB4u);
    ctx->pc = 0x198BB0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x198C00u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpv_ReprocessShc_0x198c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BB4u; }
        else if (ctx->pc != 0x198BB4u) { ctx->pc = 0x198BB4u; }
    }
    if (ctx->pc != 0x198BB4u) { return; }
    ctx->pc = 0x198BB4u;
    // 0x198bb4: 0x1440000e
    ctx->pc = 0x198BB4u;
    {
        const bool branch_taken_0x198bb4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198BB8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x198bb4) {
            ctx->pc = 0x198BF0u;
            goto label_198bf0;
        }
    }
    ctx->pc = 0x198BBCu;
    // 0x198bbc: 0x24020002
    ctx->pc = 0x198bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x198bc0: 0x8fa30000
    ctx->pc = 0x198bc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198bc4: 0x10600006
    ctx->pc = 0x198BC4u;
    {
        const bool branch_taken_0x198bc4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x198BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x198bc4) {
            ctx->pc = 0x198BE0u;
            goto label_198be0;
        }
    }
    ctx->pc = 0x198BCCu;
    // 0x198bcc: 0x200202d
    ctx->pc = 0x198bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bd0: 0xc0674c2
    ctx->pc = 0x198BD0u;
    SET_GPR_U32(ctx, 31, 0x198BD8u);
    ctx->pc = 0x198BD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 48));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198BD8u; }
        else if (ctx->pc != 0x198BD8u) { ctx->pc = 0x198BD8u; }
    }
    if (ctx->pc != 0x198BD8u) { return; }
    ctx->pc = 0x198BD8u;
    // 0x198bd8: 0x14400002
    ctx->pc = 0x198BD8u;
    {
        const bool branch_taken_0x198bd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198BDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 200));
        if (branch_taken_0x198bd8) {
            ctx->pc = 0x198BE4u;
            goto label_198be4;
        }
    }
    ctx->pc = 0x198BE0u;
label_198be0:
    // 0x198be0: 0x240200c0
    ctx->pc = 0x198be0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 192));
label_198be4:
    // 0x198be4: 0xae220030
    ctx->pc = 0x198be4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x198be8: 0x102d
    ctx->pc = 0x198be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198bec: 0xdfbf0030
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198bf0:
    // 0x198bf0: 0xdfb10020
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198bf4: 0xdfb00010
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198bf8: 0x3e00008
    ctx->pc = 0x198BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198BE0u: goto label_198be0;
            case 0x198BE4u: goto label_198be4;
            case 0x198BF0u: goto label_198bf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198C00u;
}
