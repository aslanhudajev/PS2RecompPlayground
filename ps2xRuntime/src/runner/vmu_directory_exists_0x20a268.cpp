#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: vmu_directory_exists
// Address: 0x20a268 - 0x20a39c
void vmu_directory_exists_0x20a268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a268u;

    // 0x20a268: 0x27bdffd0
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20a26c: 0xffbf0020
    ctx->pc = 0x20a26cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20a270: 0xffbe0010
    ctx->pc = 0x20a270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x20a274: 0x3a0f02d
    ctx->pc = 0x20a274u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a278: 0xafc00008
    ctx->pc = 0x20a278u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x20a27c: 0xafc00000
    ctx->pc = 0x20a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_20a280:
    // 0x20a280: 0x8fc20000
    ctx->pc = 0x20a280u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a284: 0x28430002
    ctx->pc = 0x20a284u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 2));
    // 0x20a288: 0x14600003
    ctx->pc = 0x20A288u;
    {
        const bool branch_taken_0x20a288 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a288) {
            ctx->pc = 0x20A298u;
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A290u;
    // 0x20a290: 0x10000038
    ctx->pc = 0x20A290u;
    {
        const bool branch_taken_0x20a290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a290) {
            ctx->pc = 0x20A374u;
            goto label_20a374;
        }
    }
    ctx->pc = 0x20A298u;
label_20a298:
    // 0x20a298: 0xafc00004
    ctx->pc = 0x20a298u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x20a29c: 0x0
    ctx->pc = 0x20a29cu;
    // NOP
label_20a2a0:
    // 0x20a2a0: 0x8fc20004
    ctx->pc = 0x20a2a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a2a4: 0x28430004
    ctx->pc = 0x20a2a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 4));
    // 0x20a2a8: 0x14600003
    ctx->pc = 0x20A2A8u;
    {
        const bool branch_taken_0x20a2a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20a2a8) {
            ctx->pc = 0x20A2B8u;
            goto label_20a2b8;
        }
    }
    ctx->pc = 0x20A2B0u;
    // 0x20a2b0: 0x1000002b
    ctx->pc = 0x20A2B0u;
    {
        const bool branch_taken_0x20a2b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a2b0) {
            ctx->pc = 0x20A360u;
            goto label_20a360;
        }
    }
    ctx->pc = 0x20A2B8u;
label_20a2b8:
    // 0x20a2b8: 0x8fc20004
    ctx->pc = 0x20a2b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a2bc: 0x40182d
    ctx->pc = 0x20a2bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2c0: 0x31080
    ctx->pc = 0x20a2c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a2c4: 0x8fc30000
    ctx->pc = 0x20a2c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a2c8: 0x60202d
    ctx->pc = 0x20a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2cc: 0x41900
    ctx->pc = 0x20a2ccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a2d0: 0x431021
    ctx->pc = 0x20a2d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a2d4: 0x3c030031
    ctx->pc = 0x20a2d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a2d8: 0x24632280
    ctx->pc = 0x20a2d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
    // 0x20a2dc: 0x621021
    ctx->pc = 0x20a2dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a2e0: 0x8c430000
    ctx->pc = 0x20a2e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a2e4: 0x24020002
    ctx->pc = 0x20a2e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a2e8: 0x14620018
    ctx->pc = 0x20A2E8u;
    {
        const bool branch_taken_0x20a2e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20a2e8) {
            ctx->pc = 0x20A34Cu;
            goto label_20a34c;
        }
    }
    ctx->pc = 0x20A2F0u;
    // 0x20a2f0: 0x8fc20004
    ctx->pc = 0x20a2f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a2f4: 0x40182d
    ctx->pc = 0x20a2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a2f8: 0x31080
    ctx->pc = 0x20a2f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a2fc: 0x8fc30000
    ctx->pc = 0x20a2fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a300: 0x60202d
    ctx->pc = 0x20a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a304: 0x41900
    ctx->pc = 0x20a304u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
    // 0x20a308: 0x431021
    ctx->pc = 0x20a308u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20a30c: 0x3c030031
    ctx->pc = 0x20a30cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x20a310: 0x246322a0
    ctx->pc = 0x20a310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
    // 0x20a314: 0x621021
    ctx->pc = 0x20a314u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20a318: 0x8c430000
    ctx->pc = 0x20a318u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20a31c: 0x24020002
    ctx->pc = 0x20a31cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a320: 0x1462000a
    ctx->pc = 0x20A320u;
    {
        const bool branch_taken_0x20a320 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x20a320) {
            ctx->pc = 0x20A34Cu;
            goto label_20a34c;
        }
    }
    ctx->pc = 0x20A328u;
    // 0x20a328: 0x8fc40000
    ctx->pc = 0x20a328u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a32c: 0x8fc50004
    ctx->pc = 0x20a32cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a330: 0x2406ffff
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a334: 0xc082670
    ctx->pc = 0x20A334u;
    SET_GPR_U32(ctx, 31, 0x20A33Cu);
    ctx->pc = 0x2099C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        saveExists_0x2099c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A33Cu; }
    }
    if (ctx->pc != 0x20A33Cu) { return; }
    ctx->pc = 0x20A33Cu;
    // 0x20a33c: 0x10400003
    ctx->pc = 0x20A33Cu;
    {
        const bool branch_taken_0x20a33c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a33c) {
            ctx->pc = 0x20A34Cu;
            goto label_20a34c;
        }
    }
    ctx->pc = 0x20A344u;
    // 0x20a344: 0x24020001
    ctx->pc = 0x20a344u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a348: 0xafc20008
    ctx->pc = 0x20a348u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_20a34c:
    // 0x20a34c: 0x8fc20004
    ctx->pc = 0x20a34cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x20a350: 0x24430001
    ctx->pc = 0x20a350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a354: 0xafc30004
    ctx->pc = 0x20a354u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
    // 0x20a358: 0x1000ffd1
    ctx->pc = 0x20A358u;
    {
        const bool branch_taken_0x20a358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a358) {
            ctx->pc = 0x20A2A0u;
            goto label_20a2a0;
        }
    }
    ctx->pc = 0x20A360u;
label_20a360:
    // 0x20a360: 0x8fc20000
    ctx->pc = 0x20a360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x20a364: 0x24430001
    ctx->pc = 0x20a364u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20a368: 0xafc30000
    ctx->pc = 0x20a368u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x20a36c: 0x1000ffc4
    ctx->pc = 0x20A36Cu;
    {
        const bool branch_taken_0x20a36c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a36c) {
            ctx->pc = 0x20A280u;
            goto label_20a280;
        }
    }
    ctx->pc = 0x20A374u;
label_20a374:
    // 0x20a374: 0x8fc30008
    ctx->pc = 0x20a374u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x20a378: 0x60102d
    ctx->pc = 0x20a378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a37c: 0x10000001
    ctx->pc = 0x20A37Cu;
    {
        const bool branch_taken_0x20a37c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20a37c) {
            ctx->pc = 0x20A384u;
            goto label_20a384;
        }
    }
    ctx->pc = 0x20A384u;
label_20a384:
    // 0x20a384: 0x3c0e82d
    ctx->pc = 0x20a384u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a388: 0xdfbf0020
    ctx->pc = 0x20a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a38c: 0xdfbe0010
    ctx->pc = 0x20a38cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a390: 0x27bd0030
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x20a394: 0x3e00008
    ctx->pc = 0x20A394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A280u: goto label_20a280;
            case 0x20A298u: goto label_20a298;
            case 0x20A2A0u: goto label_20a2a0;
            case 0x20A2B8u: goto label_20a2b8;
            case 0x20A34Cu: goto label_20a34c;
            case 0x20A360u: goto label_20a360;
            case 0x20A374u: goto label_20a374;
            case 0x20A384u: goto label_20a384;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A39Cu;
}
