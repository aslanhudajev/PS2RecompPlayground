#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_player_default_atts
// Address: 0x22ff80 - 0x23004c
void set_player_default_atts_0x22ff80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22ff80u;

    // 0x22ff80: 0x27bdff60
    ctx->pc = 0x22ff80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22ff84: 0xffbf0090
    ctx->pc = 0x22ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22ff88: 0xffbe0080
    ctx->pc = 0x22ff88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22ff8c: 0xffb70070
    ctx->pc = 0x22ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22ff90: 0xffb60060
    ctx->pc = 0x22ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22ff94: 0xffb50050
    ctx->pc = 0x22ff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22ff98: 0xffb40040
    ctx->pc = 0x22ff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22ff9c: 0xffb30030
    ctx->pc = 0x22ff9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22ffa0: 0xffb20020
    ctx->pc = 0x22ffa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22ffa4: 0xffb10010
    ctx->pc = 0x22ffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22ffa8: 0xffb00000
    ctx->pc = 0x22ffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22ffac: 0x80802d
    ctx->pc = 0x22ffacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffb0: 0x8e160000
    ctx->pc = 0x22ffb0u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22ffb4: 0x8e17000c
    ctx->pc = 0x22ffb4u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x22ffb8: 0x882d
    ctx->pc = 0x22ffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffbc: 0x241e0018
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 24));
    // 0x22ffc0: 0x261509b4
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 16), 2484));
    // 0x22ffc4: 0x261409b8
    ctx->pc = 0x22ffc4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 2488));
    // 0x22ffc8: 0x261309bc
    ctx->pc = 0x22ffc8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 16), 2492));
    // 0x22ffcc: 0x261209c0
    ctx->pc = 0x22ffccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2496));
label_22ffd0:
    // 0x22ffd0: 0x2c0202d
    ctx->pc = 0x22ffd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffd4: 0x220282d
    ctx->pc = 0x22ffd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ffd8: 0xc093692
    ctx->pc = 0x22FFD8u;
    SET_GPR_U32(ctx, 31, 0x22FFE0u);
    ctx->pc = 0x22FFDCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FFE0u; }
    }
    if (ctx->pc != 0x22FFE0u) { return; }
    ctx->pc = 0x22FFE0u;
    // 0x22ffe0: 0x23e1818
    ctx->pc = 0x22ffe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22ffe4: 0x2a31021
    ctx->pc = 0x22ffe4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x22ffe8: 0xac400000
    ctx->pc = 0x22ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22ffec: 0x2831021
    ctx->pc = 0x22ffecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x22fff0: 0xac400000
    ctx->pc = 0x22fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22fff4: 0x2631021
    ctx->pc = 0x22fff4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x22fff8: 0xac400000
    ctx->pc = 0x22fff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22fffc: 0x2431821
    ctx->pc = 0x22fffcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x230000: 0x26310001
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x230004: 0x2a220010
    ctx->pc = 0x230004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x230008: 0x1440fff1
    ctx->pc = 0x230008u;
    {
        const bool branch_taken_0x230008 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23000Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x230008) {
            ctx->pc = 0x22FFD0u;
            goto label_22ffd0;
        }
    }
    ctx->pc = 0x230010u;
    // 0x230010: 0x200202d
    ctx->pc = 0x230010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230014: 0x2e0282d
    ctx->pc = 0x230014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230018: 0x302d
    ctx->pc = 0x230018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23001c: 0xdfbf0090
    ctx->pc = 0x23001cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x230020: 0xdfbe0080
    ctx->pc = 0x230020u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230024: 0xdfb70070
    ctx->pc = 0x230024u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230028: 0xdfb60060
    ctx->pc = 0x230028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23002c: 0xdfb50050
    ctx->pc = 0x23002cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x230030: 0xdfb40040
    ctx->pc = 0x230030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x230034: 0xdfb30030
    ctx->pc = 0x230034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x230038: 0xdfb20020
    ctx->pc = 0x230038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23003c: 0xdfb10010
    ctx->pc = 0x23003cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230040: 0xdfb00000
    ctx->pc = 0x230040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230044: 0x808af08
    ctx->pc = 0x230044u;
    ctx->pc = 0x230048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x22BC20u;
    PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime); return;
    ctx->pc = 0x23004Cu;
}
