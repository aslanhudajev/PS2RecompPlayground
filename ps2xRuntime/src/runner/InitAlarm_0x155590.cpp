#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: InitAlarm
// Address: 0x155590 - 0x155664
void InitAlarm_0x155590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("InitAlarm");


    ctx->pc = 0x155590u;

    // 0x155590: 0x27bdffc0
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x155594: 0x3c021000
    ctx->pc = 0x155594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
    // 0x155598: 0xffbf0030
    ctx->pc = 0x155598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15559c: 0x34421810
    ctx->pc = 0x15559cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 6160));
    // 0x1555a0: 0xffb20020
    ctx->pc = 0x1555a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1555a4: 0xffb10010
    ctx->pc = 0x1555a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1555a8: 0xffb00000
    ctx->pc = 0x1555a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1555ac: 0x8c430000
    ctx->pc = 0x1555acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1555b0: 0x30630100
    ctx->pc = 0x1555b0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
    // 0x1555b4: 0x14600026
    ctx->pc = 0x1555B4u;
    {
        const bool branch_taken_0x1555b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1555B8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1555b4) {
            ctx->pc = 0x155650u;
            goto label_155650;
        }
    }
    ctx->pc = 0x1555BCu;
    // 0x1555bc: 0x3c020023
    ctx->pc = 0x1555bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1555c0: 0x24120002
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1555c4: 0x24509fe0
    ctx->pc = 0x1555c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294942688));
    // 0x1555c8: 0x8c449fe0
    ctx->pc = 0x1555c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294942688)));
    // 0x1555cc: 0x8e050004
    ctx->pc = 0x1555ccu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1555d0: 0xc05554a
    ctx->pc = 0x1555D0u;
    SET_GPR_U32(ctx, 31, 0x1555D8u);
    ctx->pc = 0x1555D4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x155528u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_0x155528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555D8u; }
        else if (ctx->pc != 0x1555D8u) { ctx->pc = 0x1555D8u; }
    }
    if (ctx->pc != 0x1555D8u) { return; }
    ctx->pc = 0x1555D8u;
    // 0x1555d8: 0x3c050023
    ctx->pc = 0x1555d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1555dc: 0x3c048007
    ctx->pc = 0x1555dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32775 << 16));
    // 0x1555e0: 0x24a59878
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294940792));
    // 0x1555e4: 0x34846000
    ctx->pc = 0x1555e4u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 24576));
    // 0x1555e8: 0xc05554e
    ctx->pc = 0x1555E8u;
    SET_GPR_U32(ctx, 31, 0x1555F0u);
    ctx->pc = 0x1555ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1856));
    ctx->pc = 0x155538u;
    {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x155538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1555F0u; }
        else if (ctx->pc != 0x1555F0u) { ctx->pc = 0x1555F0u; }
    }
    if (ctx->pc != 0x1555F0u) { return; }
    ctx->pc = 0x1555F0u;
    // 0x1555f0: 0x3c050023
    ctx->pc = 0x1555f0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x1555f4: 0x3c040008
    ctx->pc = 0x1555f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)8 << 16));
    // 0x1555f8: 0x24a59fb8
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294942648));
    // 0x1555fc: 0x34842000
    ctx->pc = 0x1555fcu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 8192));
    // 0x155600: 0xc05554e
    ctx->pc = 0x155600u;
    SET_GPR_U32(ctx, 31, 0x155608u);
    ctx->pc = 0x155604u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x155538u;
    {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x155538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155608u; }
        else if (ctx->pc != 0x155608u) { ctx->pc = 0x155608u; }
    }
    if (ctx->pc != 0x155608u) { return; }
    ctx->pc = 0x155608u;
    // 0x155608: 0xc0552d8
    ctx->pc = 0x155608u;
    SET_GPR_U32(ctx, 31, 0x155610u);
    ctx->pc = 0x15560Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155610u; }
        else if (ctx->pc != 0x155610u) { ctx->pc = 0x155610u; }
    }
    if (ctx->pc != 0x155610u) { return; }
    ctx->pc = 0x155610u;
    // 0x155610: 0xc0552d8
    ctx->pc = 0x155610u;
    SET_GPR_U32(ctx, 31, 0x155618u);
    ctx->pc = 0x155614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x154B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x154b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155618u; }
        else if (ctx->pc != 0x155618u) { ctx->pc = 0x155618u; }
    }
    if (ctx->pc != 0x155618u) { return; }
    ctx->pc = 0x155618u;
    // 0x155618: 0x8e040008
    ctx->pc = 0x155618u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15561c: 0xc05554a
    ctx->pc = 0x15561Cu;
    SET_GPR_U32(ctx, 31, 0x155624u);
    ctx->pc = 0x155620u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x155528u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_0x155528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155624u; }
        else if (ctx->pc != 0x155624u) { ctx->pc = 0x155624u; }
    }
    if (ctx->pc != 0x155624u) { return; }
    ctx->pc = 0x155624u;
    // 0x155624: 0x8e240000
    ctx->pc = 0x155624u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_155628:
    // 0x155628: 0xc055560
    ctx->pc = 0x155628u;
    SET_GPR_U32(ctx, 31, 0x155630u);
    ctx->pc = 0x15562Cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x155580u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x155580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155630u; }
        else if (ctx->pc != 0x155630u) { ctx->pc = 0x155630u; }
    }
    if (ctx->pc != 0x155630u) { return; }
    ctx->pc = 0x155630u;
    // 0x155630: 0x8e240000
    ctx->pc = 0x155630u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155634: 0x40282d
    ctx->pc = 0x155634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155638: 0xc05554a
    ctx->pc = 0x155638u;
    SET_GPR_U32(ctx, 31, 0x155640u);
    ctx->pc = 0x15563Cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
    ctx->pc = 0x155528u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_0x155528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155640u; }
        else if (ctx->pc != 0x155640u) { ctx->pc = 0x155640u; }
    }
    if (ctx->pc != 0x155640u) { return; }
    ctx->pc = 0x155640u;
    // 0x155640: 0x2e420008
    ctx->pc = 0x155640u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 8));
    // 0x155644: 0x5440fff8
    ctx->pc = 0x155644u;
    {
        const bool branch_taken_0x155644 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x155644) {
            ctx->pc = 0x155648u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x155628u;
            goto label_155628;
        }
    }
    ctx->pc = 0x15564Cu;
    // 0x15564c: 0xdfbf0030
    ctx->pc = 0x15564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_155650:
    // 0x155650: 0xdfb20020
    ctx->pc = 0x155650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x155654: 0xdfb10010
    ctx->pc = 0x155654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155658: 0xdfb00000
    ctx->pc = 0x155658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15565c: 0x3e00008
    ctx->pc = 0x15565Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155660u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155628u: goto label_155628;
            case 0x155650u: goto label_155650;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155664u;
}
