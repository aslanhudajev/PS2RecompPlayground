#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrExpand
// Address: 0x1a0cd8 - 0x1a0d40
void SFH_AnlyFtrExpand_0x1a0cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrExpand");


    ctx->pc = 0x1a0cd8u;

    // 0x1a0cd8: 0x27bdffc0
    ctx->pc = 0x1a0cd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0cdc: 0xffb10010
    ctx->pc = 0x1a0cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0ce0: 0xffb20020
    ctx->pc = 0x1a0ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0ce4: 0x30b100ff
    ctx->pc = 0x1a0ce4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0ce8: 0xffb00000
    ctx->pc = 0x1a0ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0cec: 0xc0902d
    ctx->pc = 0x1a0cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cf0: 0xffbf0030
    ctx->pc = 0x1a0cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0cf4: 0xc0681d0
    ctx->pc = 0x1A0CF4u;
    SET_GPR_U32(ctx, 31, 0x1A0CFCu);
    ctx->pc = 0x1A0CF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CFCu; }
        else if (ctx->pc != 0x1A0CFCu) { ctx->pc = 0x1A0CFCu; }
    }
    if (ctx->pc != 0x1A0CFCu) { return; }
    ctx->pc = 0x1A0CFCu;
    // 0x1a0cfc: 0x40802d
    ctx->pc = 0x1a0cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d00: 0x12000005
    ctx->pc = 0x1A0D00u;
    {
        const bool branch_taken_0x1a0d00 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0D04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d00) {
            ctx->pc = 0x1A0D18u;
            goto label_1a0d18;
        }
    }
    ctx->pc = 0x1A0D08u;
    // 0x1a0d08: 0xc0683b8
    ctx->pc = 0x1A0D08u;
    SET_GPR_U32(ctx, 31, 0x1A0D10u);
    ctx->pc = 0x1A0D0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0D10u; }
        else if (ctx->pc != 0x1A0D10u) { ctx->pc = 0x1A0D10u; }
    }
    if (ctx->pc != 0x1A0D10u) { return; }
    ctx->pc = 0x1A0D10u;
    // 0x1a0d10: 0x54400003
    ctx->pc = 0x1A0D10u;
    {
        const bool branch_taken_0x1a0d10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0d10) {
            ctx->pc = 0x1A0D14u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->pc = 0x1A0D20u;
            goto label_1a0d20;
        }
    }
    ctx->pc = 0x1A0D18u;
label_1a0d18:
    // 0x1a0d18: 0x10000003
    ctx->pc = 0x1A0D18u;
    {
        const bool branch_taken_0x1a0d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0D1Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0d18) {
            ctx->pc = 0x1A0D28u;
            goto label_1a0d28;
        }
    }
    ctx->pc = 0x1A0D20u;
label_1a0d20:
    // 0x1a0d20: 0x24020001
    ctx->pc = 0x1a0d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0d24: 0xae430000
    ctx->pc = 0x1a0d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0d28:
    // 0x1a0d28: 0xdfbf0030
    ctx->pc = 0x1a0d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d2c: 0xdfb20020
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0d30: 0xdfb10010
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d34: 0xdfb00000
    ctx->pc = 0x1a0d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d38: 0x3e00008
    ctx->pc = 0x1A0D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0D3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0D18u: goto label_1a0d18;
            case 0x1A0D20u: goto label_1a0d20;
            case 0x1A0D28u: goto label_1a0d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0D40u;
}
