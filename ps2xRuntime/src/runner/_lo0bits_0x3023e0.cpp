#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lo0bits
// Address: 0x3023e0 - 0x3024a0
void _lo0bits_0x3023e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3023e0u;

    // 0x3023e0: 0x8c830000
    ctx->pc = 0x3023e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3023e4: 0x30620007
    ctx->pc = 0x3023e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
    // 0x3023e8: 0x1040000e
    ctx->pc = 0x3023E8u;
    {
        const bool branch_taken_0x3023e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3023ECu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x3023e8) {
            ctx->pc = 0x302424u;
            goto label_302424;
        }
    }
    ctx->pc = 0x3023F0u;
    // 0x3023f0: 0x10400003
    ctx->pc = 0x3023F0u;
    {
        const bool branch_taken_0x3023f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3023F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x3023f0) {
            ctx->pc = 0x302400u;
            goto label_302400;
        }
    }
    ctx->pc = 0x3023F8u;
    // 0x3023f8: 0x3e00008
    ctx->pc = 0x3023F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3023FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302400u: goto label_302400;
            case 0x302418u: goto label_302418;
            case 0x302424u: goto label_302424;
            case 0x302438u: goto label_302438;
            case 0x302450u: goto label_302450;
            case 0x302464u: goto label_302464;
            case 0x302478u: goto label_302478;
            case 0x302494u: goto label_302494;
            case 0x302498u: goto label_302498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302400u;
label_302400:
    // 0x302400: 0x50400005
    ctx->pc = 0x302400u;
    {
        const bool branch_taken_0x302400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x302400) {
            ctx->pc = 0x302404u;
            SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
            ctx->pc = 0x302418u;
            goto label_302418;
        }
    }
    ctx->pc = 0x302408u;
    // 0x302408: 0x31842
    ctx->pc = 0x302408u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x30240c: 0x24020001
    ctx->pc = 0x30240cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x302410: 0x3e00008
    ctx->pc = 0x302410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302414u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302400u: goto label_302400;
            case 0x302418u: goto label_302418;
            case 0x302424u: goto label_302424;
            case 0x302438u: goto label_302438;
            case 0x302450u: goto label_302450;
            case 0x302464u: goto label_302464;
            case 0x302478u: goto label_302478;
            case 0x302494u: goto label_302494;
            case 0x302498u: goto label_302498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302418u;
label_302418:
    // 0x302418: 0x24020002
    ctx->pc = 0x302418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x30241c: 0x3e00008
    ctx->pc = 0x30241Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302420u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302400u: goto label_302400;
            case 0x302418u: goto label_302418;
            case 0x302424u: goto label_302424;
            case 0x302438u: goto label_302438;
            case 0x302450u: goto label_302450;
            case 0x302464u: goto label_302464;
            case 0x302478u: goto label_302478;
            case 0x302494u: goto label_302494;
            case 0x302498u: goto label_302498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302424u;
label_302424:
    // 0x302424: 0x3062ffff
    ctx->pc = 0x302424u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x302428: 0x14400003
    ctx->pc = 0x302428u;
    {
        const bool branch_taken_0x302428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x30242Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x302428) {
            ctx->pc = 0x302438u;
            goto label_302438;
        }
    }
    ctx->pc = 0x302430u;
    // 0x302430: 0x24050010
    ctx->pc = 0x302430u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x302434: 0x31c02
    ctx->pc = 0x302434u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
label_302438:
    // 0x302438: 0x306200ff
    ctx->pc = 0x302438u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x30243c: 0x14400004
    ctx->pc = 0x30243Cu;
    {
        const bool branch_taken_0x30243c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x302440u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x30243c) {
            ctx->pc = 0x302450u;
            goto label_302450;
        }
    }
    ctx->pc = 0x302444u;
    // 0x302444: 0x24a50008
    ctx->pc = 0x302444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x302448: 0x31a02
    ctx->pc = 0x302448u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x30244c: 0x3062000f
    ctx->pc = 0x30244cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_302450:
    // 0x302450: 0x14400004
    ctx->pc = 0x302450u;
    {
        const bool branch_taken_0x302450 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x302454u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x302450) {
            ctx->pc = 0x302464u;
            goto label_302464;
        }
    }
    ctx->pc = 0x302458u;
    // 0x302458: 0x24a50004
    ctx->pc = 0x302458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x30245c: 0x31902
    ctx->pc = 0x30245cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x302460: 0x30620003
    ctx->pc = 0x302460u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
label_302464:
    // 0x302464: 0x14400004
    ctx->pc = 0x302464u;
    {
        const bool branch_taken_0x302464 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x302468u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x302464) {
            ctx->pc = 0x302478u;
            goto label_302478;
        }
    }
    ctx->pc = 0x30246Cu;
    // 0x30246c: 0x24a50002
    ctx->pc = 0x30246cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x302470: 0x31882
    ctx->pc = 0x302470u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
    // 0x302474: 0x30620001
    ctx->pc = 0x302474u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_302478:
    // 0x302478: 0x54400007
    ctx->pc = 0x302478u;
    {
        const bool branch_taken_0x302478 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x302478) {
            ctx->pc = 0x30247Cu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x302498u;
            goto label_302498;
        }
    }
    ctx->pc = 0x302480u;
    // 0x302480: 0x31842
    ctx->pc = 0x302480u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x302484: 0x14600003
    ctx->pc = 0x302484u;
    {
        const bool branch_taken_0x302484 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x302488u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x302484) {
            ctx->pc = 0x302494u;
            goto label_302494;
        }
    }
    ctx->pc = 0x30248Cu;
    // 0x30248c: 0x3e00008
    ctx->pc = 0x30248Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302490u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302400u: goto label_302400;
            case 0x302418u: goto label_302418;
            case 0x302424u: goto label_302424;
            case 0x302438u: goto label_302438;
            case 0x302450u: goto label_302450;
            case 0x302464u: goto label_302464;
            case 0x302478u: goto label_302478;
            case 0x302494u: goto label_302494;
            case 0x302498u: goto label_302498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x302494u;
label_302494:
    // 0x302494: 0xac830000
    ctx->pc = 0x302494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_302498:
    // 0x302498: 0x3e00008
    ctx->pc = 0x302498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30249Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x302400u: goto label_302400;
            case 0x302418u: goto label_302418;
            case 0x302424u: goto label_302424;
            case 0x302438u: goto label_302438;
            case 0x302450u: goto label_302450;
            case 0x302464u: goto label_302464;
            case 0x302478u: goto label_302478;
            case 0x302494u: goto label_302494;
            case 0x302498u: goto label_302498;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3024A0u;
}
