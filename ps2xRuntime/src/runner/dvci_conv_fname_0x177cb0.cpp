#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_conv_fname
// Address: 0x177cb0 - 0x177d50
void dvci_conv_fname_0x177cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_conv_fname");


    ctx->pc = 0x177cb0u;

    // 0x177cb0: 0x27bdffd0
    ctx->pc = 0x177cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177cb4: 0xffb00000
    ctx->pc = 0x177cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177cb8: 0xa0802d
    ctx->pc = 0x177cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cbc: 0xffb10010
    ctx->pc = 0x177cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x177cc0: 0x80882d
    ctx->pc = 0x177cc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cc4: 0x3c050024
    ctx->pc = 0x177cc4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)36 << 16));
    // 0x177cc8: 0xffbf0020
    ctx->pc = 0x177cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177ccc: 0x200202d
    ctx->pc = 0x177cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cd0: 0xc05150e
    ctx->pc = 0x177CD0u;
    SET_GPR_U32(ctx, 31, 0x177CD8u);
    ctx->pc = 0x177CD4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942496));
    ctx->pc = 0x145438u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x145438(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CD8u; }
        else if (ctx->pc != 0x177CD8u) { ctx->pc = 0x177CD8u; }
    }
    if (ctx->pc != 0x177CD8u) { return; }
    ctx->pc = 0x177CD8u;
    // 0x177cd8: 0x82230000
    ctx->pc = 0x177cd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x177cdc: 0x2402002f
    ctx->pc = 0x177cdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 47));
    // 0x177ce0: 0x10620006
    ctx->pc = 0x177CE0u;
    {
        const bool branch_taken_0x177ce0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x177CE4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 92));
        if (branch_taken_0x177ce0) {
            ctx->pc = 0x177CFCu;
            goto label_177cfc;
        }
    }
    ctx->pc = 0x177CE8u;
    // 0x177ce8: 0x10620004
    ctx->pc = 0x177CE8u;
    {
        const bool branch_taken_0x177ce8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x177CECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177ce8) {
            ctx->pc = 0x177CFCu;
            goto label_177cfc;
        }
    }
    ctx->pc = 0x177CF0u;
    // 0x177cf0: 0x3c05002c
    ctx->pc = 0x177cf0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
    // 0x177cf4: 0xc051470
    ctx->pc = 0x177CF4u;
    SET_GPR_U32(ctx, 31, 0x177CFCu);
    ctx->pc = 0x177CF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294947936));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177CFCu; }
        else if (ctx->pc != 0x177CFCu) { ctx->pc = 0x177CFCu; }
    }
    if (ctx->pc != 0x177CFCu) { return; }
    ctx->pc = 0x177CFCu;
label_177cfc:
    // 0x177cfc: 0x220282d
    ctx->pc = 0x177cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d00: 0xc051470
    ctx->pc = 0x177D00u;
    SET_GPR_U32(ctx, 31, 0x177D08u);
    ctx->pc = 0x177D04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D08u; }
        else if (ctx->pc != 0x177D08u) { ctx->pc = 0x177D08u; }
    }
    if (ctx->pc != 0x177D08u) { return; }
    ctx->pc = 0x177D08u;
    // 0x177d08: 0xc051554
    ctx->pc = 0x177D08u;
    SET_GPR_U32(ctx, 31, 0x177D10u);
    ctx->pc = 0x177D0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D10u; }
        else if (ctx->pc != 0x177D10u) { ctx->pc = 0x177D10u; }
    }
    if (ctx->pc != 0x177D10u) { return; }
    ctx->pc = 0x177D10u;
    // 0x177d10: 0x3c03002c
    ctx->pc = 0x177d10u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x177d14: 0x2442fffe
    ctx->pc = 0x177d14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x177d18: 0x2471b468
    ctx->pc = 0x177d18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 3), 4294947944));
    // 0x177d1c: 0x2022021
    ctx->pc = 0x177d1cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x177d20: 0xc0514bc
    ctx->pc = 0x177D20u;
    SET_GPR_U32(ctx, 31, 0x177D28u);
    ctx->pc = 0x177D24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1452F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x1452f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D28u; }
        else if (ctx->pc != 0x177D28u) { ctx->pc = 0x177D28u; }
    }
    if (ctx->pc != 0x177D28u) { return; }
    ctx->pc = 0x177D28u;
    // 0x177d28: 0x10400003
    ctx->pc = 0x177D28u;
    {
        const bool branch_taken_0x177d28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x177D2Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x177d28) {
            ctx->pc = 0x177D38u;
            goto label_177d38;
        }
    }
    ctx->pc = 0x177D30u;
    // 0x177d30: 0xc051470
    ctx->pc = 0x177D30u;
    SET_GPR_U32(ctx, 31, 0x177D38u);
    ctx->pc = 0x177D34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1451C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x1451c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x177D38u; }
        else if (ctx->pc != 0x177D38u) { ctx->pc = 0x177D38u; }
    }
    if (ctx->pc != 0x177D38u) { return; }
    ctx->pc = 0x177D38u;
label_177d38:
    // 0x177d38: 0x200202d
    ctx->pc = 0x177d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177d3c: 0xdfbf0020
    ctx->pc = 0x177d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177d40: 0xdfb10010
    ctx->pc = 0x177d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177d44: 0xdfb00000
    ctx->pc = 0x177d44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177d48: 0x805dd9e
    ctx->pc = 0x177D48u;
    ctx->pc = 0x177D4Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x177678u;
    dvci_to_large_to_yen_0x177678(rdram, ctx, runtime); return;
    ctx->pc = 0x177D50u;
}
