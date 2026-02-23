#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_set_outpan
// Address: 0x173148 - 0x173208
void adxt_set_outpan_0x173148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_set_outpan");


    ctx->pc = 0x173148u;

    // 0x173148: 0x27bdffe0
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17314c: 0xffb00000
    ctx->pc = 0x17314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173150: 0xffbf0010
    ctx->pc = 0x173150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173154: 0x80802d
    ctx->pc = 0x173154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173158: 0xc05b9e4
    ctx->pc = 0x173158u;
    SET_GPR_U32(ctx, 31, 0x173160u);
    ctx->pc = 0x17315Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x16E790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumChan_0x16e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173160u; }
        else if (ctx->pc != 0x173160u) { ctx->pc = 0x173160u; }
    }
    if (ctx->pc != 0x173160u) { return; }
    ctx->pc = 0x173160u;
    // 0x173160: 0x24030001
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x173164: 0x1443000f
    ctx->pc = 0x173164u;
    {
        const bool branch_taken_0x173164 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x173168u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 66)));
        if (branch_taken_0x173164) {
            ctx->pc = 0x1731A4u;
            goto label_1731a4;
        }
    }
    ctx->pc = 0x17316Cu;
    // 0x17316c: 0x2402ff80
    ctx->pc = 0x17316cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x173170: 0x14c20007
    ctx->pc = 0x173170u;
    {
        const bool branch_taken_0x173170 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x173174u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x173170) {
            ctx->pc = 0x173190u;
            goto label_173190;
        }
    }
    ctx->pc = 0x173178u;
    // 0x173178: 0x282d
    ctx->pc = 0x173178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17317c: 0xdfbf0010
    ctx->pc = 0x17317cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173180: 0x302d
    ctx->pc = 0x173180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173184: 0xdfb00000
    ctx->pc = 0x173184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173188: 0x805b6be
    ctx->pc = 0x173188u;
    ctx->pc = 0x17318Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16DAF8u;
    ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime); return;
    ctx->pc = 0x173190u;
label_173190:
    // 0x173190: 0x282d
    ctx->pc = 0x173190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173194: 0xdfbf0010
    ctx->pc = 0x173194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173198: 0xdfb00000
    ctx->pc = 0x173198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17319c: 0x805b6be
    ctx->pc = 0x17319Cu;
    ctx->pc = 0x1731A0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16DAF8u;
    ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime); return;
    ctx->pc = 0x1731A4u;
label_1731a4:
    // 0x1731a4: 0x2402ff80
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1731a8: 0x14c20006
    ctx->pc = 0x1731A8u;
    {
        const bool branch_taken_0x1731a8 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1731ACu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x1731a8) {
            ctx->pc = 0x1731C4u;
            goto label_1731c4;
        }
    }
    ctx->pc = 0x1731B0u;
    // 0x1731b0: 0x282d
    ctx->pc = 0x1731b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731b4: 0xc05b6be
    ctx->pc = 0x1731B4u;
    SET_GPR_U32(ctx, 31, 0x1731BCu);
    ctx->pc = 0x1731B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967281));
    ctx->pc = 0x16DAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731BCu; }
        else if (ctx->pc != 0x1731BCu) { ctx->pc = 0x1731BCu; }
    }
    if (ctx->pc != 0x1731BCu) { return; }
    ctx->pc = 0x1731BCu;
    // 0x1731bc: 0x10000004
    ctx->pc = 0x1731BCu;
    {
        const bool branch_taken_0x1731bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1731C0u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
        if (branch_taken_0x1731bc) {
            ctx->pc = 0x1731D0u;
            goto label_1731d0;
        }
    }
    ctx->pc = 0x1731C4u;
label_1731c4:
    // 0x1731c4: 0xc05b6be
    ctx->pc = 0x1731C4u;
    SET_GPR_U32(ctx, 31, 0x1731CCu);
    ctx->pc = 0x1731C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731CCu; }
        else if (ctx->pc != 0x1731CCu) { ctx->pc = 0x1731CCu; }
    }
    if (ctx->pc != 0x1731CCu) { return; }
    ctx->pc = 0x1731CCu;
    // 0x1731cc: 0x86060044
    ctx->pc = 0x1731ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1731d0:
    // 0x1731d0: 0x2402ff80
    ctx->pc = 0x1731d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x1731d4: 0x14c20007
    ctx->pc = 0x1731D4u;
    {
        const bool branch_taken_0x1731d4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x1731D8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
        if (branch_taken_0x1731d4) {
            ctx->pc = 0x1731F4u;
            goto label_1731f4;
        }
    }
    ctx->pc = 0x1731DCu;
    // 0x1731dc: 0x24050001
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1731e0: 0xdfbf0010
    ctx->pc = 0x1731e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731e4: 0x2406000f
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    // 0x1731e8: 0xdfb00000
    ctx->pc = 0x1731e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1731ec: 0x805b6be
    ctx->pc = 0x1731ECu;
    ctx->pc = 0x1731F0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16DAF8u;
    ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime); return;
    ctx->pc = 0x1731F4u;
label_1731f4:
    // 0x1731f4: 0x24050001
    ctx->pc = 0x1731f4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1731f8: 0xdfbf0010
    ctx->pc = 0x1731f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1731fc: 0xdfb00000
    ctx->pc = 0x1731fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173200: 0x805b6be
    ctx->pc = 0x173200u;
    ctx->pc = 0x173204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x16DAF8u;
    ADXRNA_SetOutPan_0x16daf8(rdram, ctx, runtime); return;
    ctx->pc = 0x173208u;
}
