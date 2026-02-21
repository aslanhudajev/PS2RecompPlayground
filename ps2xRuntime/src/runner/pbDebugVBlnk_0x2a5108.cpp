#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugVBlnk
// Address: 0x2a5108 - 0x2a5184
void pbDebugVBlnk_0x2a5108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5108u;

    // 0x2a5108: 0x27bdffd0
    ctx->pc = 0x2a5108u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a510c: 0xffbf0020
    ctx->pc = 0x2a510cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a5110: 0xffb10010
    ctx->pc = 0x2a5110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a5114: 0xffb00000
    ctx->pc = 0x2a5114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a5118: 0x3c020037
    ctx->pc = 0x2a5118u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a511c: 0x8c42ba28
    ctx->pc = 0x2a511cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294949416)));
    // 0x2a5120: 0x10400013
    ctx->pc = 0x2A5120u;
    {
        const bool branch_taken_0x2a5120 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5124u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a5120) {
            ctx->pc = 0x2A5170u;
            goto label_2a5170;
        }
    }
    ctx->pc = 0x2A5128u;
    // 0x2a5128: 0x8c42dee4
    ctx->pc = 0x2a5128u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958820)));
    // 0x2a512c: 0x10400011
    ctx->pc = 0x2A512Cu;
    {
        const bool branch_taken_0x2a512c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5130u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2a512c) {
            ctx->pc = 0x2A5174u;
            goto label_2a5174;
        }
    }
    ctx->pc = 0x2A5134u;
    // 0x2a5134: 0xc0abc02
    ctx->pc = 0x2A5134u;
    SET_GPR_U32(ctx, 31, 0x2A513Cu);
    ctx->pc = 0x2A5138u;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A513Cu; }
    }
    if (ctx->pc != 0x2A513Cu) { return; }
    ctx->pc = 0x2A513Cu;
    // 0x2a513c: 0x40802d
    ctx->pc = 0x2a513cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5140: 0x8e23e144
    ctx->pc = 0x2a5140u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4294959428)));
    // 0x2a5144: 0x2031823
    ctx->pc = 0x2a5144u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2a5148: 0x3c0211e1
    ctx->pc = 0x2a5148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4577 << 16));
    // 0x2a514c: 0x3442a300
    ctx->pc = 0x2a514cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 41728));
    // 0x2a5150: 0x43102b
    ctx->pc = 0x2a5150u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a5154: 0x10400006
    ctx->pc = 0x2A5154u;
    {
        const bool branch_taken_0x2a5154 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A5158u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a5154) {
            ctx->pc = 0x2A5170u;
            goto label_2a5170;
        }
    }
    ctx->pc = 0x2A515Cu;
    // 0x2a515c: 0x24050001
    ctx->pc = 0x2a515cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5160: 0x3c06003b
    ctx->pc = 0x2a5160u;
    SET_GPR_U32(ctx, 6, ((uint32_t)59 << 16));
    // 0x2a5164: 0xc0ad014
    ctx->pc = 0x2A5164u;
    SET_GPR_U32(ctx, 31, 0x2A516Cu);
    ctx->pc = 0x2A5168u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294961656));
    ctx->pc = 0x2B4050u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbDBGetVuInfo_0x2b4050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A516Cu; }
    }
    if (ctx->pc != 0x2A516Cu) { return; }
    ctx->pc = 0x2A516Cu;
    // 0x2a516c: 0xae30e144
    ctx->pc = 0x2a516cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294959428), GPR_U32(ctx, 16));
label_2a5170:
    // 0x2a5170: 0xdfbf0020
    ctx->pc = 0x2a5170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5174:
    // 0x2a5174: 0xdfb10010
    ctx->pc = 0x2a5174u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5178: 0xdfb00000
    ctx->pc = 0x2a5178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a517c: 0x3e00008
    ctx->pc = 0x2A517Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5180u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5170u: goto label_2a5170;
            case 0x2A5174u: goto label_2a5174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A5184u;
}
