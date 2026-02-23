#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_CloseSjStm
// Address: 0x16b7c0 - 0x16b830
void adxf_CloseSjStm_0x16b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_CloseSjStm");


    ctx->pc = 0x16b7c0u;

label_16b7c0:
    // 0x16b7c0: 0x27bdffe0
    ctx->pc = 0x16b7c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_16b7c4:
    // 0x16b7c4: 0xffb00000
    ctx->pc = 0x16b7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16b7c8:
    // 0x16b7c8: 0xffbf0010
    ctx->pc = 0x16b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_16b7cc:
    // 0x16b7cc: 0x80802d
    ctx->pc = 0x16b7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16b7d0:
    // 0x16b7d0: 0x8e050008
    ctx->pc = 0x16b7d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16b7d4:
    // 0x16b7d4: 0x10a00013
label_16b7d8:
    if (ctx->pc == 0x16B7D8u) {
        ctx->pc = 0x16B7D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x16B7DCu;
        goto label_16b7dc;
    }
    ctx->pc = 0x16B7D4u;
    {
        const bool branch_taken_0x16b7d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B7D8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x16b7d4) {
            ctx->pc = 0x16B824u;
            goto label_16b824;
        }
    }
    ctx->pc = 0x16B7DCu;
label_16b7dc:
    // 0x16b7dc: 0x82020002
    ctx->pc = 0x16b7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_16b7e0:
    // 0x16b7e0: 0x54400011
label_16b7e4:
    if (ctx->pc == 0x16B7E4u) {
        ctx->pc = 0x16B7E4u;
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16B7E8u;
        goto label_16b7e8;
    }
    ctx->pc = 0x16B7E0u;
    {
        const bool branch_taken_0x16b7e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16b7e0) {
            ctx->pc = 0x16B7E4u;
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->pc = 0x16B828u;
            goto label_16b828;
        }
    }
    ctx->pc = 0x16B7E8u;
label_16b7e8:
    // 0x16b7e8: 0x3c020023
    ctx->pc = 0x16b7e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_16b7ec:
    // 0x16b7ec: 0x24040001
    ctx->pc = 0x16b7ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_16b7f0:
    // 0x16b7f0: 0x8c43cd18
    ctx->pc = 0x16b7f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954264)));
label_16b7f4:
    // 0x16b7f4: 0x54640006
label_16b7f8:
    if (ctx->pc == 0x16B7F8u) {
        ctx->pc = 0x16B7F8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x16B7FCu;
        goto label_16b7fc;
    }
    ctx->pc = 0x16B7F4u;
    {
        const bool branch_taken_0x16b7f4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        if (branch_taken_0x16b7f4) {
            ctx->pc = 0x16B7F8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->pc = 0x16B810u;
            goto label_16b810;
        }
    }
    ctx->pc = 0x16B7FCu;
label_16b7fc:
    // 0x16b7fc: 0x8e040024
    ctx->pc = 0x16b7fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_16b800:
    // 0x16b800: 0xc05a8e6
label_16b804:
    if (ctx->pc == 0x16B804u) {
        ctx->pc = 0x16B804u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x16B808u;
        goto label_16b808;
    }
    ctx->pc = 0x16B800u;
    SET_GPR_U32(ctx, 31, 0x16B808u);
    ctx->pc = 0x16B804u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x16A398u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Ocbi_0x16a398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B808u; }
        else if (ctx->pc != 0x16B808u) { ctx->pc = 0x16B808u; }
    }
    if (ctx->pc != 0x16B808u) { return; }
    ctx->pc = 0x16B808u;
label_16b808:
    // 0x16b808: 0x8e050008
    ctx->pc = 0x16b808u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_16b80c:
    // 0x16b80c: 0x8ca30000
    ctx->pc = 0x16b80cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16b810:
    // 0x16b810: 0x8c62000c
    ctx->pc = 0x16b810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_16b814:
    // 0x16b814: 0x40f809
label_16b818:
    if (ctx->pc == 0x16B818u) {
        ctx->pc = 0x16B818u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16B81Cu;
        goto label_16b81c;
    }
    ctx->pc = 0x16B814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16B81Cu);
        ctx->pc = 0x16B818u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B7C0u: goto label_16b7c0;
            case 0x16B7C4u: goto label_16b7c4;
            case 0x16B7C8u: goto label_16b7c8;
            case 0x16B7CCu: goto label_16b7cc;
            case 0x16B7D0u: goto label_16b7d0;
            case 0x16B7D4u: goto label_16b7d4;
            case 0x16B7D8u: goto label_16b7d8;
            case 0x16B7DCu: goto label_16b7dc;
            case 0x16B7E0u: goto label_16b7e0;
            case 0x16B7E4u: goto label_16b7e4;
            case 0x16B7E8u: goto label_16b7e8;
            case 0x16B7ECu: goto label_16b7ec;
            case 0x16B7F0u: goto label_16b7f0;
            case 0x16B7F4u: goto label_16b7f4;
            case 0x16B7F8u: goto label_16b7f8;
            case 0x16B7FCu: goto label_16b7fc;
            case 0x16B800u: goto label_16b800;
            case 0x16B804u: goto label_16b804;
            case 0x16B808u: goto label_16b808;
            case 0x16B80Cu: goto label_16b80c;
            case 0x16B810u: goto label_16b810;
            case 0x16B814u: goto label_16b814;
            case 0x16B818u: goto label_16b818;
            case 0x16B81Cu: goto label_16b81c;
            case 0x16B820u: goto label_16b820;
            case 0x16B824u: goto label_16b824;
            case 0x16B828u: goto label_16b828;
            case 0x16B82Cu: goto label_16b82c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16B81Cu; }
            if (ctx->pc != 0x16B81Cu) { return; }
        }
    }
    ctx->pc = 0x16B81Cu;
label_16b81c:
    // 0x16b81c: 0xae000008
    ctx->pc = 0x16b81cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_16b820:
    // 0x16b820: 0xdfbf0010
    ctx->pc = 0x16b820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16b824:
    // 0x16b824: 0xdfb00000
    ctx->pc = 0x16b824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b828:
    // 0x16b828: 0x3e00008
label_16b82c:
    if (ctx->pc == 0x16B82Cu) {
        ctx->pc = 0x16B82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16B830u;
        goto label_fallthrough_0x16b828;
    }
    ctx->pc = 0x16B828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B82Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B7C0u: goto label_16b7c0;
            case 0x16B7C4u: goto label_16b7c4;
            case 0x16B7C8u: goto label_16b7c8;
            case 0x16B7CCu: goto label_16b7cc;
            case 0x16B7D0u: goto label_16b7d0;
            case 0x16B7D4u: goto label_16b7d4;
            case 0x16B7D8u: goto label_16b7d8;
            case 0x16B7DCu: goto label_16b7dc;
            case 0x16B7E0u: goto label_16b7e0;
            case 0x16B7E4u: goto label_16b7e4;
            case 0x16B7E8u: goto label_16b7e8;
            case 0x16B7ECu: goto label_16b7ec;
            case 0x16B7F0u: goto label_16b7f0;
            case 0x16B7F4u: goto label_16b7f4;
            case 0x16B7F8u: goto label_16b7f8;
            case 0x16B7FCu: goto label_16b7fc;
            case 0x16B800u: goto label_16b800;
            case 0x16B804u: goto label_16b804;
            case 0x16B808u: goto label_16b808;
            case 0x16B80Cu: goto label_16b80c;
            case 0x16B810u: goto label_16b810;
            case 0x16B814u: goto label_16b814;
            case 0x16B818u: goto label_16b818;
            case 0x16B81Cu: goto label_16b81c;
            case 0x16B820u: goto label_16b820;
            case 0x16B824u: goto label_16b824;
            case 0x16B828u: goto label_16b828;
            case 0x16B82Cu: goto label_16b82c;
            default: break;
        }
        return;
    }
label_fallthrough_0x16b828:
    ctx->pc = 0x16B830u;
}
