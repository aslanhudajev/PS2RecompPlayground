#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPS_Create
// Address: 0x1952e8 - 0x195380
void SFMPS_Create_0x1952e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPS_Create");


    ctx->pc = 0x1952e8u;

    // 0x1952e8: 0x27bdffd0
    ctx->pc = 0x1952e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1952ec: 0xffb10010
    ctx->pc = 0x1952ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1952f0: 0x80882d
    ctx->pc = 0x1952f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1952f4: 0xffb00000
    ctx->pc = 0x1952f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1952f8: 0xffbf0020
    ctx->pc = 0x1952f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1952fc: 0xc0654e0
    ctx->pc = 0x1952FCu;
    SET_GPR_U32(ctx, 31, 0x195304u);
    ctx->pc = 0x195300u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 12384));
    ctx->pc = 0x195380u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_InitInf_0x195380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195304u; }
        else if (ctx->pc != 0x195304u) { ctx->pc = 0x195304u; }
    }
    if (ctx->pc != 0x195304u) { return; }
    ctx->pc = 0x195304u;
    // 0x195304: 0xc0609fa
    ctx->pc = 0x195304u;
    SET_GPR_U32(ctx, 31, 0x19530Cu);
    ctx->pc = 0x1827E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_Create_0x1827e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19530Cu; }
        else if (ctx->pc != 0x19530Cu) { ctx->pc = 0x19530Cu; }
    }
    if (ctx->pc != 0x19530Cu) { return; }
    ctx->pc = 0x19530Cu;
    // 0x19530c: 0x40802d
    ctx->pc = 0x19530cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195310: 0x16000007
    ctx->pc = 0x195310u;
    {
        const bool branch_taken_0x195310 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x195314u;
        SET_GPR_U32(ctx, 5, ((uint32_t)25 << 16));
        if (branch_taken_0x195310) {
            ctx->pc = 0x195330u;
            goto label_195330;
        }
    }
    ctx->pc = 0x195318u;
    // 0x195318: 0x3c05ff00
    ctx->pc = 0x195318u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19531c: 0x220202d
    ctx->pc = 0x19531cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195320: 0xc064ea0
    ctx->pc = 0x195320u;
    SET_GPR_U32(ctx, 31, 0x195328u);
    ctx->pc = 0x195324u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3336));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195328u; }
        else if (ctx->pc != 0x195328u) { ctx->pc = 0x195328u; }
    }
    if (ctx->pc != 0x195328u) { return; }
    ctx->pc = 0x195328u;
    // 0x195328: 0x10000011
    ctx->pc = 0x195328u;
    {
        const bool branch_taken_0x195328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19532Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x195328) {
            ctx->pc = 0x195370u;
            goto label_195370;
        }
    }
    ctx->pc = 0x195330u;
label_195330:
    // 0x195330: 0x200202d
    ctx->pc = 0x195330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195334: 0x24a553c0
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 21440));
    // 0x195338: 0xc0609a4
    ctx->pc = 0x195338u;
    SET_GPR_U32(ctx, 31, 0x195340u);
    ctx->pc = 0x19533Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182690u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_SetErrFn_0x182690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195340u; }
        else if (ctx->pc != 0x195340u) { ctx->pc = 0x195340u; }
    }
    if (ctx->pc != 0x195340u) { return; }
    ctx->pc = 0x195340u;
    // 0x195340: 0x50400009
    ctx->pc = 0x195340u;
    {
        const bool branch_taken_0x195340 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x195340) {
            ctx->pc = 0x195344u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 12384), GPR_U32(ctx, 16));
            ctx->pc = 0x195368u;
            goto label_195368;
        }
    }
    ctx->pc = 0x195348u;
    // 0x195348: 0xc065504
    ctx->pc = 0x195348u;
    SET_GPR_U32(ctx, 31, 0x195350u);
    ctx->pc = 0x19534Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195410u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_DestroySub_0x195410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195350u; }
        else if (ctx->pc != 0x195350u) { ctx->pc = 0x195350u; }
    }
    if (ctx->pc != 0x195350u) { return; }
    ctx->pc = 0x195350u;
    // 0x195350: 0x3c05ff00
    ctx->pc = 0x195350u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x195354: 0x220202d
    ctx->pc = 0x195354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195358: 0xc064ea0
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3337));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195360u; }
        else if (ctx->pc != 0x195360u) { ctx->pc = 0x195360u; }
    }
    if (ctx->pc != 0x195360u) { return; }
    ctx->pc = 0x195360u;
    // 0x195360: 0x10000003
    ctx->pc = 0x195360u;
    {
        const bool branch_taken_0x195360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x195364u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x195360) {
            ctx->pc = 0x195370u;
            goto label_195370;
        }
    }
    ctx->pc = 0x195368u;
label_195368:
    // 0x195368: 0x102d
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19536c: 0xdfbf0020
    ctx->pc = 0x19536cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195370:
    // 0x195370: 0xdfb10010
    ctx->pc = 0x195370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195374: 0xdfb00000
    ctx->pc = 0x195374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195378: 0x3e00008
    ctx->pc = 0x195378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19537Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195330u: goto label_195330;
            case 0x195368u: goto label_195368;
            case 0x195370u: goto label_195370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195380u;
}
