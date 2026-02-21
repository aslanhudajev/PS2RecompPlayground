#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_all_dir_info
// Address: 0x208298 - 0x208388
void init_all_dir_info_0x208298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208298u;

    // 0x208298: 0x27bdffd0
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20829c: 0xffbf0020
    ctx->pc = 0x20829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2082a0: 0xffbe0010
    ctx->pc = 0x2082a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2082a4: 0x3a0f02d
    ctx->pc = 0x2082a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082a8: 0x0
    ctx->pc = 0x2082a8u;
    // NOP
    // 0x2082ac: 0xafc00000
    ctx->pc = 0x2082acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_2082b0:
    // 0x2082b0: 0x8fc20000
    ctx->pc = 0x2082b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2082b4: 0x28430002
    ctx->pc = 0x2082b4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x2082b8: 0x14600003
    ctx->pc = 0x2082B8u;
    {
        const bool branch_taken_0x2082b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2082b8) {
            ctx->pc = 0x2082C8u;
            goto label_2082c8;
        }
    }
    ctx->pc = 0x2082C0u;
    // 0x2082c0: 0x1000002b
    ctx->pc = 0x2082C0u;
    {
        const bool branch_taken_0x2082c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2082c0) {
            ctx->pc = 0x208370u;
            goto label_208370;
        }
    }
    ctx->pc = 0x2082C8u;
label_2082c8:
    // 0x2082c8: 0xafc00004
    ctx->pc = 0x2082c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2082cc: 0x0
    ctx->pc = 0x2082ccu;
    // NOP
label_2082d0:
    // 0x2082d0: 0x8fc20004
    ctx->pc = 0x2082d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2082d4: 0x28430004
    ctx->pc = 0x2082d4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x2082d8: 0x14600003
    ctx->pc = 0x2082D8u;
    {
        const bool branch_taken_0x2082d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2082d8) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x2082E0u;
    // 0x2082e0: 0x1000001e
    ctx->pc = 0x2082E0u;
    {
        const bool branch_taken_0x2082e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2082e0) {
            ctx->pc = 0x20835Cu;
            goto label_20835c;
        }
    }
    ctx->pc = 0x2082E8u;
label_2082e8:
    // 0x2082e8: 0x8fc20000
    ctx->pc = 0x2082e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2082ec: 0x24030210
    ctx->pc = 0x2082ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 528));
    // 0x2082f0: 0x431018
    ctx->pc = 0x2082f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2082f4: 0x8fc30004
    ctx->pc = 0x2082f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x2082f8: 0x24040084
    ctx->pc = 0x2082f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 132));
    // 0x2082fc: 0x641818
    ctx->pc = 0x2082fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x208300: 0x3c040031
    ctx->pc = 0x208300u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x208304: 0x24841e60
    ctx->pc = 0x208304u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 7776));
    // 0x208308: 0x641821
    ctx->pc = 0x208308u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20830c: 0x431021
    ctx->pc = 0x20830cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208310: 0x40202d
    ctx->pc = 0x208310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208314: 0xc082076
    ctx->pc = 0x208314u;
    SET_GPR_U32(ctx, 31, 0x20831Cu);
    ctx->pc = 0x2081D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_files_0x2081d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20831Cu; }
    }
    if (ctx->pc != 0x20831Cu) { return; }
    ctx->pc = 0x20831Cu;
    // 0x20831c: 0x8fc20004
    ctx->pc = 0x20831cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x208320: 0x24030084
    ctx->pc = 0x208320u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 132));
    // 0x208324: 0x431018
    ctx->pc = 0x208324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x208328: 0x8fc30000
    ctx->pc = 0x208328u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20832c: 0x24040210
    ctx->pc = 0x20832cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 528));
    // 0x208330: 0x641818
    ctx->pc = 0x208330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x208334: 0x431021
    ctx->pc = 0x208334u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x208338: 0x3c030031
    ctx->pc = 0x208338u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20833c: 0x24631ee0
    ctx->pc = 0x20833cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7904));
    // 0x208340: 0x621021
    ctx->pc = 0x208340u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x208344: 0xac400000
    ctx->pc = 0x208344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x208348: 0x8fc20004
    ctx->pc = 0x208348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20834c: 0x24430001
    ctx->pc = 0x20834cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208350: 0xafc30004
    ctx->pc = 0x208350u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x208354: 0x1000ffde
    ctx->pc = 0x208354u;
    {
        const bool branch_taken_0x208354 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208354) {
            ctx->pc = 0x2082D0u;
            goto label_2082d0;
        }
    }
    ctx->pc = 0x20835Cu;
label_20835c:
    // 0x20835c: 0x8fc20000
    ctx->pc = 0x20835cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x208360: 0x24430001
    ctx->pc = 0x208360u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x208364: 0xafc30000
    ctx->pc = 0x208364u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x208368: 0x1000ffd1
    ctx->pc = 0x208368u;
    {
        const bool branch_taken_0x208368 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208368) {
            ctx->pc = 0x2082B0u;
            goto label_2082b0;
        }
    }
    ctx->pc = 0x208370u;
label_208370:
    // 0x208370: 0x3c0e82d
    ctx->pc = 0x208370u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208374: 0xdfbf0020
    ctx->pc = 0x208374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208378: 0xdfbe0010
    ctx->pc = 0x208378u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20837c: 0x27bd0030
    ctx->pc = 0x20837cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x208380: 0x3e00008
    ctx->pc = 0x208380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2082B0u: goto label_2082b0;
            case 0x2082C8u: goto label_2082c8;
            case 0x2082D0u: goto label_2082d0;
            case 0x2082E8u: goto label_2082e8;
            case 0x20835Cu: goto label_20835c;
            case 0x208370u: goto label_208370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x208388u;
}
