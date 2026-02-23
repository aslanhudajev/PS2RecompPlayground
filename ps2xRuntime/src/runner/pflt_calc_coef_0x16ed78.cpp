#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pflt_calc_coef
// Address: 0x16ed78 - 0x16ede0
void pflt_calc_coef_0x16ed78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pflt_calc_coef");


    ctx->pc = 0x16ed78u;

    // 0x16ed78: 0x27bdffd0
    ctx->pc = 0x16ed78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ed7c: 0x51400
    ctx->pc = 0x16ed7cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 16));
    // 0x16ed80: 0xffb00010
    ctx->pc = 0x16ed80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16ed84: 0xc0282d
    ctx->pc = 0x16ed84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed88: 0x80802d
    ctx->pc = 0x16ed88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed8c: 0x3a0302d
    ctx->pc = 0x16ed8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed90: 0x22403
    ctx->pc = 0x16ed90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16ed94: 0xffbf0020
    ctx->pc = 0x16ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ed98: 0xc05a4f8
    ctx->pc = 0x16ED98u;
    SET_GPR_U32(ctx, 31, 0x16EDA0u);
    ctx->pc = 0x16ED9Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 2));
    ctx->pc = 0x1693E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_GetCoefficient_0x1693e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDA0u; }
        else if (ctx->pc != 0x16EDA0u) { ctx->pc = 0x16EDA0u; }
    }
    if (ctx->pc != 0x16EDA0u) { return; }
    ctx->pc = 0x16EDA0u;
    // 0x16eda0: 0x97a60002
    ctx->pc = 0x16eda0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x16eda4: 0x200202d
    ctx->pc = 0x16eda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eda8: 0x87a50000
    ctx->pc = 0x16eda8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16edac: 0x63400
    ctx->pc = 0x16edacu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16edb0: 0xc05bb5a
    ctx->pc = 0x16EDB0u;
    SET_GPR_U32(ctx, 31, 0x16EDB8u);
    ctx->pc = 0x16EDB4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->pc = 0x16ED68u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_set_coef_0x16ed68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDB8u; }
        else if (ctx->pc != 0x16EDB8u) { ctx->pc = 0x16EDB8u; }
    }
    if (ctx->pc != 0x16EDB8u) { return; }
    ctx->pc = 0x16EDB8u;
    // 0x16edb8: 0x97a60002
    ctx->pc = 0x16edb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x16edbc: 0x8e040088
    ctx->pc = 0x16edbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x16edc0: 0x63400
    ctx->pc = 0x16edc0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x16edc4: 0x87a50000
    ctx->pc = 0x16edc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16edc8: 0xc05bafe
    ctx->pc = 0x16EDC8u;
    SET_GPR_U32(ctx, 31, 0x16EDD0u);
    ctx->pc = 0x16EDCCu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->pc = 0x16EBF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        iirflt_set_coef_0x16ebf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDD0u; }
        else if (ctx->pc != 0x16EDD0u) { ctx->pc = 0x16EDD0u; }
    }
    if (ctx->pc != 0x16EDD0u) { return; }
    ctx->pc = 0x16EDD0u;
    // 0x16edd0: 0xdfbf0020
    ctx->pc = 0x16edd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16edd4: 0xdfb00010
    ctx->pc = 0x16edd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16edd8: 0x3e00008
    ctx->pc = 0x16EDD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EDDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16EDE0u;
}
