#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_charicmp
// Address: 0x177d88 - 0x177dd8
void dvci_charicmp_0x177d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_charicmp");


    ctx->pc = 0x177d88u;

    // 0x177d88: 0x27bdffd0
    ctx->pc = 0x177d88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177d8c: 0x42600
    ctx->pc = 0x177d8cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 24));
    // 0x177d90: 0xffb10010
    ctx->pc = 0x177d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177d94: 0x42603
    ctx->pc = 0x177d94u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x177d98: 0x58e00
    ctx->pc = 0x177d98u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 5), 24));
    // 0x177d9c: 0xffb00000
    ctx->pc = 0x177d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177da0: 0xffbf0020
    ctx->pc = 0x177da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177da4: 0xc05df54
    ctx->pc = 0x177DA4u;
    SET_GPR_U32(ctx, 31, 0x177DACu);
    ctx->pc = 0x177DA8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 24));
    ctx->pc = 0x177D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        conv_cmp_0x177d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DACu; }
        else if (ctx->pc != 0x177DACu) { ctx->pc = 0x177DACu; }
    }
    if (ctx->pc != 0x177DACu) { return; }
    ctx->pc = 0x177DACu;
    // 0x177dac: 0x40802d
    ctx->pc = 0x177dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177db0: 0xc05df54
    ctx->pc = 0x177DB0u;
    SET_GPR_U32(ctx, 31, 0x177DB8u);
    ctx->pc = 0x177DB4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        conv_cmp_0x177d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177DB8u; }
        else if (ctx->pc != 0x177DB8u) { ctx->pc = 0x177DB8u; }
    }
    if (ctx->pc != 0x177DB8u) { return; }
    ctx->pc = 0x177DB8u;
    // 0x177db8: 0x2028026
    ctx->pc = 0x177db8u;
    SET_GPR_U32(ctx, 16, XOR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x177dbc: 0xdfbf0020
    ctx->pc = 0x177dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177dc0: 0x2402ffff
    ctx->pc = 0x177dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177dc4: 0xdfb10010
    ctx->pc = 0x177dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177dc8: 0x10100a
    ctx->pc = 0x177dc8u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x177dcc: 0xdfb00000
    ctx->pc = 0x177dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177dd0: 0x3e00008
    ctx->pc = 0x177DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177DD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177DD8u;
}
