#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lo0bits
// Address: 0x1301e8 - 0x1302a8
void _lo0bits_0x1301e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1301e8u;

    // 0x1301e8: 0x8c830000
    ctx->pc = 0x1301e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1301ec: 0x30620007
    ctx->pc = 0x1301ecu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 7));
    // 0x1301f0: 0x1040000e
    ctx->pc = 0x1301F0u;
    {
        const bool branch_taken_0x1301f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1301F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x1301f0) {
            ctx->pc = 0x13022Cu;
            goto label_13022c;
        }
    }
    ctx->pc = 0x1301F8u;
    // 0x1301f8: 0x10400003
    ctx->pc = 0x1301F8u;
    {
        const bool branch_taken_0x1301f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1301FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x1301f8) {
            ctx->pc = 0x130208u;
            goto label_130208;
        }
    }
    ctx->pc = 0x130200u;
    // 0x130200: 0x3e00008
    ctx->pc = 0x130200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130204u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130208u;
label_130208:
    // 0x130208: 0x50400005
    ctx->pc = 0x130208u;
    {
        const bool branch_taken_0x130208 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x130208) {
            ctx->pc = 0x13020Cu;
            SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
            ctx->pc = 0x130220u;
            goto label_130220;
        }
    }
    ctx->pc = 0x130210u;
    // 0x130210: 0x31842
    ctx->pc = 0x130210u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x130214: 0x24020001
    ctx->pc = 0x130214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130218: 0x3e00008
    ctx->pc = 0x130218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13021Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0x24020002
    ctx->pc = 0x130220u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x130224: 0x3e00008
    ctx->pc = 0x130224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130228u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13022Cu;
label_13022c:
    // 0x13022c: 0x3062ffff
    ctx->pc = 0x13022cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 65535));
    // 0x130230: 0x14400003
    ctx->pc = 0x130230u;
    {
        const bool branch_taken_0x130230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130234u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130230) {
            ctx->pc = 0x130240u;
            goto label_130240;
        }
    }
    ctx->pc = 0x130238u;
    // 0x130238: 0x24050010
    ctx->pc = 0x130238u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x13023c: 0x31c02
    ctx->pc = 0x13023cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 16));
label_130240:
    // 0x130240: 0x306200ff
    ctx->pc = 0x130240u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 255));
    // 0x130244: 0x14400004
    ctx->pc = 0x130244u;
    {
        const bool branch_taken_0x130244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130248u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
        if (branch_taken_0x130244) {
            ctx->pc = 0x130258u;
            goto label_130258;
        }
    }
    ctx->pc = 0x13024Cu;
    // 0x13024c: 0x24a50008
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x130250: 0x31a02
    ctx->pc = 0x130250u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 8));
    // 0x130254: 0x3062000f
    ctx->pc = 0x130254u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 15));
label_130258:
    // 0x130258: 0x14400004
    ctx->pc = 0x130258u;
    {
        const bool branch_taken_0x130258 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x13025Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
        if (branch_taken_0x130258) {
            ctx->pc = 0x13026Cu;
            goto label_13026c;
        }
    }
    ctx->pc = 0x130260u;
    // 0x130260: 0x24a50004
    ctx->pc = 0x130260u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x130264: 0x31902
    ctx->pc = 0x130264u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 4));
    // 0x130268: 0x30620003
    ctx->pc = 0x130268u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 3));
label_13026c:
    // 0x13026c: 0x14400004
    ctx->pc = 0x13026Cu;
    {
        const bool branch_taken_0x13026c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x130270u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x13026c) {
            ctx->pc = 0x130280u;
            goto label_130280;
        }
    }
    ctx->pc = 0x130274u;
    // 0x130274: 0x24a50002
    ctx->pc = 0x130274u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x130278: 0x31882
    ctx->pc = 0x130278u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 2));
    // 0x13027c: 0x30620001
    ctx->pc = 0x13027cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
label_130280:
    // 0x130280: 0x54400007
    ctx->pc = 0x130280u;
    {
        const bool branch_taken_0x130280 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130280) {
            ctx->pc = 0x130284u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->pc = 0x1302A0u;
            goto label_1302a0;
        }
    }
    ctx->pc = 0x130288u;
    // 0x130288: 0x31842
    ctx->pc = 0x130288u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x13028c: 0x14600003
    ctx->pc = 0x13028Cu;
    {
        const bool branch_taken_0x13028c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x130290u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x13028c) {
            ctx->pc = 0x13029Cu;
            goto label_13029c;
        }
    }
    ctx->pc = 0x130294u;
    // 0x130294: 0x3e00008
    ctx->pc = 0x130294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130298u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13029Cu;
label_13029c:
    // 0x13029c: 0xac830000
    ctx->pc = 0x13029cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1302a0:
    // 0x1302a0: 0x3e00008
    ctx->pc = 0x1302A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1302A4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130208u: goto label_130208;
            case 0x130220u: goto label_130220;
            case 0x13022Cu: goto label_13022c;
            case 0x130240u: goto label_130240;
            case 0x130258u: goto label_130258;
            case 0x13026Cu: goto label_13026c;
            case 0x130280u: goto label_130280;
            case 0x13029Cu: goto label_13029c;
            case 0x1302A0u: goto label_1302a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1302A8u;
}
