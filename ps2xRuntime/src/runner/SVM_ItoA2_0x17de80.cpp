#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_ItoA2
// Address: 0x17de80 - 0x17df24
void SVM_ItoA2_0x17de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_ItoA2");


    ctx->pc = 0x17de80u;

    // 0x17de80: 0x27bdffb0
    ctx->pc = 0x17de80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17de84: 0xffb30030
    ctx->pc = 0x17de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17de88: 0xffb20020
    ctx->pc = 0x17de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17de8c: 0xa0982d
    ctx->pc = 0x17de8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de90: 0xffb10010
    ctx->pc = 0x17de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17de94: 0xc0902d
    ctx->pc = 0x17de94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de98: 0xe0882d
    ctx->pc = 0x17de98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de9c: 0xffb00000
    ctx->pc = 0x17de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dea0: 0x220302d
    ctx->pc = 0x17dea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dea4: 0xffbf0040
    ctx->pc = 0x17dea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17dea8: 0x11883c
    ctx->pc = 0x17dea8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x17deac: 0x11883f
    ctx->pc = 0x17deacu;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x17deb0: 0xc05f75a
    ctx->pc = 0x17DEB0u;
    SET_GPR_U32(ctx, 31, 0x17DEB8u);
    ctx->pc = 0x17DEB4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DD68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_ItoA_0x17dd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEB8u; }
        else if (ctx->pc != 0x17DEB8u) { ctx->pc = 0x17DEB8u; }
    }
    if (ctx->pc != 0x17DEB8u) { return; }
    ctx->pc = 0x17DEB8u;
    // 0x17deb8: 0x3c10002d
    ctx->pc = 0x17deb8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)45 << 16));
    // 0x17debc: 0x240202d
    ctx->pc = 0x17debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dec0: 0xc051554
    ctx->pc = 0x17DEC0u;
    SET_GPR_U32(ctx, 31, 0x17DEC8u);
    ctx->pc = 0x17DEC4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 22944));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEC8u; }
        else if (ctx->pc != 0x17DEC8u) { ctx->pc = 0x17DEC8u; }
    }
    if (ctx->pc != 0x17DEC8u) { return; }
    ctx->pc = 0x17DEC8u;
    // 0x17dec8: 0x2228823
    ctx->pc = 0x17dec8u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17decc: 0x200282d
    ctx->pc = 0x17deccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ded0: 0x2626ffff
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x17ded4: 0xc0515a2
    ctx->pc = 0x17DED4u;
    SET_GPR_U32(ctx, 31, 0x17DEDCu);
    ctx->pc = 0x17DED8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145688u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x145688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEDCu; }
        else if (ctx->pc != 0x17DEDCu) { ctx->pc = 0x17DEDCu; }
    }
    if (ctx->pc != 0x17DEDCu) { return; }
    ctx->pc = 0x17DEDCu;
    // 0x17dedc: 0xc051554
    ctx->pc = 0x17DEDCu;
    SET_GPR_U32(ctx, 31, 0x17DEE4u);
    ctx->pc = 0x17DEE0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEE4u; }
        else if (ctx->pc != 0x17DEE4u) { ctx->pc = 0x17DEE4u; }
    }
    if (ctx->pc != 0x17DEE4u) { return; }
    ctx->pc = 0x17DEE4u;
    // 0x17dee4: 0x2428021
    ctx->pc = 0x17dee4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x17dee8: 0xc051554
    ctx->pc = 0x17DEE8u;
    SET_GPR_U32(ctx, 31, 0x17DEF0u);
    ctx->pc = 0x17DEECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DEF0u; }
        else if (ctx->pc != 0x17DEF0u) { ctx->pc = 0x17DEF0u; }
    }
    if (ctx->pc != 0x17DEF0u) { return; }
    ctx->pc = 0x17DEF0u;
    // 0x17def0: 0x24060004
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17def4: 0x260202d
    ctx->pc = 0x17def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17def8: 0xc23023
    ctx->pc = 0x17def8u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17defc: 0x200282d
    ctx->pc = 0x17defcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df00: 0x6303c
    ctx->pc = 0x17df00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x17df04: 0xdfbf0040
    ctx->pc = 0x17df04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17df08: 0xdfb30030
    ctx->pc = 0x17df08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17df0c: 0x6303e
    ctx->pc = 0x17df0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x17df10: 0xdfb20020
    ctx->pc = 0x17df10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17df14: 0xdfb10010
    ctx->pc = 0x17df14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17df18: 0xdfb00000
    ctx->pc = 0x17df18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17df1c: 0x805f75a
    ctx->pc = 0x17DF1Cu;
    ctx->pc = 0x17DF20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17DD68u;
    SVM_ItoA_0x17dd68(rdram, ctx, runtime); return;
    ctx->pc = 0x17DF24u;
}
