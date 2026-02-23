#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_ScanInfoCode
// Address: 0x1695d8 - 0x16964c
void ADX_ScanInfoCode_0x1695d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_ScanInfoCode");


    ctx->pc = 0x1695d8u;

    // 0x1695d8: 0x3c087fff
    ctx->pc = 0x1695d8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)32767 << 16));
    // 0x1695dc: 0x24a5ffff
    ctx->pc = 0x1695dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1695e0: 0x3508ffff
    ctx->pc = 0x1695e0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), 65535));
    // 0x1695e4: 0x24090080
    ctx->pc = 0x1695e4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    // 0x1695e8: 0x18a0000f
    ctx->pc = 0x1695E8u;
    {
        const bool branch_taken_0x1695e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1695ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1695e8) {
            ctx->pc = 0x169628u;
            goto label_169628;
        }
    }
    ctx->pc = 0x1695F0u;
    // 0x1695f0: 0x84820000
    ctx->pc = 0x1695f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1695f4: 0x14490004
    ctx->pc = 0x1695F4u;
    {
        const bool branch_taken_0x1695f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 9));
        ctx->pc = 0x1695F8u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
        if (branch_taken_0x1695f4) {
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x1695FCu;
    // 0x1695fc: 0x1000000a
    ctx->pc = 0x1695FCu;
    {
        const bool branch_taken_0x1695fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x169600u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1695fc) {
            ctx->pc = 0x169628u;
            goto label_169628;
        }
    }
    ctx->pc = 0x169604u;
    // 0x169604: 0x0
    ctx->pc = 0x169604u;
    // NOP
label_169608:
    // 0x169608: 0xe5102a
    ctx->pc = 0x169608u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 5)));
    // 0x16960c: 0x10400006
    ctx->pc = 0x16960Cu;
    {
        const bool branch_taken_0x16960c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x169610u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        if (branch_taken_0x16960c) {
            ctx->pc = 0x169628u;
            goto label_169628;
        }
    }
    ctx->pc = 0x169614u;
    // 0x169614: 0x84430000
    ctx->pc = 0x169614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x169618: 0x5469fffb
    ctx->pc = 0x169618u;
    {
        const bool branch_taken_0x169618 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 9));
        if (branch_taken_0x169618) {
            ctx->pc = 0x16961Cu;
            SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 2));
            ctx->pc = 0x169608u;
            goto label_169608;
        }
    }
    ctx->pc = 0x169620u;
    // 0x169620: 0xe8102a
    ctx->pc = 0x169620u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 8)));
    // 0x169624: 0xe2400b
    ctx->pc = 0x169624u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 7));
label_169628:
    // 0x169628: 0x3c027fff
    ctx->pc = 0x169628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16962c: 0x3442ffff
    ctx->pc = 0x16962cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x169630: 0x51020004
    ctx->pc = 0x169630u;
    {
        const bool branch_taken_0x169630 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        if (branch_taken_0x169630) {
            ctx->pc = 0x169634u;
            WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x169644u;
            goto label_169644;
        }
    }
    ctx->pc = 0x169638u;
    // 0x169638: 0xa4c80000
    ctx->pc = 0x169638u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x16963c: 0x3e00008
    ctx->pc = 0x16963Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169640u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169608u: goto label_169608;
            case 0x169628u: goto label_169628;
            case 0x169644u: goto label_169644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169644u;
label_169644:
    // 0x169644: 0x3e00008
    ctx->pc = 0x169644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169648u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169608u: goto label_169608;
            case 0x169628u: goto label_169628;
            case 0x169644u: goto label_169644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16964Cu;
}
